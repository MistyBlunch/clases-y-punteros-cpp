#include "number.h"
#include <cmath>

istream& operator>>(istream& is, number_t& number) {
    is >> number.value_;
    return is;
}

ostream& operator<<(ostream& os, const number_t& number) {
    os << number.value_;
    return  os;
}

decimal_t number_t::pi() { return 3.14159; }

number_t number_t::operator++() {
    return (*this).value_++;
}

number_t number_t::operator--() {
    return (*this).value_--;
}

number_t number_t::operator++(int) {
    return (*this).value_++;
}

number_t number_t::operator--(int) {
    return (*this).value_--;
}

number_t& number_t::operator=(number_t&& another)  noexcept {
    (*this).value_ = another.value_;
    return *this;
}

number_t::operator T() const {
    return (int)value_;
}

void number_t::swap(number_t& other)
{
    T tmp = (*this).value_;
    (*this).value_ = other.value_;
    other.value_ = tmp;
}

number_t operator+(const T& value, const number_t& another) {
    return value + another.value_;
}

number_t operator-(const T& value, const number_t& another) {
    return value - another.value_;
}

number_t operator*(const T& value, const number_t& another) {
    return value * another.value_;
}

number_t operator/(const T& value, const number_t& another) {
    return value / another.value_;
}

number_t operator^(const T& base, const number_t& exponent) {
    return pow(base, exponent.value_);
}

bool operator==(const T& value, const number_t& another) {
    return value == another.value_ ? true : false;
}

bool operator!=(const T& value, const number_t& another) {
    return value != another.value_ ? true : false;
}

bool operator<(const T& value, const number_t& another) {
    return value < another.value_ ? true : false;
}

bool operator>(const T& value, const number_t& another) {
    return value > another.value_ ? true : false;
}

bool operator<=(const T& value, const number_t& another) {
    return value <= another.value_ ? true : false;
}

bool operator>=(const T& value, const number_t& another) {
    return value >= another.value_ ? true : false;
}

number_t number_t::operator+(const number_t &another) {
    return (*this).value_ + another.value_;
}

number_t number_t::operator-(const number_t &another) {
    return (*this).value_ - another.value_;
}

number_t number_t::operator*(const number_t &another) {
    return (*this).value_ * another.value_;
}

number_t number_t::operator/(const number_t &another) {
    return (*this).value_ / another.value_;
}

number_t number_t::operator^(const number_t &exponent) { 
    return pow((*this).value_, exponent.value_);
}

number_t number_t::operator+(const T &value) {
    return (*this).value_ + value;
}

number_t number_t::operator-(const T &value) {
    return (*this).value_ - value;
}

number_t number_t::operator*(const T &value) {
    return (*this).value_ * value;
}

number_t number_t::operator/(const T &value) {
    return (*this).value_ / value;
}

number_t number_t::operator^(const T &value) {
    return pow((*this).value_, value);
}

bool number_t::operator==(number_t another) const {
    return (*this).value_ == another.value_ ? true : false;
}

bool number_t::operator!=(number_t another) const {
    return (*this).value_ != another.value_ ? true : false;
}

bool number_t::operator<(number_t another) const {
    return (*this).value_ < another.value_ ? true : false;
}

bool number_t::operator>(number_t another) const {
    return (*this).value_ > another.value_ ? true : false;
}

bool number_t::operator<=(number_t another) const {
    return (*this).value_ <= another.value_ ? true : false;
}

bool number_t::operator>=(number_t another) const {
    return (*this).value_ >= another.value_ ? true : false;
}

bool number_t::operator==(const T &value) const {
    return (*this).value_ == value ? true : false;
}

bool number_t::operator!=(const T &value) const {
    return (*this).value_ != value ? true : false;
}

bool number_t::operator<(const T &value) const {
    return (*this).value_ < value ? true : false;
}

bool number_t::operator>(const T &value) const {
    return (*this).value_ > value ? true : false;
}

bool number_t::operator<=(const T &value) const {
    return (*this).value_ <= value ? true : false;
}

bool number_t::operator>=(const T &value) const {
    return (*this).value_ >= value ? true : false;
}

number_t& number_t::operator=(const number_t& another) = default;