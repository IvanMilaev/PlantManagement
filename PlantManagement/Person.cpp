//
//  Person.cpp
//  Plant management
//
//  Created by Иван Милаев on 26/05/2019.
//  Copyright © 2019 IvanMilaev. All rights reserved.
//

#include "Person.hpp"

Person :: Person(std::string firstName, std::string lastName, int sex, int age)
{
    firstName = firstName;
    lastName = lastName;
    sex = sex;
    age = age;
}
void Person :: display()
{
    std::cout << "FirstName: " << firstName << "LastName: " << lastName <<"\tAge: " << age << std::endl;
}

