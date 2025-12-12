#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

int main() {
  int year;
  
  cout << " Enter Year ";
  cin  >> year;
  
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
  "January", "February", "March", "April",
  "May", "June", "July", "August",
  "September", "October", "November", "December"
  };
  
  int days [] = {
  31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  
  if (leapYear) {
      days[1] = 29;
  }
  for (int month = 0; month < 12; ++month){
    cout << "----------" << months[month] << "----------" << "\n";
    
    for (int dayIndex = 1; dayIndex <= days[month]; ++dayIndex) {
      cout << dayIndex << " ";
      
      if (dayIndex % 7 == 0) {
        cout << "\n";
      }
    }
 
  cout << "\n\n";
  }
}
