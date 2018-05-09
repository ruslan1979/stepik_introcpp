#include "task_15_17.h"
#define BOOST_TEST_MAIN

#include <boost/test/unit_test.hpp>


//testcase 1
BOOST_AUTO_TEST_CASE(test_1){
    int a[8] = {10, 3, 8, 10, 2, 5, 3, 6};
    
    int *p_a = a;
    string actual = task::getRemainedPins(p_a);

    const string expected = "I.....I...";
    BOOST_REQUIRE_EQUAL(expected, actual);
}
