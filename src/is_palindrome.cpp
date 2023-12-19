//
// Created by kuper on 19.12.2023.
//
#include <deque>

#include "tasks/tasks.h"

bool tasks::IsPalindrome(int x) {
    if (x < 0) {
        return false;
    }

    long rev = 0;
    long tmp = x;
    while (tmp != 0) {
        rev = rev * 10 + (tmp % 10);
        tmp/= 10;
    }

    return rev == x;
}