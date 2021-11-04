#include <iostream>
#include "StudentManagement.h"
#include "Student.h"
using namespace std;

void StudentManagement::printMenu() {
  cout << "Chương trình quản lý sinh viên\n";
  cout << "1. Hiển thị danh sách sinh viên\n";
  cout << "2. Thêm sinh viên\n";
  cout << "3. Sửa sinh viên\n";
  cout << "4. Xóa sinh viên\n";
  cout << "5. Tìm kiếm sinh viên\n";
  cout << "6. Kết thúc chương trình\n";
  cout << "Mời chọn chức năng: ";
  int option;
  cin >> option;
  switch (option) {
    case 1:
      printStudents();
      break;
    case 2:
      break;
    case 3:
      break;
    case 4:
      break;
    case 5:
      break;
    case 6:
      break;
    default:
      
      break;
  }
}

void StudentManagement::printStudents() {
  cout << "here";
}

void StudentManagement::addStudent() {

}
