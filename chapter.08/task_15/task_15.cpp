#include "task_15.h"

string task::getMatrix(int m, int n) {        
    static int counter = 0, arr[100][100];
    
    bool isBreak = false;
    int round = 0;
    while (true) {
        for (int j = round; j != n - round; ++j)
            if (arr[round][j] != 0) {
                isBreak = true;
                break;
            }
            else
                arr[round][j] = ++counter;

        if (isBreak)
            break;

        // down
        for (int i = 1 + round; i != m - round; ++i)
            if (arr[i][n - 1 - round] != 0) {
                isBreak = true;
                break;
            }
            else
                arr[i][n - 1 - round] = ++counter;

        if (isBreak)
            break;

        // right
        for (int j = n - 2 - round; j != round - 1; --j)
            if (arr[m - 1 - round][j] != 0) {
                isBreak = true;
                break;
            }
            else
                arr[m - 1 - round][j] = ++counter;

        if (isBreak)
            break;

        // up
        for (int i = m - 2 - round; i != round; --i)
            if (arr[i][round] != 0) {
                isBreak = true;
                break;
            }
            else
                arr[i][round] = ++counter;

        if (isBreak)
            break;

        ++round;
    }

    stringstream ss;
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++)
            ss << setw(4) << arr[i][j];
        
        ss << endl;
    }

    return ss.str();
}