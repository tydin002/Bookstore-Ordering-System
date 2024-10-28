// input.cpp
#include "item.hpp"

void inputScreen(item* &head) {
    item* newItem = new item;
    std::cout << "Enter ISBN: ";
    std::getline(std::cin, newItem->vISBN);
    // Error handling loop could be extracted as a reusable function
    while (newItem->vISBN.empty() || !isdigit(newItem->vISBN[0])) {
        errorScreen();
        std::getline(std::cin, newItem->vISBN);
    }
    // Continue with other attributes...

    newItem->next = head;
    head = newItem; // Add to the front of the linked list
}
