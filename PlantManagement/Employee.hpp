//
//  Employee.hpp
//  Plant management
//
//  Created by Иван Милаев on 27/05/2019.
//  Copyright © 2019 IvanMilaev. All rights reserved.
//

#ifndef Employee_hpp
#define Employee_hpp

#include <stdio.h>
#include "Person.hpp"
#include <vector>

const float EXPERIANCE_PAY = 100.0;
const float PRODUCT_PAY = 250.0;

struct Profession {
public:
    Profession(std::string name,  float baseRate)
    {
        name = name;
        baseRate = baseRate;
    }
    std::string name;
    float baseRate;
    void display();
};

struct Product {
    std::string vendor; // atrtikl or id
    std::string name;
    float costCoef = 1.0;
    void display();
};

enum EquipCondition {
    perfect,
    satisfactory,
    bad
};

struct Equipment {
    std::string name;
    EquipCondition condition;
    float cost = 1.0;
    void display();
};

class Employee : public Person
{
public:
    Employee(std::string firstName,
             std::string lastName,
             int sex, int age,
             std::string company,
             Profession *profession,
             int experience); // constructor
    
    std::string company;
    std::string workPhone;
    std::string email;
    Profession *profession;
    int experience;
    float seeSalary();
    float paySalary();
    float productsCost();
    float equipmentsCost();
    void makeProduct(std::string vendor, std::string name, float costCoef);
    void pickEquipment(Equipment *equipment);
    void displayProductsList(); 
    void displayEquipmentsList();
    void display();
    
private:
    std::vector<Product> products;
    std::vector<Equipment> equipments;
};
#endif /* Employee_hpp */
