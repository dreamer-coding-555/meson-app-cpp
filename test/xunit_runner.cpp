/*
   File: xunit_runner.c
   Description: This C test runner file is used for testing the Native Meson Build Application, a project under the Trilobite Coder Lab.
   
   Author: 
   - Name: Michael Gene Brockus (Dreamer)
   - Email: michaelbrockus@gmail.com
   - Website: https://trilobite.code.blog

   License: This software is released under the Apache License 2.0. Please refer to the LICENSE file for more details.

   Purpose: 
   - This C test runner file is responsible for running unit tests and verifying the correctness of the Native Meson Build Application.
   - It should be used in conjunction with a testing framework or library to ensure the functionality of the application.
   - Customize this file as needed for your specific project's testing requirements.

   For more information on the Native Meson Build Application, the Trilobite Coder Lab project, and the testing framework or library being used, please refer to the relevant project documentation.
*/
#include <trilobite/xtest.h>   // basic test tools

XTEST_EXTERN_POOL(basic_group);

//
// XUNIT-RUNNER: running test groups from test files
//
int main(int argc, char **argv) {
    XTEST_CREATE(argc, argv);

    XTEST_IMPORT_POOL(basic_group);

    return XTEST_ERASE();
} // end of func
