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

bool Student::checkMatch(string query)
{
  size_t found = id.find(query);
  if (found != string::npos)
  {
    return true;
  }
  found = fullName.find(query);
  if (found != string::npos)
  {
    return true;
  }
  found = homeTown.find(query);
  if (found != string::npos)
  {
    return true;
  }
  found = dateOfBirth.toString().find(query);
  if (found != string::npos)
  {
    return true;
  }
  return false;
}