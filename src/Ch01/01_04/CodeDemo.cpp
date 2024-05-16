// Learning C++ 
// Challenge Solution 01_04
// Console Interaction, by Eduardo Corpeño 

#include <iostream>
#include <string>

int main(){
    std::string str;
    std::cout << "Enter your name: " << std::flush;
    //The standard std::cin can only afford one word to the variable
    //This will cause issue when there are more than one word in the name
    //So use a standard library function called getline defined in string library
    std::getline(std::cin,str);
    std::cout << "Nice to meet you, " << str << "!" << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
