//
//  main.cpp
//  ArmyBuilder
//
//  Created by Benjamin Boyle on 9/16/19.
//  Copyright © 2019 Benjamin Boyle. All rights reserved.
//

#include <iostream>
#include <map>
#include <vector>

using namespace std;

class Equipment {
    int stats[8];
};

class Model {
private:
    int stats[8];
    Equipment equipment;
public:
    void set_stats(int numbers[]) { for(int i=0;i<8;i++) { stats[i] = numbers[i]; } };
    void set_equip(string eq) {  }
};

class Unit {
    vector<Model> unit;
    string description;
public:
    Unit() { description = "";}
    Unit(string des) { description = des; }
    string print_unit() { return description; }
};

class HQ : Unit {
    vector<Model> unit;
    string abilities;
};

class Troops : Unit {
    vector<Model> unit;
    string abilities;
};

class Elites : Unit {
    vector<Model> unit;
    string abilities;
};

class FastAttack : Unit {
    vector<Model> unit;
    string abilities;
};

class HeavySupport : Unit {
    vector<Model> unit;
    string abilities;
};

class Detachment {
    vector<Unit> units;
public:
    Detachment() { units = {}; }
    void add_unit(Unit unit) { units.push_back(unit); }
    void print_units() { for(int i=0; i<units.size(); i++) { cout << units[i].print_unit() << endl; } }
};

class Army {
    Detachment det1;
public:
    Army() { det1 = * new Detachment; }
    void add_unit(Unit unit) { det1.add_unit(unit); }
    void print_units() { cout << "Army consists of :" << endl; det1.print_units(); }
};

int main(int argc, const char * argv[]) {
    Army army = * new Army;
    
    Unit unit1 = Unit("Marine");
    Unit unit2 = Unit("Captain");
    Unit unit3 = Unit("Commander");
    
    army.print_units();
    army.add_unit(unit1);
    army.print_units();
    army.add_unit(unit2);
    army.add_unit(unit3);
    army.print_units();
    
    return 0;
}
