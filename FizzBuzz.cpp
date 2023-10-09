//
// Fizz Buzz implementation.
//
#include <iostream>
#include "FizzBuzz.h"

int replacedivis(int n, int div){
    if ((div*(n/div)) == n)
        return true;
    else
        return false;
}
void fizzBuzz(int fizzdiv, int buzzdiv, int step, int imax){
    std::cout << "Starting Fizz Buzz:\n";
    for(int i = 1; i<=imax; i+=step){
        if (i > 1)
            std::cout << ",";
        bool fizzbool = replacedivis(i, fizzdiv);
        bool buzzbool = replacedivis(i, buzzdiv);
        if (fizzbool){
            std::cout << "Fizz";
        }
        if (buzzbool){
            std::cout << "Buzz";
        }
        if (!fizzbool && !buzzbool)
            std::cout << i;
    }
}


