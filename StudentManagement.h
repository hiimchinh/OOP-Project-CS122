#ifndef _QLSV_
#define _QLSV_
#include <iostream>
#include "Date.h"
#include "Student.h"
using namespace std;


class StudentManagement {
  private:
    int n;
    Student students[500];
  public:
    StudentManagement() {
      
    }
    void printMenu();
    void printStudents();
    void addStudent();
    void updateStudent();
    void deleteStudent();
    void readStudents();
    void saveStudents();

};
#endif