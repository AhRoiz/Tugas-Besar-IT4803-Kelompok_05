#ifndef PARENT_H
#define PARENT_H

#include <iostream>
#include <string>
using namespace std;

// Definisi Infotype Sales
struct Sales {
    string idSales;
    string nama;
    float rating;
    int targetPenjualan;
};

typedef Sales infotype:

typedef struct elmSales *adrSales;

struct elmSales {
    infotype info;
    adrSales next;
};

struct ListSales {
    adrSales first;
};

// Primitif
void createListSales(ListSales &L);

#endif
