#include "tic_tac_toe.h"
#include <iostream>


void save_game();

void TicTacToeManager::get_winner_totals(int& x, int&o, int& t)
{
    x = x_win;
    o = o_win;
    t = ties;
}

std::ostream& operator<<(std::ostream& out, const TicTacToeManager& manager)
{

    for(auto game: manager.game)
    {
        out<<game<<"\n";
    }

    out<<"O wins: "<<manager.o_win<<"\n";
    out<<"X wins: "<<manager.x_win<<"\n";
    out<<"TIES: "<<manager.ties<<"\n";
    
    return out;
}
