//
//  PersonData.cpp
//  REVIEW BAGUS
//
//  Created by Mikha Yupikha on 01/11/2016.
//  Copyright © 2016 Mikha Yupikha. All rights reserved.
//

#include "PersonData.hpp"
#include <iostream>
using namespace std;

PersonData::PersonData(string lastName, string firstName, string address, string city, string state, int zip, int phone)
{
    this -> lastName = lastName;
    this -> firstName = firstName;
    this -> address = address;
    this -> city = city;
    this -> state = state;
    this -> zip = zip;
    this -> phone = phone;
}
void PersonData::setLastName(string lastName)
{
    this -> lastName = lastName;
}
void PersonData::setFirstName(string firstName)
{
    this -> firstName = firstName;
}
void PersonData::setAddress(string address)
{
    this -> address = address;
}
void PersonData::setCity(string city)
{
    this -> city = city;
}
void PersonData::setState(string state)
{
    this -> state = state;
}
void PersonData::setZip(int zip)
{
    this -> zip = zip;
}
void PersonData::setPhone(int phone)
{
    this -> phone = phone;
}
string PersonData::getLastName()
{
    return lastName;
}
string PersonData::getFirstName()
{
    return firstName;
}
string PersonData::getAddress()
{
    return address;
}
string PersonData::getCity()
{
    return city;
}
string PersonData::getState()
{
    return state;
}
int PersonData::getZip()
{
    return zip;
}
int PersonData::getPhone()
{
    return phone;
}


void CustomerData::setCustNum(int custNum)
{
    this -> custNum = custNum;
}
void CustomerData::setMailingList(bool mailingList)
{
    this -> mailingList = mailingList;
}
int CustomerData::getCustNum()
{
    return custNum;
}
void CustomerData::getMailingList()
{
    if (mailingList == 1)
        cout<<"yes"<<endl;
    else if (mailingList == 0)
        cout<<"no"<<endl;
}
