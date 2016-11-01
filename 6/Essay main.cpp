//
//  Essay main.cpp
//  REVIEW BAGUS
//
//  Created by Mikha Yupikha on 01/11/2016.
//  Copyright © 2016 Mikha Yupikha. All rights reserved.
//

#include <iostream>
#include "Essay.hpp"
using namespace std;

int main()
{
    int grammar, spelling, length, content;
    
    cout<<"Please input score for this category: "<<endl;
    cout<<"Grammar: ";
    cin>>grammar;
        while (grammar >= 30)
        {
            cout<<"ERROR: Cannot be greater than 30"<<endl;
            cout<<"Grammar: ";
            cin>>grammar;
        }
    cout<<"Spelling: ";
    cin>>spelling;
        while (spelling >= 20)
        {
            cout<<"ERROR: Cannot be greater than 20"<<endl;
            cout<<"Spelling: ";
            cin>>spelling;
        }
    cout<<"Length: ";
    cin>>length;
        while (length >= 20)
        {
            cout<<"ERROR: Cannot be greater than 20"<<endl;
            cout<<"Length: ";
            cin>>length;
        }
    cout<<"Content: ";
    cin>>content;
        while (content >= 30)
        {
            cout<<"ERROR: Cannot be greater than 30"<<endl;
            cout<<"Content: ";
            cin>>content;
        }
    
    Essay total {grammar, spelling, length, content};
    
    cout<<"Total Score: "<<total.getTotalScore();
    
}
