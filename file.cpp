// file.cpp
#include "item.hpp"

void printFile(item* head) {
    std::ofstream ofile("book_inventory.prn");
    while (head) {
        ofile << "Title: " << head->title << "\n"
              << "Author: " << head->author << "\n";
        // Continue for other fields
        head = head->next;
    }
    ofile.close();
    std::cout << "Print to file completed.\n";
}
