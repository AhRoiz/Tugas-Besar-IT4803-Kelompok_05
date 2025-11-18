#ifndef CHILD_H
#define CHILD_H

#include <iostream>
#include <string>
using namespace std;

// Definisi Infotype Sales
struct Mobil {
    string idMobil;
    string Merek;
    string Model
    int harga;
    int tahunProduksi;
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

