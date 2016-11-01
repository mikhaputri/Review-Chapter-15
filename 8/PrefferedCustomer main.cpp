//
//  PrefferedCustomer main.cpp
//  REVIEW BAGUS
//
//  Created by Mikha Yupikha on 01/11/2016.
//  Copyright © 2016 Mikha Yupikha. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include "PrefferedCustomer.hpp"
using namespace std;

int main()
{
    string fname, lname, address, city, state;
    int zip, phone, spending;
    
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
    cout<<"Spending: ";
    cin>>spending;
    
    PrefferedCustomer cust1 {fname, lname, address, city, state, zip, phone};
    
    char mail;
    cout<<endl;
    cout<<"Do you wish to be on the mailing list? (Y/N)"<<endl;
    cin>>mail;
    cout<<endl;
    
    if (mail == 'Y' || mail == 'y')
    {
        cust1.setMailingList(true);
    }
    else if (mail == 'N' || mail == 'n')
    {
        cust1.setMailingList(false);
    }
    
    //get discount
    if (spending>499 && spending<1000)
    {
        cust1.setDiscountLevel(0.05);
    }
    else if (spending>999 && spending<1500)
    {
        cust1.setDiscountLevel(0.06);
    }
    else if (spending>1499 && spending<2000)
    {
        cust1.setDiscountLevel(0.07);
    }
    else if (spending>=2000)
    {
        cust1.setDiscountLevel(0.1);
    }
    else
    {
        cust1.setDiscountLevel(0);
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
    cout<<"Spending: "<<spending<<endl;
    cout<<"Discount Amount: "<<cust1.getDiscountLevel()<<endl;
}
