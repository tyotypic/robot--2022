#include "robot_main.h"

// this file exists in this form so that when we link the test project against the object files in this project, we don't get two main() functions.
// The test project will require its own main() function that launches the tests. We'll simply rename this one object file to exclude it from the test project build.
int main(int argc, char* argv[])
{
    return robot::robot_main(argc, argv);
}
