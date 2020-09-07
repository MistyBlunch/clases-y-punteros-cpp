#include "number.h"
#include <cmath>

istream& operator>>(istream& is, number_t& number) {
    // Complete
}

ostream& operator<<(ostream& os, const number_t& number) {
    // Complete
}

decimal_t number_t::pi() { return 3.14159; }

number_t number_t::operator++() {
    // Complete
}

number_t number_t::operator--() {
    // Complete
}

number_t number_t::operator++(int) {
    // Complete
}

number_t number_t::operator--(int) {
    // Complete
}

number_t& number_t::operator=(number_t&& another)  noexcept {
    // Complete
}

number_t::operator T() const {
    // Complete
}

void number_t::swap(number_t& other)
{
    // Complete
}

number_t operator+(const T& value, const number_t& another) {
    // Complete
}

number_t operator-(const T& value, const number_t& another) {
    // Complete
}

number_t operator*(const T& value, const number_t& another) {
    // Complete
}

number_t operator/(const T& value, const number_t& another) {
    // Complete
}

number_t operator^(const T& base, const number_t& exponent) {
    // Complete
}

bool operator==(const T& value, const number_t& another) {
    // Complete
}

bool operator!=(const T& value, const number_t& another) {
    // Complete
}

bool operator<(const T& value, const number_t& another) {
    // Complete
}

bool operator>(const T& value, const number_t& another) {
    // Complete
}

bool operator<=(const T& value, const number_t& another) {
    // Complete
}

bool operator>=(const T& value, const number_t& another) {
    // Complete
}

number_t number_t::operator+(const number_t &another) {
    // Complete
}

number_t number_t::operator-(const number_t &another) {
    // Complete
}

number_t number_t::operator*(const number_t &another) {
    // Complete
}

number_t number_t::operator/(const number_t &another) {
    // Complete
}

number_t number_t::operator^(const number_t &exponent) {
    // Complete
}

number_t number_t::operator+(const T &value) {
    // Complete
}

number_t number_t::operator-(const T &value) {
    // Complete
}

number_t number_t::operator*(const T &value) {
    // Complete
}

number_t number_t::operator/(const T &value) {
    // Complete
}

number_t number_t::operator^(const T &value) {
    // Complete
}

bool number_t::operator==(number_t another) const {
    // Complete
}

bool number_t::operator!=(number_t another) const {
    // Complete
}

bool number_t::operator<(number_t another) const {
    // Complete
}

bool number_t::operator>(number_t another) const {
    // Complete
}

bool number_t::operator<=(number_t another) const {
    // Complete
}

bool number_t::operator>=(number_t another) const {
    // Complete
}

bool number_t::operator==(const T &value) const {
    // Complete
}

bool number_t::operator!=(const T &value) const {
    // Complete
}

bool number_t::operator<(const T &value) const {
    // Complete
}

bool number_t::operator>(const T &value) const {
    // Complete
}

bool number_t::operator<=(const T &value) const {
    // Complete
}

bool number_t::operator>=(const T &value) const {
    // Complete
}

number_t& number_t::operator=(const number_t& another) = default;