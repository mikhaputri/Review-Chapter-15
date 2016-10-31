//
//  TeamLeader main.cpp
//  REVIEW BAGUS
//
//  Created by Mikha Yupikha on 31/10/2016.
//  Copyright © 2016 Mikha Yupikha. All rights reserved.
//

#include <stdio.h>
#include "TeamLeader.hpp"
#include <iostream>
using namespace std;

int main()
{
    int shift;
    TeamLeader data1 {"Mikha", 2001585575, 12062016};
    data1.setMonthlyBonus(5000);
    data1.setReqHoursTraining(200);
    data1.setHoursTraining(100);
    
    
    cout<<"Which shift are you? (1=Day / 2=Night)"<<endl;
    cin>>shift;
    
    if (shift == 1)
    {
        data1.setHourlyPayRate(1000);
    }
    else if (shift == 2)
    {
        data1.setHourlyPayRate(2000);
    }
    
    cout<<"Name: "<<data1.getName()<<endl;
    cout<<"Employee's Num: "<<data1.getNum()<<endl;
    cout<<"Employee's Hire Date: "<<data1.getHireDate()<<endl;
    cout<<"Shift Pay Rate: "<<data1.getHourlyPayRate()<<endl;
    
    int hoursLeft = data1.getReqHoursTraining() - data1.getHoursTraining();
    int total = (hoursLeft*data1.getHourlyPayRate()) + data1.getMonthlyBonus();
    
    cout<<"Working Hours Left: "<<hoursLeft<<endl;
    cout<<"Total payment: "<<total<<endl;
    
    
}
