//
//  Essay.cpp
//  REVIEW BAGUS
//
//  Created by Mikha Yupikha on 01/11/2016.
//  Copyright © 2016 Mikha Yupikha. All rights reserved.
//

#include "Essay.hpp"
#include <iostream>
using namespace std;

char GradedActivity::getLetterGrade() const
{
    char letterGrade; // To hold the letter grade
    if (score > 89)
    {
        letterGrade = 'A';
    }
    else if (score > 79)
    {
      letterGrade = 'B';
    }
    else if (score > 69)
    {
        letterGrade = 'C';
    }
    else if (score > 59)
    {
        letterGrade = 'D';
    }
    else
    {
        letterGrade = 'F';
    }
    return letterGrade;
}


Essay::Essay(int grammar, int spelling, int length, int content)
{
    this ->grammar = grammar;
    this-> spelling = spelling;
    this -> length = length;
    this -> content = content;
}
void Essay::setGrammar(int grammar)
{
    this -> grammar = grammar;
}
void Essay::setSpelling(int spelling)
{
    this -> spelling = spelling;
}
void Essay::setLength(int length)
{
    this -> length = length;
}
void Essay::setContent(int content)
{
    this -> content = content;
}
int Essay::getGrammar()
{
    return grammar;
}
int Essay::getSpelling()
{
    return spelling;
}
int Essay::getLength()
{
    return length;
}
int Essay::getCOntent()
{
    return content;
}
int Essay::getTotalScore()
{
    return grammar + spelling + length + content;
}
