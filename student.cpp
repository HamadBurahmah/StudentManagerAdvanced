#include "student.h"
student::student()
{
  lastname = "";
  firstname = "";
}
void student::setName(std::string first,std::string last)
{
  firstname = first;
  lastname = last;
}
std::string student::fullName()
{
  std::string str = firstname;
  str.append(" ");
  str.append(lastname);
  return str;
}
double student::getScore()
{
  double total =0;
  if(gradetracker.size() <0 || gradetracker.size() ==0)
  {
    return 0;
  }
  else
  {
    for (int i =0; i<gradetracker.size();i++)
    { 
      total += gradetracker[i];

    }
    return total/gradetracker.size();

  }
}
void student::addGrade(double addingGrade)
{ 
 gradetracker.push_back(addingGrade);
 }
