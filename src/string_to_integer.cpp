//
// Created by D.Zaycev on 20.12.2023.
//

#include <cstdint>

#include "tasks/tasks.h"

int tasks::MyAtoi(std::string& s){
    s.erase(0, s.find_first_not_of(' '));

    long long num = 0;

    int sign = s.front() == '-' ? -1 : 1;
    auto iter = s.cbegin();

    if (*iter == '-' || *iter == '+'){
        ++iter;
    }

    if (!std::isdigit(*iter)) {
        return 0;
    }

    for (;iter < s.cend(); ++iter) {
        if (const char ch = *iter; std::isdigit(ch)) {
            num = num * 10 + (ch - '0');
            if (std::abs(num) > INT32_MAX) {
                return sign == -1 ? INT32_MIN : INT32_MAX;
            }

            continue;
        }

        break;
    }

    return int(num * sign);
}