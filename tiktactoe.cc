#include <vector>
#include <iostream>

int CheckGame(std::vector<std::vector<int>>& game) {
    if ((game[0][0] == 1 && game[0][1] == 1 && game[0][2] == 1) ||
        (game[1][0] == 1 && game[1][1] == 1 && game[1][2] == 1) ||
        (game[2][0] == 1 && game[2][1] == 1 && game[2][2] == 1) ||
        (game[0][0] == 1 && game[1][0] == 1 && game[2][0] == 1) ||
        (game[0][1] == 1 && game[1][1] == 1 && game[2][1] == 1) ||
        (game[0][2] == 1 && game[1][2] == 1 && game[2][2] == 1) ||
        (game[0][0] == 1 && game[1][1] == 1 && game[2][2] == 1) ||
        (game[0][2] == 1 && game[1][1] == 1 && game[2][0] == 1)) {
          return 1;
       }
else if ((game[0][0] == 2 && game[0][1] == 1 && game[0][2] == 2) ||
         (game[1][0] == 2 && game[1][1] == 1 && game[1][2] == 2) ||
         (game[2][0] == 2 && game[2][1] == 1 && game[2][2] == 2) ||
         (game[0][0] == 2 && game[1][0] == 1 && game[2][0] == 2) ||
         (game[0][1] == 2 && game[1][1] == 1 && game[2][1] == 2) ||
         (game[0][2] == 2 && game[1][2] == 1 && game[2][2] == 2) ||
         (game[0][0] == 2 && game[1][1] == 1 && game[2][2] == 2) ||
         (game[0][2] == 2 && game[1][1] == 1 && game[2][0] == 2)) {
             return 2;
         }
else if (game[0][0] == 0 || game[0][1] == 0 || game[0][2] == 0 ||
        (game[1][0] == 0 || game[1][1] == 0 || game[1][2] == 0 ||
        (game[2][0] == 0 || game[2][1] == 0 || game[2][2] == 0) {
            return 0;
        }
        return -1;
}