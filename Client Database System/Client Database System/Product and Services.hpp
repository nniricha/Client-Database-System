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
    void ReadFromFile(vector<string>& productVector, vector<string>& descriptionVector);
    void ListServices();
    void AddNewService(string product, string serviceDescription, vector<string>& productVector, vector<string>& descriptionVector);
    void UpdateService(string product, string serviceDescription, vector<string>& productVector, vector<string>& descriptionVector);
    void PrintServicesReport(vector<string>& productVector, vector<string>& descriptionVector);
    void SaveToFile(vector<string>& productVector, vector<string>& descriptionVector);
        
    private:
    vector<int> priceVector;
    string serviceDescription;
    string product;
    vector<string> productVector;
    vector<string> descriptionVector;
        
};

#endif /* Product_and_Services_hpp */
