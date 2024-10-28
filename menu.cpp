// menu.cpp
#include "item.hpp"

void menuScreen1(item* head) {
    std::string menuResponse;
    std::cout << "Main Menu - Please Press:\n"
              << "<I> for Input\n"
              << "<S> for Searching/Sorting\n"
              << "<P> to Print\n"
              << "<X> to Exit\n";

    std::getline(std::cin, menuResponse);

    switch (toupper(menuResponse[0])) {
        case 'I': inputScreen(head); break;
        case 'S': searchMenu(head); break;
        case 'P': printTable(head); break;
        case 'X': exitScreen(); exit(0); break;
        default: std::cout << "Invalid input. Try again.\n"; menuScreen1(head);
    }
}

void searchMenu(item* head) {
    std::string response;
    std::cout << "Search Menu:\n"
              << "<S> for Title Search\n"
              << "<E> to Exit\n";
    std::getline(std::cin, response);

    if (toupper(response[0]) == 'S') {
        titleSearch(head);
    } else if (toupper(response[0]) == 'E') {
        menuScreen1(head);
    } else {
        std::cout << "Invalid input.\n";
        searchMenu(head);
    }
}
