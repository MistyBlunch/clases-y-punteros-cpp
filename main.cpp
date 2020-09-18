#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include "catch.hpp"
#include "number.h"
#include "search_odds.h"
#include "calculate_pentagon.h"
#include "quick_sort.h"

#include <algorithm>
#include <iostream>

// creation

TEST_CASE("creation operations") {
    number_t n1{10};
    number_t n2{20};
    number_t n3 = n1 + n2;
    number_t n4;
    number_t n5;
    const number_t n6 = n5;
    number_t *n7 = new number_t(5);
    REQUIRE(n1 == 10);
    REQUIRE(n2 == 20);
    REQUIRE(n3 == 30);
    n4 = 10 + n3;
    REQUIRE(n4 == 40);
    n5 = n2 + n3;
    REQUIRE(n5 == 50);
    REQUIRE(n6 == 0);
    REQUIRE(*n7 == 5);
    delete n7;
}


TEST_CASE("comparation operations") {
    number_t n1{10};
    number_t n2{20};
    number_t n3 = n1 + n2;
    number_t n4;
    number_t n5;
    REQUIRE(n2 > n1);
    REQUIRE(n2 < n3);
    REQUIRE(n3 == 30);
    n4 = 10 + n3;
    REQUIRE(n4 != n3);
    n5 = n2 + n3;
    REQUIRE(n4 >= 40);
    REQUIRE(n5 <= 50);
}

TEST_CASE("increase/decrease operations") {
    number_t total;
    for (int i = 0; i < 20; ++i)
        ++total;
    REQUIRE(total == 20);

    for (int i = 20; i > 0; --i)
        total--;
    REQUIRE(total == 0);
}

TEST_CASE("search_odds") {
    auto r1 = search_odds({1, 1, 2, -2, 5, 2, 4, 4, -1, -2, 5});
    auto r2 = search_odds({20, 1, 1, 2, 2, 3, 3, 5, 5, 4, 20, 4, 5});
    auto r3 = search_odds({10});

    REQUIRE(r1.front() == -1);
    REQUIRE(r2.front() == 5);
    REQUIRE(r3.front() == 10);
}

TEST_CASE("calculate pentagon") {
    REQUIRE(calculate_pentagon(1) == 6);
    REQUIRE(calculate_pentagon(2) == 16);
    REQUIRE(calculate_pentagon(3) == 31);
    REQUIRE(calculate_pentagon(8) == 181);
}

TEST_CASE("quick sort") {
    // case #1
    quicksort_t qs;
    qs << "in.txt";
    qs >> "out.txt";
}