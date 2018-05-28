#define BOOST_TEST_MAIN

#include "task_15.h"
#include <boost/test/unit_test.hpp>

//testcase 1
BOOST_AUTO_TEST_CASE(test_1){
    int m = 3;
    int n = 5;    
    string actual = task::getMatrix(m, n);

    stringstream ss_test;
    ss_test << "   1   2   3   4   5" << endl <<
               "  12  13  14  15   6" << endl <<
               "  11  10   9   8   7" << endl;
        
    string expected = ss_test.str();
  
    BOOST_REQUIRE_EQUAL(strcmp(expected.c_str(),actual.c_str()), 0);
}


//testcase 2
BOOST_AUTO_TEST_CASE(test_2){
    int m = 5;
    int n = 3;    
    string actual = task::getMatrix(m, n);

    stringstream ss_test;
    ss_test << "   1   2   3   4   5" << endl <<
               "  12  13  14  15   6" << endl <<
               "  11  10   9   8   7";
    
    
    string expected = ss_test.str();
  
    BOOST_REQUIRE_EQUAL(strcmp(expected.c_str(),actual.c_str()), 1);
}