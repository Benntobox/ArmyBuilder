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

class Unit {
    int stats[8];
};

class HQ : Unit {
    Equipment weapon;
};

class Detachment {
    Unit unit1;
};

class Army {
    Detachment det1;
};

int matcher(int n, vector<int> ar) {
    int total = 0;
    std::sort(ar.begin(), ar.begin()+n);
    
    for(int i=0; i<n; i++) {
        cout << ar[i] << " ";
    }
    
    for (int i = 0; i < n-1; i++) {
        if (ar[i] == ar[i+1]) {
            total++;
            i++;
        }
    }
    
    return total;
}


int main(int argc, const char * argv[]) {
    int n=9;
    vector<int> ar = { 4, 2, 1, 3, 1, 2, 1, 2, 3 };
    
    int result = matcher(n, ar);
    cout << result;
    
    return 0;
}
