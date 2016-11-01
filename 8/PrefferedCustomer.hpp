//
//  PrefferedCustomer.hpp
//  REVIEW BAGUS
//
//  Created by Mikha Yupikha on 01/11/2016.
//  Copyright © 2016 Mikha Yupikha. All rights reserved.
//

#ifndef PrefferedCustomer_hpp
#define PrefferedCustomer_hpp

#include <stdio.h>
#include <iostream>
using namespace std;

class PersonData
{
protected:
    string lastName;
    string firstName;
    string address;
    string city;
    string state;
    int zip;
    int phone;
    
public:
    PersonData(string lastName, string firstName, string address, string city, string state, int zip, int phone);
    void setLastName(string lastName);
    void setFirstName(string firstName);
    void setAddress(string address);
    void setCity(string city);
    void setState(string state);
    void setZip(int zip);
    void setPhone(int phone);
    string getLastName();
    string getFirstName();
    string getAddress();
    string getCity();
    string getState();
    int getZip();
    int getPhone();
};

class CustomerData : public PersonData
{
protected:
    int custNum;
    bool mailingList;
public:
    CustomerData(string firstName, string lastName, string address, string city, string state, int zip, int phone):PersonData(lastName,firstName, address, city, state, zip, phone)
    {
        
    }
    void setCustNum(int custNum);
    void setMailingList(bool mailingList);
    int getCustNum();
    void getMailingList();
};

class PrefferedCustomer : public CustomerData
{
protected:
    double purchaseAmount;
    double discountLevel;
public:
    PrefferedCustomer(string firstName, string lastName, string address, string city, string state, int zip, int phone):CustomerData(lastName,firstName, address, city, state, zip, phone)
    {
        
    }
    void setPurchaseAmount(double purchaseAmount);
    void setDiscountLevel(double discountLevel);
    double getPurchaseAmount();
    double getDiscountLevel();

};

#endif /* PrefferedCustomer_hpp */
