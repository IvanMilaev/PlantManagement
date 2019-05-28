//
//  Product.hpp
//  PlantManagement
//
//  Created by Иван Милаев on 28/05/2019.
//  Copyright © 2019 IvanMilaev. All rights reserved.
//

#ifndef Product_hpp
#define Product_hpp

#include <iostream>
#include <stdio.h>

struct Product {
public:
    Product(std::string v, std::string n, float coef);
    std::string vendor; // atrtikl or id
    std::string name;
    float costCoef = 1.0;
    void display();
};
#endif /* Product_hpp */
