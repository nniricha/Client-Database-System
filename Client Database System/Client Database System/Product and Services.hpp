//
//  Product and Services.hpp
//  Client Database System
//
//  Created by Videsh Bridgelal on 11/16/20.
//  Copyright © 2020 Team 5. All rights reserved.
//

#ifndef Product_and_Services_h
#define Product_and_Services_h

#include <stdio.h>
#include <vector>

using namespace std;

class Product_and_Services {
    public:
    void AddPrice(vector<int>& priceVector);
        
    private:
    vector<int> priceVector;
        
};

#endif /* Product_and_Services_hpp */
