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
  string getId() { return id; }
  string getFullName() { return fullName; }
  string getHomeTown() { return homeTown; }
  Date getDob() { return dateOfBirth; }
  bool checkMatch(string query);
};

#endif