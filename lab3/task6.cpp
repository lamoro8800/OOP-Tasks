// File: task6.cpp
// Purpose: this program create a class Distance with feet and inch and with a print function to print the distance and non-member (friend) function max which returns the larger of two distance objects.
// Author: Ahmed Ashraf Attia
// Section: S27
// ID: 20230606
// TA: Hager Ashry
// Date: 12 Nov 2023


#include <bits/stdc++.h>
using namespace std;

//Distance clss
//attributes: feet, inch
//functions:
//  members: constructor, calculateDistance, print
//  non-members: getMaxDistance
class Distance{
private:
    double feet, inch;
public:
    Distance(double f, double i){
        feet = f;
        inch = i;
    }
    double calcDistance(){
        //return the distance in inches
        // 1feet = 12 inches 
        return 12 * feet + inch;
    }
    void print(){
        cout << "The distance in inches is: " << calcDistance() << '\n';
    }
    friend void getMaxDistacne(Distance x, Distance y);
};



//the friend function to get the max distance
void getMaxDistacne(Distance x, Distance y){
    if(x.calcDistance() > y.calcDistance())
        cout << "The first distacne is greatest\n";
    else if(x.calcDistance() == y.calcDistance())
        cout << "Are equals\n";
    else 
        cout << "The second distacne is greatest\n";
}



void solve(){
    Distance d1(10, 20), d2(1, 5);
    //the first object distance is 10*12+20 = 120+20 = 140 inches
    //and the second one is 1*12+5 = 12+5 = 17 inches
    
    d1.print();//140
    d2.print();//14
    getMaxDistacne(d1, d2);
}

int main(){
    solve();
}
