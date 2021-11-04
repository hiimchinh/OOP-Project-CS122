#ifndef _QLSV_
#define _QLSV_
#include <iostream>
#include "Date.h"
#include "Student.h"
using namespace std;

class StudentManagement
{
private:
  int n = 0;
  Student students[500];

public:
  StudentManagement()
  {
  }
  void printMenu();
  void printStudents();
  void addStudent();
  void updateStudent();
  void deleteStudent();
  void searchStudent();
  void loadFile();
  void saveFile();
};
#endif