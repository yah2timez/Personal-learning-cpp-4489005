// Learning C++ 
// Exercise 03_09
// Vectors, by Eduardo Corpeño 

#include <vector>
#include <iostream>
#include <string>

int main(){
    std::vector<int> primes;
                                // Starting with specified elements we can change them later
    primes.push_back(2);        // The element at index 0 is 2
    primes.push_back(3);        // The element at index 1 is 3
    primes.push_back(5);        // The element at index 2 is 5
    primes.push_back(7);        // The element at index 3 is 7
    primes.push_back(11);       // The element at index 4 is 11
    std::cout << "The vector has " << primes.size() << " elements." << std::endl;
    std::cout << "The element at index 2 is " << primes[2] << std::endl;
    primes[2] = 13;
    std::cout << "The element at index 2 is " << primes[2] << std::endl;


    std::cout << std::endl << std::endl;

    return (0);
}
