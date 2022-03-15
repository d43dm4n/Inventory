#include "Sword.h"

Sword::Sword(int damage,int durability,double weight):damage(damage),maxDurability(durability),weight(weight){};
int Sword::use(){
    if(durability>0){
        return damage;

    }
    return 0;
}
void Sword::repair(){
    durability=maxDurability;
}
