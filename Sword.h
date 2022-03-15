#pragma once

class Sword{
    const int damage;
    const int maxDurability;
    int durability;
    const double weight;

    public:
    Sword(int damage,int durability,double weight);
    int use();
    void repair();
    double getWeight(){return weight;};
};