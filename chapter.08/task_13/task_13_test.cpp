#define BOOST_TEST_MAIN

#include "task_13.h"
#include <boost/test/unit_test.hpp>

//testcase 1
BOOST_AUTO_TEST_CASE(test_1){
    int m = 5;
    int n = 3;    
    string actual = task::getMatrix(m, n);

    stringstream ss_test;
    ss_test << "   1   2   4   7  10" << endl <<
               "   3   5   8  11  13" << endl <<
               "   6   9  12  14  15" << endl;
    
    
    string expected = ss_test.str();
  
    BOOST_REQUIRE_EQUAL(strcmp(expected.c_str(),actual.c_str()), 0);
}


//testcase 2
BOOST_AUTO_TEST_CASE(test_2){
    int m = 5;
    int n = 3;    
    string actual = task::getMatrix(m, n);

    stringstream ss_test;
    ss_test << "   1   2   4   7  10" << endl <<
               "   3   5   8  11  13" << endl <<
               "   6   9  12  14  15";
    
    
    string expected = ss_test.str();
  
    BOOST_CHECK(strcmp(expected.c_str(),actual.c_str()), 0);
}