// File: task2.cpp
// Purpose: In this program, there is a base class shape: with two data members to compute the area of different shapes. Derive two classes’ triangle and rectangle from the base shape. Include constructors in every class to initialize the objects. Include one pure virtual function computeArea() to compute area.
// Author: Ahmed Ashraf Attia
// Section: S27
// ID: 20230606
// TA: Hager Ashry
// Date: 12 Nov 2023






#include <bits/stdc++.h>
using namespace std;

//Shape class 
//attributes: length, width
//functions: constructor, computeArea, getArea
class Shape{
protected:
    double length, width;
public:
    Shape(double l, double w){
        length = l;
        width = w;
    }
    virtual double computeArea() = 0;
    double getArea(){//to get the area of the shape, first call the computeArea function
        return computeArea();
    }
};



//Triangle class
//attributes:
//functions: constructor, computeArea
class Triangle: public Shape{
public:
    Triangle(double l, double w): Shape(l, w) {}
    double computeArea(){
        //Area of a Triangle = A = ½ (b × h) square units
        //where b and h are the base and height of the triangle, respectively.
        //and in this class length and width are the base and height of the triangle  
        return .5 * length * width;
    }
};





//rectangle class
//attributes:
//functions: constructor, computeArea
class rectangle: public Shape{
public:
    rectangle(double l, double w): Shape(l, w) {}
    double computeArea(){
        //Area of a rectangle = length × width
        return length * width;
    }
};


void solve(){
    Shape *ptr;
    Triangle t1(6, 12), t2(51, 11), t3(2, 6);
    rectangle r1(6, 12), r2(51, 11), r3(2, 6);
    cout << "triangle1 area: " << t1.getArea() << '\n';
    cout << "triangle2 area: " << t2.getArea() << '\n';
    cout << "triangle3 area: " << t3.getArea() << '\n';

    cout << "rectangle1 area: " << r1.getArea() << '\n';
    cout << "rectangle2 area: " << r2.getArea() << '\n';
    cout << "rectangle3 area: " << r3.getArea() << '\n';
}
int main(){
    solve();
}
