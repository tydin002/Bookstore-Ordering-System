// output.cpp
#include "item.hpp"

void outputScreen(item* book) {
    std::cout << "Book Information:\n"
              << "ISBN: " << book->vISBN << "\n"
              << "Title: " << book->title << "\n"
              << "Author: " << book->author << "\n";
    // Continue displaying other fields
}
