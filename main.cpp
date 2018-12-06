#include <iostream>
#include <string>
#include "student.h"

using namespace std;

int main()
{
    string firstName;
    string lastName;
    student person;
    
    cout<<"What is the student's name? ";
    cin>>firstName>>lastName;
    
    person.setName(firstName,lastName);
    
    double grade, score;
    do
    {
        cout<<"Add grade (or -1 to finish): ";
        cin>>grade;
        if( grade != -1 )
        {
            person.addGrade(grade);
        }
    }while( grade != -1 );
    
    score = person.getScore();
    
    cout<<person.fullName()<<"'s Course grade is: "<<score<<endl;
    
    return 0;
}
