//
// Created by kuper on 19.12.2023.
//

#include "tasks/tasks.h"

bool tasks::IsPalindrome(int x) {
    if (x < 0) {
        return false;
    }

    long reversed = 0;
    long tmp = x;

    while (tmp != 0) {
        reversed = reversed * 10 + (tmp % 10);
        tmp /= 10;
    }

    return reversed == x;
}