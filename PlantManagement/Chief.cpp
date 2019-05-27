//
//  Chief.cpp
//  Plant management
//
//  Created by Иван Милаев on 27/05/2019.
//  Copyright © 2019 IvanMilaev. All rights reserved.
//

#include "Chief.hpp"

Chief :: Chief(std::string firstName,
               std::string lastName,
               int sex, int age) : Person(firstName, lastName, sex, age)
{
    
}
void Chief :: display()
{
    std::cout << "Chief: " << firstName << " "<< lastName
    << " phone: " << phone
    << std::endl;
}

void Chief :: addEmployee(Employee employee)
{
    employees.push_back(employee);
    display();
    std::cout << "add employee ..."<< std::endl;
    employee.display();
}

float Chief :: costOfProducts()
{
    float cost = 0.0;
    for(Employee empl : employees) cost+=empl.productsCost();
    return cost;
}

float Chief :: costOfEquipments()
{
    float cost = 0.0;
    for(Employee empl : employees) cost+=empl.equipmentsCost();
    return cost;
}
