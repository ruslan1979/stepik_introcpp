#if !defined(STRINGTRANSFORM_H)
#define STRINGTRANSFORM_H

#include <iostream>
#include <new>

/*
https://stepik.org/lesson/13025/step/15?discussion=594061&unit=4377
Известно, что на доске 8×8 можно расставить 8 ферзей так, чтобы они не били друг друга. 
Вам дана расстановка 8 ферзей на доске, определите, есть ли среди них пара бьющих друг друга.

Формат входных данных
Программа получает на вход восемь пар чисел, каждое число от 1 до 8 - координаты 8 ферзей.
Формат выходных данных
Если ферзи не бьют друг друга, выведите слово NO, иначе выведите YES.
*/
using namespace std;

namespace task {
    string isQueenTaking(int *x, int *y, int size);
}
#endif