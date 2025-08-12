// Author: Carrito, inc.
// TODO: Winner verification - DONE
// TODO: Input overide scape - DONE
// TODO: Modularization
// TODO: No one wins condition

#include <iostream>
#include <vector>
#include "ttt.h"

int main()
{
    char player_x = 'X';
    char player_o = 'O';
    char current_player = player_x;
    bool turn_flag = true;
    int selected_tile;

    std::vector<char> board_state = {
        ' ',
        ' ',
        ' ',
        ' ',
        ' ',
        ' ',
        ' ',
        ' ',
        ' '};

    char winner = ' ';

    while (winner == ' ')
    {

        if (turn_flag)
        {
            current_player = player_x;
        }
        else
        {
            current_player = player_o;
        }

        std::cout << "Your turn, player " << current_player << " \n";
        std::cout << "Current board state: " << " \n";

        draw_board(board_state);

        std::cout << "Please enter a tile number:  " << " \n";
        std::cin >> selected_tile;

        if (board_state[selected_tile - 1] != ' ')
        {
            std::cout << "The selected tile already has a value. Please select a different one.\n";
        }
        else
        {

            board_state[selected_tile - 1] = current_player;
            if (turn_flag == 0)
            {
                turn_flag = 1;
            }
            else
            {
                turn_flag = 0;
            }

            winner = set_winner(board_state, current_player);
        }
    }

    draw_board(board_state);

    end_game(winner);
}