#pragma once
#include <iostream>
#include "Sword.h"
#include "Sword.cpp"

class Backpack{
    struct inventoryItem{
        Sword sword;
        inventoryItem* next;
    };
inventoryItem* swords;
public:
Backpack();
void put(const Sword& sword);
double getTotalWeight()const;
Sword drop(int index);
int itemCount()const;
Sword get(int index) const;

};