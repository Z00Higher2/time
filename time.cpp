// Author: Zuhayer Tashin
// Course: CSCI-135
// Instructor: Tong Yi
// Assignment: Lab 10A
// Create a new program time.cpp. 
// (Copy the class Time declaration in your program, it should be placed before main() function.)

#include <iostream>
using namespace std;

class Time { 
public:
    int h;
    int m;
};

int minutesSinceMidnight(Time time){
    Time Midnight = {00 , 00};
    cout << "These moments of time are " << Midnight.h + time.h << " and "<<  Midnight.m + time.m << " minutes after midnight."<< endl;
    return ((Midnight.h + time.h)*60) + (Midnight.m + time.m) ; // returns the total minutes since midnight
}

int minutesUntil(Time earlier, Time later){
    int difference_minutes = later.m - earlier.m;
    int difference_hours = later.h - earlier.h;

    int total = difference_hours * 60;
    int total_minutes = total + difference_minutes;
    return total_minutes; // returns the total minutes
}

Time addMinutes(Time time0, int min){
    Time time = time0;
    int minutes = min;
    while (minutes >= 60) {
        // If minutes is 60 or more, we need to adjust the time
        time.h += 1;    // Increment the hour by 1
        minutes -= 60;  // Subtract 60 minutes from the total
    }

        // Adding the remaining minutes to the current time
    time.m += minutes;

    // If minutes exceed 60, adjust hours accordingly
    if (time.m >= 60) {
        time.h += 1;    // Increment the hour by 1
        time.m -= 60;   // Subtract 60 minutes
    }

    cout << time.h << "," << time.m << endl;

    return time;

}

int main(){
    Time time1 = {8, 10}; // first time

    addMinutes({0,10}, 120);
    
    // cout << "Enter first time: " << time1.h << " " << time1.m << endl;
    // cout << "Enter second time: " << time2.h << " " <<  time2.m <<  endl;

    // cout << minutesSinceMidnight( {10, 30}) << endl;
    // cout << minutesSinceMidnight( {13, 40}) << endl;
    // cout << "The interval between them is " << minutesUntil( {10, 30}, {13, 40} ) << " minutes"<< endl;
    return 0; 


}