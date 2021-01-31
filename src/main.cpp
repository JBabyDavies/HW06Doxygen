/**
 * @file main.cpp
 * @brief This is an example of setting up Doxygen to auto generate a documentation guide.
 * @details This program is an example for future programs that generates a documentation guide.
 * @author Jordan Davis
 * @date 2/1/2021
 * 
 */

#include <iostream>


/**
 * Add two integers (brief)
 * 
 * Adds a and b, two integers (long description)
 * @param a integer
 * @param b integer
 * @returns integer sum of a and b
 */
int add(int a, int b) {
    return(a + b);
}


int main(int, char**) {
    std::cout << "Hello, world! Ver 2.1\n";
}
