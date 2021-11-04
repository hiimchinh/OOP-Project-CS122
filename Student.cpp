#include <iostream>
#include "Student.h"
using namespace std;

Student::Student(int id, string fullName, string homeTown, Date dob)
{
  this->id = id;
  this->fullName = fullName;
  this->homeTown = homeTown;
  this->dateOfBirth = dob;
}

void Student::print()
{
  cout << "ID: " << id << endl;
  cout << "Full name: " << fullName << endl;
  cout << "Home town: " << homeTown << endl;
  cout << "Date of birth: ";
  dateOfBirth.print();
}