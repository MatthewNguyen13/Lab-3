#include <iostream>
#include <vector>

int CheckGame(std::vector<std::vector<int>>& game ) {
    for (int j = 1; j < 3; j++) {
        for (int i = 0; i < 3; i++) {
            if (game[i][0] == j && game[i][1] == j && game[i][2] == j) {
                return j;
            }
            if (game[0][i] == j && game[1][i] == j && game[2][i] == j) {
                return j;
            }
        }
        if (game[0][0] == j && game[1][1] == j && game[2][2] == j) {
            return j;
        }
        if (game[0][2] == j && game[1][1] == j && game[2][0] == j) {
            return j;
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; i++) {
            if (game[i][j] == 0) {
                return 0;
            }
        }
    }
    return -1;
}