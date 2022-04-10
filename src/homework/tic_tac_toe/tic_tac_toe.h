//h
#include <iostream>
#include <string>
#include <vector>

#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

class TicTacToe
{

friend std::ostream& operator<<(std::ostream& out, const TicTacToe& game);
friend std::istream& operator>>(std::istream& (int), TicTacToe& game);


public:
    bool game_over();
    void start_game(std::string first_player);
    void mark_board(int position);
    std::string get_player()const{return player;}
    std::string get_winner();
    
private:
    std::string player;
    std::vector<std::string> pegs{9, " "};
    void set_next_player();
    bool check_board_full();
    void clear_board();
    bool check_column_win();
    bool check_row_win();
    bool check_diagonal_win();
    void set_winner();
    std::string winner;
};


#endif


#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H


class TicTacToeManager
{
friend std::ostream& operator<<(std::ostream & out, const TicTacToeManager & manager);

public:
    void saved_game(TicTacToe b);
    void get_winner_totals(int& o, int& w, int&t);

private:
    std::vector <TicTacToe>& game;
    int x_win;
    int o_win;
    int ties;
    void updated_winner_count(std::string winner);
};

#endif