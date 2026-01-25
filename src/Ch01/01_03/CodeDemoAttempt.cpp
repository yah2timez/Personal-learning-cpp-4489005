//Learning C++
// Challenge 01_03
// Console Interaction, by Euardo Corpeno

#include <iostream>
#include <string>

int main(){
    std::cout << "Hi Please Enter Your Name" << std::endl;

    std::string str;
    std::cin >> str;
    std::cout << str;
    
    std::cout << ", Thank you for entering your name!" << " Is " << "'" << str << "'" << " how you spell it?" << std::endl;

std::cout << std::endl << std::endl;


return(0);
}