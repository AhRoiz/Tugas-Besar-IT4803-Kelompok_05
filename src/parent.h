#ifndef PARENT_H
#define PARENT_H

#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::endl;

struct Parent {
    string id;            // unique key
    string hostname;
    string ip;
    int uptimeHours;      // contoh atribut integer
    Parent* next;
};

