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
    Model models;
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
    vector<HQ> HeadQuarters;
    Unit unit1;
};

class Army {
    Detachment det1;
};

int main(int argc, const char * argv[]) {
    
    return 0;
}
