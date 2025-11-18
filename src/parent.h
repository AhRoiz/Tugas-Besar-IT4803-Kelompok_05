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

typedef struct elmSales* adrSales;

struct elmSales {
    Sales info;
    adrSales next;
};

struct ListSales {
    adrSales first;
};

// Primitif
void createListSales(ListSales &L);
adrSales createElmSales(string id, string nama, float rating, int target);
void insertSales(ListSales &L, adrSales P);
void deleteSales(ListSales &L, string id, adrSales &P); // P menampung node yang dihapus
adrSales findSales(ListSales L, string id);
void showAllSales(ListSales L);

#endif
