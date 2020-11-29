//
//  Product and Services.cpp
//  Client Database System
//
//  Created by Videsh Bridgelal on 11/16/20.
//  Copyright © 2020 Team 5. All rights reserved.
//

#include "Product and Services.hpp"
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <vector>

using namespace std;

Products_and_Services::Products_and_Services(){
    product = "No product";
    serviceDescription = "No service description";
}

void Product_and_Services::AddPrice(vector<int>& priceVector){
    int userPrice;
    
    cin >> userPrice;
    priceVector.push_back(userPrice);
}

void Product_and_Services::ReadFromFile(vector<string>& productVector, vector<string>& descriptionVector){
}

void Product_and_Services::ListServices(){
}

void Product_and_Services::AddNewService(string product, string serviceDescription, vector<string>& productVector, vector<string>& descriptionVector){
    cout << "Input product, service description: ";
    cin >> product;
    cin >> serviceDescription;
    
    productVector.push_back(product);
    descriptionVector.push_back(serviceDescription);
}

void Product_and_Services::UpdateService(string product, string serviceDescription, vector<string>& productVector, vector<string>& descriptionVector){
    string userProduct;
    string userService;
    
    cin >> userProduct;
    cin >> userService;
    
    unsigned int i;
    for(i = 0; i < productVector.size(); ++i){
        if(userProduct == productVector.at(i)){
            cout << "Input new product: " << endl;
            cin >> userProduct;
        }
    }
    for(i = 0; i < descriptionVector.size(); ++i){
        if(userService == descriptionVector.at(i)){
            cout << "Input new service: " << endl;
            cin >> userService;
        }
    }
}

void Product_and_Services::PrintServicesReport(vector<string>& productVector, vector<string>& descriptionVector){
    unsigned int i;
    
    for (i = 0; i < productVector.size(); ++i){
        cout << productVector.at(i);
    }
    
    for (i = 0; i < descriptionVector.size(); ++i){
        cout << descriptionVector.at(i);
    }
}

void Product_and_Services::SaveToFile(vector<string>& productVector, vector<string>& descriptionVector){

}
