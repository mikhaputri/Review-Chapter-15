//
//  Essay.hpp
//  REVIEW BAGUS
//
//  Created by Mikha Yupikha on 01/11/2016.
//  Copyright © 2016 Mikha Yupikha. All rights reserved.
//

#ifndef Essay_hpp
#define Essay_hpp

#include <iostream>
using namespace std;
class GradedActivity
{
protected:
    double score; // To hold the numeric score
public:
    // Default constructor
    GradedActivity()
    {
        score = 0.0;
    }
    // Constructor
    GradedActivity(double s)
    {
        score = s;
    }
    // Mutator function
    void setScore(double s)
    {
        score = s;
    }
    // Accessor functions
    double getScore() const
    {
        return score;
    }
    char getLetterGrade() const;
};

class Essay : public GradedActivity
{
protected:
    int grammar;
    int spelling;
    int length;
    int content;
public:
    Essay(int grammar, int spelling, int length, int content);
    void setGrammar(int grammar);
    void setSpelling(int spelling);
    void setLength(int length);
    void setContent(int content);
    int getGrammar();
    int getSpelling();
    int getLength();
    int getCOntent();
    int getTotalScore();
};

#endif /* Essay_hpp */
