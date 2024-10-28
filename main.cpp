// main.cpp
#include "item.hpp"

int main() {
    openScreen();
    item* list = nullptr; // Initialize the linked list
    menuScreen1(list);    // Display the menu
    
    std::string exitChoice;
    std::cout << "Please type 'EXIT' to exit program." << std::endl;
    std::getline(std::cin, exitChoice);
    
    exitScreen();
    return 0;
}
