/*
 Code File Name: Chapter4Exercise10.cpp
 Programmer: Christina McDonald
 Due Date: 04/12/26
 Requirements: Display number of days in a month after getting the month number and year.
 Do so by also calculating whether a leap year.
 */

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
int month;
int year;
int days;

cout << "Enter the month (1-12)" << endl;
cin >> month;
if (month == 1|| month == 3|| month == 5|| month == 7|| month == 8 || month == 10 || month == 12) {
    cout << "There are 31 days" << endl;
}
else if (month == 2 ) {
    cout << "What is the year?" << endl;
    cin >> year;


}

    return 0;

}