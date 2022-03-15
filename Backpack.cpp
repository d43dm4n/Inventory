#include "Backpack.h"

Backpack::Backpack(): swords(nullptr){}

int Backpack::itemCount()const{
    int counter=0;
inventoryItem*tmp=swords;
    while (tmp!=nullptr)
    {
     counter++;
     tmp=tmp->next;
    }
    return counter;
}

double Backpack::getTotalWeight()const{
    double totalWeight=0;
    inventoryItem* tmp=swords;
    while(tmp!=nullptr){
        totalWeight+=tmp->sword.getWeight();
        tmp=tmp->next;
    }
    return 0;}

Sword Backpack::get(int index)const{
if(index<0||index>=itemCount()){
std::cout<<"Bad index"<<std::endl;
};
inventoryItem*tmp;
for(tmp=swords;index>0;index--){
    tmp=tmp->next;
}
return tmp->sword;
}

void Backpack::put(const Sword& sword){
    swords=new inventoryItem{sword,swords};
}

Sword Backpack::drop(int index){
    if(index<0||index>itemCount()){
        std::cout<<"Bad Index"<<std::endl;
    }
    inventoryItem*tmp;
    --index;
    for(tmp=swords;index>0;index--){
        tmp->next=tmp->next->next;
    }
    return 
    ;}