#define BOOST_TEST_MAIN

#include "task_15.h"
#include <boost/test/unit_test.hpp>

//testcase 1
BOOST_AUTO_TEST_CASE(test_1){
    int a[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int b[8] = {7, 4, 2, 8, 6, 1, 3, 5};
    int *p_a = a, *p_b = b;
    string actual = task::isQueenTaking(p_a, p_b, 8);

    const string expected = "NO";
    BOOST_REQUIRE_EQUAL(expected, actual);
}

//testcase 2
BOOST_AUTO_TEST_CASE(test_2){
    int a[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int b[8] = {8, 7, 6, 5, 4, 3, 2, 1};
    int *p_a = a, *p_b = b;
    string actual = task::isQueenTaking(p_a, p_b, 8);

    const string expected = "YES";
    BOOST_REQUIRE_EQUAL(expected, actual);
}

//testcase 3
BOOST_AUTO_TEST_CASE(test_3){
    int a[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int b[8] = {8, 7, 6, 5, 4, 3, 2, 1};
    int *p_a = a, *p_b = b;
    string actual = task::isQueenTaking(p_a, p_b, 8);

    const string expected = "YES";
    BOOST_REQUIRE_EQUAL(expected, actual);
}