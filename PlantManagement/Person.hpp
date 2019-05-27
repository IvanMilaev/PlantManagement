//
//  Person.hpp
//  Plant management
//
//  Created by Иван Милаев on 26/05/2019.
//  Copyright © 2019 IvanMilaev. All rights reserved.
//

#ifndef Person_hpp
#define Person_hpp
#include <iostream>
#include <stdio.h>

enum class Sex {
    MALE,
    FEMALE,
    HARDCORE
};

class Person
{
public:
    Person(std::string firstName, std::string lastName, int sex, int age); // constructor
    std::string firstName;
    std::string lastName;
    int sex;
    std::string adress;
    std::string phone;
    int age;
    
    void display();
};

//class Employee
//{
//public:
//    std::string name;       // имя
//    int age;                // возраст
//    std::string company;    // компания
//    void display()
//    {
//        std::cout << "Name: " << name << "\tAge: " << age << std::endl;
//    }
//};
#endif /* Person_hpp */
