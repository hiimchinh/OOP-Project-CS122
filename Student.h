#ifndef _STUDENT_
#define _STUDENT_

#include <iostream>
#include "Date.h"
using namespace std;

class Student
{
private:
  string id;
  string fullName, homeTown;
  Date dateOfBirth;

public:
  Student()
  {
  }
  Student(string id, string fullName, string homeTown, Date dob);

  void print();
};

#endif