/*
==============================================================================
Author: Michael Gene Brockus (Dreamer)
Email: michaelbrockus@gmail.com
Organization: Fossil Logic
Description: 
    This file is part of the Fossil Logic project, where innovation meets
    excellence in software development. Michael Gene Brockus, also known as
    "Dreamer," is a dedicated contributor to this project. For any inquiries,
    feel free to contact Michael at michaelbrockus@gmail.com.
==============================================================================
*/
#include "app.hpp" // app source code

#include <fossil/xtest.h>   // basic test tools
#include <fossil/xassert.h> // extra asserts
#include <string>

//
// XUNIT-CASES: list of test cases testing project features
//
XTEST_CASE(basic_run_of_string) {
    std::string one = "Something";
    std::string two = "Coffe Cup";
    TEST_ASSERT_EQUAL_STRING(one, one);
    TEST_ASSERT_NOT_EQUAL_STRING(one, two);
}

XTEST_CASE(basic_run_of_pointer) {
    TEST_ASSERT_NOT_CNULLPTR("Coffee Cup");
    TEST_ASSERT_CNULLPTR(nullptr);
}

XTEST_CASE(basic_run_of_boolean) {
    TEST_ASSERT_TRUE(true);
    TEST_ASSERT_FALSE(false);
}

//
// XUNIT-GROUP: a group of test cases from the current test file
//
XTEST_DEFINE_POOL(basic_group) {
    XTEST_RUN_UNIT(basic_run_of_string);
    XTEST_RUN_UNIT(basic_run_of_pointer);
    XTEST_RUN_UNIT(basic_run_of_boolean);
} // end of fixture
