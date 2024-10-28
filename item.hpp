// item.hpp
#ifndef ITEM_HPP
#define ITEM_HPP

#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>

struct item {
    std::string vISBN, title, author, expectedEnrollment, vCost, isRequired, newOrUsed, vqoh;
    double orderFactor;
    item* next;
};

void openScreen();
void errorScreen();
void exitScreen();
void outputScreen(item* book);
void menuScreen1(item* one);
void inputScreen(item* &head);
void titleSearch(item* head);
void searchMenu(item* head);
int printTable(item* head);
void printFile(item* head);
void editScreen(item* book);
void wrapperScreen(item* &head);

#endif
