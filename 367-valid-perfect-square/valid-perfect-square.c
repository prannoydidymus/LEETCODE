#include <stdbool.h>
#include <math.h>

bool isPerfectSquare(int num) {
    int sqrtNum = (int)sqrt(num);
    return sqrtNum * sqrtNum == num;
}