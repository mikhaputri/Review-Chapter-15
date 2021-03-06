//
//  Shift-Supervisor.hpp
//  REVIEW BAGUS
//
//  Created by Mikha Yupikha on 31/10/2016.
//  Copyright © 2016 Mikha Yupikha. All rights reserved.
//

#ifndef Shift_Supervisor_hpp
#define Shift_Supervisor_hpp

#include <iostream>
using namespace std;

class Employee
{
protected:
    string name;
    int num;
    int hireDate;
public:
    Employee(string name, int num, int hireDate);
    void setName ();
    void setNum(int num);
    void setHireDate(int hireDate);
    string getName();
    int getNum();
    int getHireDate();
};

class ProductionWorker:public Employee
{
protected:
    int shift;
    double hourlyPayRate;
public:
    ProductionWorker(string name, int num, int hireDate) : Employee(name, num, hireDate)
    {
        
    }
    void setShift(int shift);
    void setHourlyPayRate(int hourlyPayRate);
    int getShift();
    int getHourlyPayRate();
};

class ShiftSupervisor:public Employee
{
protected:
    int annualSalary;
    int annualProductionBonus;
public:
    ShiftSupervisor(string name, int num, int hireDate) : Employee(name, num, hireDate)
    {
        
    }
    void setAnnualSalary(int annualSalary);
    void setAnnualProductionBonus(int annualProductionBonus);
    int getAnnualSalary();
    int getAnnualProductionBonus();
};

#endif /* Shift_Supervisor_hpp */
