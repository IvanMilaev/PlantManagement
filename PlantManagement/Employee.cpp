//
//  Employee.cpp
//  Plant management
//
//  Created by Иван Милаев on 27/05/2019.
//  Copyright © 2019 IvanMilaev. All rights reserved.
//

#include "Employee.hpp"

void Product :: display()
{
    std::cout << "Product: " << vendor << " "<< name << " " << costCoef << std::endl;
}

void Equipment :: display()
{
    std::cout << "Equipment : "<< name << " "<< condition << " " << cost << std::endl;
}

Employee :: Employee(std::string firstName,
                     std::string lastName,
                     int sex, int age,
                     std::string company,
                     Profession *profession,
                     int experience
                     ):Person(firstName, lastName, sex, age)
{
    company = company;
    experience = experience;
    profession = profession;
    
}

void Employee :: display()
{
    std::cout << "Employee: " << firstName << " "<< lastName
    << " Profession: " << profession->name
    << " age: " << std::to_string(age)
    << " phone: " << phone
    << std::endl;
}

float Employee :: productsCost()
{
    float cost = 0.0;
    for(Product prod : products) cost+= prod.costCoef * PRODUCT_PAY;
    return cost;
}

float Employee :: equipmentsCost()
{
    float cost = 0.0;
    for(Equipment equip : equipments) cost+= equip.cost;
    return cost;
}

float Employee :: seeSalary()
{
    return profession->baseRate + experience * EXPERIANCE_PAY + productsCost();
}


void  Employee :: makeProduct(std::string vendor, std::string name, float costCoef)
{
    Product product;
    product.vendor = vendor;
    product.name = name;
    product.costCoef = costCoef;
    products.push_back(product);
    display();
    std::cout << "maked product: " << std::endl;
    product.display();
}

void Employee :: pickEquipment(Equipment *equipment)
{
    equipments.push_back(*equipment);
    display();
    std::cout << "picked equipment: " << std::endl;
    equipment->display();
}

void Employee :: displayProductsList()
{
    for(Product prod : products) prod.display();
}

void Employee :: displayEquipmentsList()
{
    for(Equipment equip : equipments) equip.display();
}
