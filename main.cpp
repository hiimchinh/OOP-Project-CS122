#include <iostream>
#include "Date.h"
#include "Student.h"
#include "StudentManagement.h"
using namespace std;

int main()
{
  StudentManagement qlsv;
  qlsv.loadFile();
  cout << "Chương trình quản lý sinh viên\n";
  int option;
  do
  {
    qlsv.printMenu();
    cout << "Mời chọn chức năng: ";
    cin >> option;
    cin.ignore();
    cout << "------" << endl;
    switch (option)
    {
    case 1:
      qlsv.printStudents();
      break;
    case 2:
      qlsv.addStudent();
      qlsv.saveFile();
      break;
    case 3:
      qlsv.updateStudent();
      qlsv.saveFile();
      break;
    case 4:
      qlsv.deleteStudent();
      qlsv.saveFile();
      break;
    case 5:
      qlsv.searchStudent();
      break;
    case 6:
      break;
    default:
      cout << "Chức năng chưa hỗ trợ. Vui lòng chọn lại.\n";
      break;
    }
  } while (option != 6);
  cout << "Chương trình kết thúc. Cảm ơn bạn đã sử dụng chương trình!\n";
}