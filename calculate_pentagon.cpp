//
// Created by rudri on 9/6/2020.
//

#include "calculate_pentagon.h"

number_t calculate_pentagon(number_t n) {
    if(n == 0) return 1;
    else {
        return 5*n + calculate_pentagon(n-1);
    }
}
