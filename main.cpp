#include <iostream>
#include "Date.h"
#include "Student.h"
using namespace std;

int main() {
  Date today(2, 10, 2021);
  Date myBirthday(1, 1, 1996);
  Student chinh(9, "Hoang Minh Chinh", "Ha Noi", myBirthday);
  chinh.print();
}