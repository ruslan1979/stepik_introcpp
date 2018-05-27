#if !defined(TASK_13_H)
#define TASK_13_H

#include <iomanip>
#include <algorithm>
#include <iostream>
#include <sstream>
#include <cstring>

using namespace std;

/*
По данным числам n и m заполните двумерный массив размером n×m числами от 1 до n×m “диагоналями”, как показано в примере.
Формат входных данных

Вводятся два числа n и m, не превышающие 100.
Формат выходных данных

Выведите полученный массив, отводя на вывод каждого элемента ровно 4 символа.

Sample Input:

3 5

Sample Output:

   1   2   4   7  10
   3   5   8  11  13
   6   9  12  14  15
*/
using namespace std;

namespace task {
    string getMatrix(int, int);
}
#endif