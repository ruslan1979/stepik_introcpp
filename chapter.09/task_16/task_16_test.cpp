#define BOOST_TEST_MAIN

#include "task_16.h"
#include <boost/test/unit_test.hpp>

//testcase 1
BOOST_AUTO_TEST_CASE(test_1){
    vector<bool> empty; 
    task::createEmptyBoard(empty, 4);    
    BOOST_REQUIRE_EQUAL(empty.size(), 16);
}

//testcase 2
BOOST_AUTO_TEST_CASE(test_2){
    vector<bool> empty; 
    task::createEmptyBoard(empty, 4);    
    BOOST_REQUIRE_EQUAL(task::solve(empty), false);
}