// Learning C++ 
// Exercise 04_03
// While Loops, by Eduardo Corpeño 

#include <iostream>
#include <vector>

int main(){
    std::vector<int> numbers = {12, 25, 31, 47, 58};
    
    //This is complicated
    // std::vector<int>::iterator ptr = numbers.begin();

    //instead, we can use auto to let the compiler figure out the type for us
    auto ptr = numbers.begin();

    while(ptr != numbers.end()){
        std::cout << *ptr << " ";
        ptr = next(ptr, 1);

    }
    std::cout << std::endl;

    int i = 0;
    do{
        std::cout << numbers[i] << " ";
        i++;
    } while(i < numbers.size());
    std::cout << std::endl << std::endl;
    return (0);
}
