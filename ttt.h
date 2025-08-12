#include <iostream>
#include <vector>

void draw_board(std::vector<char> board);
// void flag_control(bool turn_flag, char current_player, char player_x, char player_o);
char set_winner(std::vector<char> board_state, char current_player);
void end_game(char winner);