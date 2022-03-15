#include <iostream>
#include <string>
#include "Backpack.cpp"

int main(int argc,char** argv){
Backpack backpack;
backpack.put(Sword(12,3,1.2));
backpack.put(Sword(11,2,3.2));
backpack.put(Sword(10,4,0.3));
std::cout<<backpack.itemCount()<<std::endl;
backpack.put(Sword(12,3,3.4));
backpack.put(Sword(15,1,2.3));
std::cout<<backpack.itemCount()<<std::endl;

}