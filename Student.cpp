#include <iostream>
#include "Student.h"
using namespace std;

Student::Student(string id, string fullName, string homeTown, Date dob)
{
  this->id = id;
  this->fullName = fullName;
  this->homeTown = homeTown;
  this->dateOfBirth = dob;
}

void Student::print()
{
  cout << "Mã sinh viên: " << id << endl;
  cout << "Họ tên: " << fullName << endl;
  cout << "Quê quán: " << homeTown << endl;
  cout << "Ngày sinh: ";
  dateOfBirth.print();
}