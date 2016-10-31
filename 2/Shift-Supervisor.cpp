//
//  Shift-Supervisor.cpp
//  REVIEW BAGUS
//
//  Created by Mikha Yupikha on 31/10/2016.
//  Copyright © 2016 Mikha Yupikha. All rights reserved.
//

#include "Shift-Supervisor.hpp"
#include <iostream>
using namespace std;

Employee::Employee(string name, int num, int hireDate)
{
    this -> name = name;
    this -> num = num;
    this -> hireDate = hireDate;
}
void Employee::setName ()
{
    this -> name = name;
}
void Employee::setNum(int num)
{
    this -> num = num;
}
void Employee:: setHireDate(int hireDate)
{
    this -> hireDate = hireDate;
}
string Employee:: getName()
{
    return name;
}
int Employee::getNum()
{
    return num;
}
int Employee::getHireDate()
{
    return hireDate;
}


void ProductionWorker::setShift(int shift)
{
    this -> shift = shift;
}
void ProductionWorker::setHourlyPayRate(int hourlyPayRate)
{
    this -> hourlyPayRate = hourlyPayRate;
}
int ProductionWorker::getShift()
{
    return shift;
}
int ProductionWorker::getHourlyPayRate()
{
    return hourlyPayRate;
}


void ShiftSupervisor::setAnnualSalary(int annualSalary)
{
    this -> annualSalary = annualSalary;
}
void ShiftSupervisor::setAnnualProductionBonus(int annualProductionBonus)
{
    this -> annualProductionBonus = annualProductionBonus;
}
int ShiftSupervisor::getAnnualSalary()
{
    return annualSalary;
}
int ShiftSupervisor::getAnnualProductionBonus()
{
    return annualProductionBonus;
}
