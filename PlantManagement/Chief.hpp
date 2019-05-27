//
//  Chief.hpp
//  Plant management
//
//  Created by Иван Милаев on 27/05/2019.
//  Copyright © 2019 IvanMilaev. All rights reserved.
//

#ifndef Chief_hpp
#define Chief_hpp

#include <stdio.h>
#include "Employee.hpp"

class Chief : public Person
{
public:
    Chief(std::string firstName,
          std::string lastName,
          int sex, int age); // constructor
    std::string company;
    std::string workPhone;
    std::string email;
    
    void addEmployee(Employee employee);
    float costOfEquipments();
    float costOfProducts();
    void display();
private:
    std::vector<Employee> employees;
};
#endif /* Chief_hpp */
