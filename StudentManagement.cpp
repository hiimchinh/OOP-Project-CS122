#include <iostream>
#include "StudentManagement.h"
#include "Student.h"
#include <fstream>
using namespace std;

void StudentManagement::printMenu()
{
  cout << endl
       << "1. Hiển thị danh sách sinh viên\n";
  cout << "2. Thêm sinh viên\n";
  cout << "3. Sửa sinh viên\n";
  cout << "4. Xóa sinh viên\n";
  cout << "5. Tìm kiếm sinh viên\n";
  cout << "6. Kết thúc chương trình\n";
}

void StudentManagement::printStudents()
{
  for (int i = 0; i < n; i++)
  {
    students[i].print();
    cout << "------" << endl;
  }
  cout << "Tổng số sinh viên hiện tại: " << n << endl;
}

void StudentManagement::addStudent()
{
  cout << "Mời bạn nhập ID của sinh viên: ";
  string id;
  cin >> id;
  cin.ignore();
  cout << "Mời bạn nhập họ tên của sinh viên: ";
  string fullName;
  getline(cin, fullName);
  cout << "Mời bạn nhập quê quán của sinh viên: ";
  string homeTown;
  getline(cin, homeTown);
  cout << "Mời bạn nhập ngày sinh của sinh viên (nhập theo định dạng ngày tháng năm): ";
  int date, month, year;
  cin >> date >> month >> year;
  Date dob(date, month, year);
  Student student(id, fullName, homeTown, dob);
  students[n] = student;
  n++;
}

void StudentManagement::loadFile()
{
  fstream file("data.txt", ios::in);
  file >> n;
  for (int i = 0; i < n; i++)
  {
    string id, fullName, homeTown;
    int date, month, year;
    file >> id;
    file.ignore();
    getline(file, fullName);
    getline(file, homeTown);
    file >> date >> month >> year;
    Date dob(date, month, year);
    students[i] = Student(id, fullName, homeTown, dob);
  }
}

void StudentManagement::saveFile()
{
  fstream file("data.txt", ios::out);
  file << n << endl;
  for (int i = 0; i < n; i++)
  {
    Student currentStudent = students[i];
    file << currentStudent.getId() << endl;
    file << currentStudent.getFullName() << endl;
    file << currentStudent.getHomeTown() << endl;
    Date dob = currentStudent.getDob();
    file << dob.getDate() << endl;
    file << dob.getMonth() << endl;
    file << dob.getYear() << endl;
  }
  file.close();
}

void StudentManagement::updateStudent()
{
  cout << "Mời nhập mã sinh viên bạn muốn cập nhật: ";
  string id, fullName, homeTown;
  int pos = -1;
  cin >> id;
  cin.ignore();
  for (int i = 0; i < n; i++)
  {
    if (id == students[i].getId())
    {
      pos = i;
      break;
    }
  }
  if (pos != -1)
  {
    int date, month, year;
    cout << "Mời bạn nhập họ tên mới: ";
    getline(cin, fullName);
    cout << "Mời bạn nhập quê quán mới: ";
    getline(cin, homeTown);
    cout << "Mời bạn nhập ngày tháng năm sinh mới: ";
    cin >> date >> month >> year;
    Date dob(date, month, year);
    students[pos] = Student(id, fullName, homeTown, dob);
    cout << "Cập nhật thông tin sinh viên thành công.";
  } else
  {
    cout << "Không tìm thấy sinh viên có mã sinh viên " << id;
  }
}

void StudentManagement::deleteStudent()
{
}