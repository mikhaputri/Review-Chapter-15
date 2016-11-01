//
//  PersonData main.cpp
//  REVIEW BAGUS
//
//  Created by Mikha Yupikha on 01/11/2016.
//  Copyright © 2016 Mikha Yupikha. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include "PersonData.hpp"
using namespace std;

int main()
{
    string fname, lname, address, city, state;
    int zip, phone;
    
    cout<<"Please input the data below"<<endl;
    cout<<"First Name: ";
    cin>>fname;
    cout<<"Last Name: ";
    cin>>lname;
    cout<<"Address: ";
    cin>>address;
    cout<<"City: ";
    cin>>city;
    cout<<"State: ";
    cin>>state;
    cout<<"ZIP: ";
    cin>>zip;
    cout<<"Phone: ";
    cin>>phone;
    
    CustomerData cust1 {fname, lname, address, city, state, zip, phone};
    
    char mail;
    cout<<"Do you wish to be on the mailing list? (Y/N)"<<endl;
    cin>>mail;
    
    if (mail == 'Y' || mail == 'y')
    {
        cust1.setMailingList(true);
    }
    else if (mail == 'N' || mail == 'n')
    {
        cust1.setMailingList(false);
    }
    
    cout<<"Last Name: "<<cust1.getLastName()<<endl;
    cout<<"First Name: "<<cust1.getFirstName()<<endl;
    cout<<"Address: "<<cust1.getAddress()<<endl;
    cout<<"City: "<<cust1.getCity()<<endl;
    cout<<"State: "<<cust1.getState()<<endl;
    cout<<"ZIP: "<<cust1.getZip()<<endl;
    cout<<"Phone: "<<cust1.getPhone()<<endl;
    cout<<"Mailing List: ";
    cust1.getMailingList();
    cout<<endl;
}
