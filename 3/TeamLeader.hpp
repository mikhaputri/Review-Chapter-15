//
//  TeamLeader.hpp
//  REVIEW BAGUS
//
//  Created by Mikha Yupikha on 31/10/2016.
//  Copyright © 2016 Mikha Yupikha. All rights reserved.
//

#ifndef TeamLeader_hpp
#define TeamLeader_hpp

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

class TeamLeader:public ProductionWorker
{
protected:
    int monthlyBonus;
    int reqHoursTraining;
    int hoursTraining;
public:
    TeamLeader(string name, int num, int hireDate):ProductionWorker(name, num, hireDate)
    {
        
    }
    void setMonthlyBonus(int monthlyBonus);
    void setReqHoursTraining(int reqHoursTraining);
    void setHoursTraining(int hoursTraining);
    int getMonthlyBonus();
    int getReqHoursTraining();
    int getHoursTraining();
};

#endif /* TeamLeader_hpp */
