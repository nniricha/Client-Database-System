//
//  Product and Services.cpp
//  Client Database System
//
//  Created by Videsh Bridgelal on 11/16/20.
//  Copyright © 2020 Team 5. All rights reserved.
//

#include "Product and Services.hpp"
#include <iostream>
#include <vector>

using namespace std;

void AddPrice(vector<int>& priceVector){
    int userPrice;
    
    cin >> userPrice;
    priceVector.push_back(userPrice);
}
