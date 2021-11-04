#ifndef _STUDENT_
#define _STUDENT_

#include <iostream>
#include "Date.h"
using namespace std;

class Student {
  private:
    int id;
    string fullName, homeTown;
    Date dateOfBirth;

  public:
    Student() {
      
    }
    Student(int id, string fullName, string homeTown, Date dob);

    void print();
};

#endif