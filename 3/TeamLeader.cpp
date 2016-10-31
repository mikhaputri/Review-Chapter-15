//
//  TeamLeader.cpp
//  REVIEW BAGUS
//
//  Created by Mikha Yupikha on 31/10/2016.
//  Copyright © 2016 Mikha Yupikha. All rights reserved.
//

#include "TeamLeader.hpp"
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


void TeamLeader::setMonthlyBonus(int monthlyBonus)
{
    this -> monthlyBonus = monthlyBonus;
}
void TeamLeader::setReqHoursTraining(int reqHoursTraining)
{
    this -> reqHoursTraining = reqHoursTraining;
}
void TeamLeader::setHoursTraining(int hoursTraining)
{
    this -> hoursTraining = hoursTraining;
}
int TeamLeader::getMonthlyBonus()
{
    return monthlyBonus;
}
int TeamLeader::getReqHoursTraining()
{
    return reqHoursTraining;
}
int TeamLeader::getHoursTraining()
{
    return hoursTraining;
}
