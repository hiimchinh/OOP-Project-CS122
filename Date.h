#ifndef _DATE_
#define _DATE_

#include <iostream>
using namespace std;

class Date {
  private:
    int day, month, year;
  public:
    Date() {

    }
    Date(int d, int m, int y) {
      day = d;
      month = m;
      year = y;
    }

    void print() {
      cout << day << '/' << month << '/' << year << endl;
    }
};

#endif