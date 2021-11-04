#ifndef _DATE_
#define _DATE_

#include <iostream>
using namespace std;

class Date
{
private:
  int day, month, year;

public:
  Date()
  {
  }
  Date(int d, int m, int y)
  {
    day = d;
    month = m;
    year = y;
  }

  void print()
  {
    cout << day << '/' << month << '/' << year << endl;
  }
  int getDate() { return day; }
  int getMonth() { return month; }
  int getYear() { return year; }
  string toString()
  {
    string date = "";
    date += to_string(day) + '/';
    date += to_string(month) + '/';
    date += to_string(year) + '/';
    return date;
  }
};

#endif