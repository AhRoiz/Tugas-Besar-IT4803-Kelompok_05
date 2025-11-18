#ifndef PARENT_H
#define PARENT_H

#include <iostream>
#include <string>
using namespace std;

struct Sales {
    string idSales;
    string nama;
    float rating;
    int targetPenjualan;
};

typedef Sales infotype;

typedef struct elmSales *address;

struct elmSales {
    infotype info;
    address next;
};

struct ListSales {
    address first;
    address last;
};

// Primitif
void createListSales(ListSales &L);
address allocate();
void insertFirst();
void inserLast();
void insertafter();
void deleteFirst();
void deleteLast();
void deleteAfter();
//halo testing

#endif