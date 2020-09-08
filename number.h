//
// Created by rudri on 9/5/2020.
//

#ifndef POO2_UNIT1_WEEK_1_2020_2_NUMBER_H
#define POO2_UNIT1_WEEK_1_2020_2_NUMBER_H

#include <iostream>
#include <cmath>
#include <utility>

using namespace std;

// typedef int T;
using T = int;
using decimal_t = double;

class number_t {
    T value_ = 0;
public:
    // constructors
    number_t() = default;
    number_t(const T& value) : value_{value} {}
    number_t(const number_t& another) = default;            
    number_t(number_t&& another)  noexcept : value_{another.value_} {}

    // overload assignment operator
    number_t& operator=(const number_t& another);
    number_t& operator=(number_t&& another) noexcept;

    // method that returns the number PI
    static decimal_t pi();

    // cast overload
    operator T() const;

    // swap
    void swap(number_t& other);

    // increase/decrease operators
    number_t operator++();
    number_t operator--();
    number_t operator++(int);
    number_t operator--(int);

    // overload arithmetic operators
    number_t operator+(const number_t &another);
    number_t operator-(const number_t &another);
    number_t operator*(const number_t &another);
    number_t operator/(const number_t &another);
    number_t operator^(const number_t &exponent);

    number_t operator+(const T &value);
    number_t operator-(const T &value);
    number_t operator*(const T &value);
    number_t operator/(const T &value);
    number_t operator^(const T &value);

    friend number_t operator+(const T& value, const number_t& another);
    friend number_t operator-(const T& value, const number_t& another);
    friend number_t operator*(const T& value, const number_t& another);
    friend number_t operator/(const T& value, const number_t& another);
    friend number_t operator^(const T& base, const number_t& exponent);

    // overload boolean operators
    bool operator==(number_t another) const;
    bool operator!=(number_t another) const;
    bool operator<(number_t another) const;
    bool operator>(number_t another) const;
    bool operator<=(number_t another) const;
    bool operator>=(number_t another) const;

    bool operator==(const T& value) const;
    bool operator!=(const T &value) const;
    bool operator<(const T &value) const;
    bool operator>(const T &value) const;
    bool operator<=(const T &value) const;
    bool operator>=(const T &value) const;

    friend bool operator==(const T& value, const number_t& another);
    friend bool operator!=(const T& value, const number_t& another);
    friend bool operator<(const T& value, const number_t& another);
    friend bool operator>(const T& value, const number_t& another);
    friend bool operator<=(const T& value, const number_t& another);
    friend bool operator>=(const T& value, const number_t& another);

    // overload i/o operators
    friend istream &operator>>(istream &is, number_t &number);
    friend ostream &operator<<(ostream &os, const number_t &number);
};

// i/o operator friends
istream &operator>>(istream &is, number_t &number);
ostream &operator<<(ostream &os, const number_t &number);

#endif //POO2_UNIT1_WEEK_1_2020_2_NUMBER_H
