//
//  Profession.hpp
//  PlantManagement
//
//  Created by Иван Милаев on 28/05/2019.
//  Copyright © 2019 IvanMilaev. All rights reserved.
//

#ifndef Profession_hpp
#define Profession_hpp

#include <iostream>
#include <stdio.h>

struct Profession {
public:
    Profession(std::string n,float rate);
    std::string name;
    float baseRate;
    void display();
};

#endif /* Profession_hpp */
