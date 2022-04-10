//cpp
#include "tic_tac_toe.h"

using std::string; using std::cout;

std::string winner;
std::string player;
bool TicTacToe::game_over()
{
    if (check_row_win() == true)
    {
        set_winner();
        return true;
    }

    else if (check_column_win() == true)
    {    
        set_winner();
        return true;
    }

    else if (check_diagonal_win() == true)
    {
        set_winner();
        return true;
    }

    else 
    {
        winner = "c";
        return false;
    }

}

bool TicTacToe::check_diagonal_win()
{    
    if ((pegs[0] == "X" && pegs[4] == "X" && pegs[8] == "X") || (pegs[6] == "X" && pegs[4] == "X" && pegs[2] == "X"))
    {
        
        return true;
    }
    
     if ((pegs[0] == "O" && pegs[4] == "O" && pegs[8] == "O") || (pegs[6] == "O" && pegs[4] == "O" && pegs[2] == "O"))
    {
        
        return true;
    }
    
    else
    {
        
        return false;
    }
}

bool TicTacToe::check_column_win()
{
    if ((pegs[0] == "X" && pegs[3] == "X" && pegs[6] == "X") || (pegs[1] == "X" && pegs[4] == "X" && pegs[7] == "X") ||(pegs[2] == "X" && pegs[5] == "X" && pegs[8] == "X"))
    {
        
        return true;
    }
    
    else if ((pegs[0] == "O" && pegs[3] == "O" && pegs[6] == "O") || (pegs[1] == "O" && pegs[4] == "O" && pegs[7] == "O") ||(pegs[2] == "O" && pegs[5] == "O" && pegs[8] == "O"))
    {
        
        return true;
    }
    
    else
    {
        
        return false;
    }
    
}

bool TicTacToe::check_row_win()
{
    if ((pegs[0] == "X" && pegs[1] == "X" && pegs[2] == "X") || (pegs[3] == "X" && pegs[4] == "X" && pegs[5] == "X") ||(pegs[6] == "X" && pegs[7] == "X" && pegs[8] == "X"))
    {
        
        return true;
    }
    
    else if ((pegs[0] == "O" && pegs[1] == "O" && pegs[2] == "O") || (pegs[3] == "O" && pegs[4] == "O" && pegs[5] == "O") ||(pegs[6] == "O" && pegs[7] == "O" && pegs[8] == "O"))
    {
        
        return true;
    }
    
    else
    {
       
        return false;
    }
}

void TicTacToe::set_winner()
{
    if (player == "X")
    {
        winner = "O";
        cout<<"O is the winner\n";
    }
    else 
    {
        winner = "X";
        cout<<"X is the winner\n";
    }
}

void TicTacToe::start_game(string first_player)
{
    player = first_player;
    clear_board();
}

void TicTacToe::mark_board(int position)
{
    pegs[position-1] = player;
    set_next_player();
}


void TicTacToe::set_next_player()
{
    if(player == "X")
    {
        player = "O";
    }
    else
    {
        player = "X";
    }
}

bool TicTacToe::check_board_full()
{
    for(auto peg: pegs)
    {
        if(peg == " ")
        {
            return false;
        }
    }

    return true;
}

void TicTacToe::clear_board()
{
    for(auto& peg: pegs)
    {
        peg = " ";
    }
} 


