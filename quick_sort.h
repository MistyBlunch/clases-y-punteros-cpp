//
// Created by rudri on 9/6/2020.
//

#ifndef POO2_UNIT1_WEEK_1_2020_2_QUICK_SORT_H
#define POO2_UNIT1_WEEK_1_2020_2_QUICK_SORT_H

#include "number.h"

static number_t partition(number_t* data, number_t lo, number_t hi);
static void quicksort(number_t* data, number_t lo, number_t hi);

class quicksort_t {
private:
    number_t* data_;
    size_t size_;
    size_t capacity_;   // Optional
    void add_one();
public:
    quicksort_t();
    ~quicksort_t();
    friend quicksort_t& operator<<(quicksort_t& qs, const std::string& file_name);
    friend quicksort_t& operator>>(quicksort_t& qs, const std::string& file_name);
};

#endif //POO2_UNIT1_WEEK_1_2020_2_QUICK_SORT_H
