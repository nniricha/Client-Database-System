//
//  Sales Representatives.hpp
//  Client Database System
//
//  Created by Videsh Bridgelal on 11/16/20.
//  Copyright © 2020 Team 5. All rights reserved.
//

#ifndef Sales_Representatives_hpp
#define Sales_Representatives_hpp

#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class SalesRepresentatives {
    public:
    SalesRepresentatives();
    void ReadFromFile(vector<string>& repNameVector, vector<string>& repAddressVector, vector<string>& repSalesVector);
    void AddSalesRep(string name, string address, string sale, vector<string>& repNameVector, vector<string>& repAddressVector, vector<string>& repSalesVector);
    void UpdateSalesRep(string name, string address, string sale, vector<string>& repNameVector, vector<string>& repAddressVector, vector<string>& repSalesVector);
    int CalculateBonus(vector<int>& bonusVector);
    void SaveToFile(string name, string address, string sale, vector<string>& repNameVector, vector<string>& repAddressVector, vector<string>& repSalesVector);
    
    protected:
    string name;
    string address;
    string sale;
    vector<int> bonusVector;
    vector<string> repNameVector;
    vector<string> repAddressVector;
    vector<string> repSalesVector;
};

#endif /* Sales_Representatives_hpp */
