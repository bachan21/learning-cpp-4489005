// Learning C++ 
// Challenge 01_03
// Console Interaction, by Eduardo Corpeño 

#include <iostream>
#include <string>

int main(){
    //this declares a string variable str in the code
    std::string str;
    std::cout << "Type a string here : ";
    //the following line is only capable of picking single word
    std::cin >> str;
    std::cout << std::endl << "This is the typed string : ";
    std::cout << str;

    std::cout << std::endl << std::endl;
    return (0);
}
