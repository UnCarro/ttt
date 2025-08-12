#include <iostream>
#include <vector>

void draw_board(std::vector<char> board)
{

    std::cout << "     |     |      \n";

    std::cout << "  " << board[0] << "  |  " << board[1] << "  |  " << board[2] << "\n";

    std::cout << "_____|_____|_____ \n";
    std::cout << "     |     |      \n";

    std::cout << "  " << board[3] << "  |  " << board[4] << "  |  " << board[5] << "\n";

    std::cout << "_____|_____|_____ \n";
    std::cout << "     |     |      \n";

    std::cout << "  " << board[6] << "  |  " << board[7] << "  |  " << board[8] << "\n";
    std::cout << "     |     |      \n";

    std::cout << "\n";
}

char set_winner(std::vector<char> board_state, char current_player)
{
    std::vector<bool> boolean_board_state = {
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
    };

    std::vector<std::vector<bool>> winning_states = {
        {
            true,
            true,
            true,
            false,
            false,
            false,
            false,
            false,
            false,
        },
        {

            false,
            false,
            false,
            true,
            true,
            true,
            false,
            false,
            false,
        },
        {
            false,
            false,
            false,
            false,
            false,
            false,
            true,
            true,
            true,
        },
        {
            true,
            false,
            false,
            true,
            false,
            false,
            true,
            false,
            false,
        },
        {
            false,
            true,
            false,
            false,
            true,
            false,
            false,
            true,
            false,
        },
        {
            false,
            false,
            true,
            false,
            false,
            true,
            false,
            false,
            true,
        },
        {
            false,
            false,
            true,
            false,
            true,
            false,
            true,
            false,
            false,
        },
        {
            true,
            false,
            false,
            false,
            true,
            false,
            false,
            false,
            true,
        },
    };

    for (int i = 0; i < board_state.size(); i++)
    {
        if (current_player == board_state[i])
        {
            boolean_board_state[i] = true;
        }
        else
        {
            boolean_board_state[i] = false;
        }
    }
    for (int i = 0; i < winning_states.size(); i++)
    {
        if (boolean_board_state == winning_states[i])
        {
            return current_player;
        }
    }
    return ' ';
}

void end_game(char winner)
{

    std::cout << "The winner is: " << winner << "!!!!\n";
}
