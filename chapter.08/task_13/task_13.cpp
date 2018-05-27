#include "task_13.h"

string task::getMatrix(int m, int n) {        
    int num = 0;
    int a[100][100];
    for (int i = 0; i < n + m - 1; i++)
        for (int j = min(i, m - 1); j >= 0 && j > i - n  ; j--)
            a[i - j][j] = ++num;

    stringstream ss;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            ss << setw(4) << a[i][j];
        ss << endl;
    }

    return ss.str();
}