//
//  Shift-Supervisor main.cpp
//  REVIEW BAGUS
//
//  Created by Mikha Yupikha on 31/10/2016.
//  Copyright © 2016 Mikha Yupikha. All rights reserved.
//

#include <stdio.h>
#include "Shift-Supervisor.hpp"
#include <iostream>
using namespace std;

int main()
{
    ShiftSupervisor data1 {"Mikha", 2001585575, 12062016};
    data1.setAnnualSalary(10000);
    data1.setAnnualProductionBonus(5000);
    
    cout<<"Name: "<<data1.getName()<<endl;
    cout<<"Employee's Num: "<<data1.getNum()<<endl;
    cout<<"Employee's Hire Date: "<<data1.getHireDate()<<endl;
    cout<<"Annual Salary: "<<data1.getAnnualSalary()<<endl;
    cout<<"Annual Bonus: "<<data1.getAnnualProductionBonus()<<endl;
}
