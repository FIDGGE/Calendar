#include <iostream>
#include <iomanip>
#include <vector>
#include <map>
#include <string>
using namespace std;

int main() {
  int year;
  
  cout << "Enter Year: ";
  cin >> year;
  
  cout << "\n\n";
  
  bool leapYear = false;
  if (year % 4 == 0) {
    if (year % 100 == 0) {
      if (year % 400 == 0) {
        leapYear = true;
      }
    } else {
      leapYear = true;
    }
  }
  
  string months[] = {
    "january", "february", "march", "april",
    "may", "june", "july", "august",
    "september", "october", "november", "december"
  };
  
  string nameOfDay[] = {
    "mon", "tue", "wed", "thu", "fri", "sat", "sun"
  };
  
  int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  
  if (leapYear) {
    days[1] = 29;
  }
  
  int startDay[] = {0, 3, 4, 0, 2, 4, 0, 3, 6, 2, 4, 0};
  
  for (int monthIndex = 0; monthIndex < 12; ++monthIndex) {
    cout << "|    | " << months[monthIndex] << "    |\n";
    cout << "|----|----|----|----|----|----|----|\n";
    
    cout << "|";
    for (int dayNameIndex = 0; dayNameIndex < 7; ++dayNameIndex) {
      cout << nameOfDay[dayNameIndex] << " |";
    }
    cout << "\n";
    cout << "|----|----|----|----|----|----|----|\n";
    
    int dayIndex = 1;
    
    for (int rowIndex = 0; rowIndex < 6; ++rowIndex) {
      cout << "|";
      
      for (int columnIndex = 0; columnIndex < 7; ++columnIndex) {
        if (rowIndex == 0 && columnIndex < startDay[monthIndex]) {
          cout << "    |";
        } else if (dayIndex <= days[monthIndex]) {
          if (dayIndex < 10) {
            cout << "  " << dayIndex << " |";
          } else {
            cout << " " << dayIndex << " |";
          }
          ++dayIndex;
        } else {
          cout << "    |";
        }
      }
      
      cout << "\n";
      if (dayIndex > days[monthIndex]) break;
    }
    
    cout << "\n\n";
  }
  
  return 0;
}
