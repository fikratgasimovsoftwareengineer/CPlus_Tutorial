#include <iostream>
#include <string>

/*
 *[[nodiscard]]: This is a C++17 attribute that indicates the caller of the function should not ignore the return value. It's a way to enforce that the return value is used or checked, which can be important for error handling or when the return value is critical to the operation of the program. If the return value is ignored, the compiler may generate a warning.
 *
 * */



[[nodiscard]] std::string getGreeting() {
    return "Hello, World!";
}

int main() {
    // Correct usage: storing the return value
    std::string greeting = getGreeting();
    std::cout << greeting << std::endl;

    // Incorrect usage: ignoring the return value
    // This will likely generate a compiler warning because of the [[nodiscard]] attribute
    //getGreeting();

    return 0;
}

