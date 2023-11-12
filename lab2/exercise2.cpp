// File: exercise2.cpp
// Purpose: In this program, there are two types of employees: fixed salary per month and hourly salary. Each of those types has his own way to calculate his salary. Each employee has the following properties (name, age, net pay).
// Author: Ahmed Ashraf Attia
// Section: S27
// ID: 20230606
// TA: Hager Ashry
// Date: 12 Nov 2023



#include <bits/stdc++.h>
using namespace std;

//Employee class
//attributes: name, id, netpay
//functions: constractor, setNetPay, ClacSalary, PrintEmployeeInfo
class Employee{
protected:
    string name;
    int id;
    double netpay;
public:
    Employee(string s, int i){
        name = s;
        id = i;
    }
    void setNetPay(double np){
        netpay = np;
    }
    void CalcSalary() {
        cout<<"Error, missing info. Call from a derived class";
    }
    void PrintEmployeeInfo(){
        cout << "Name: " << name << "  " << "id: " << id << "  " << "salary: " << netpay << '\n';
    }
};



//HourlyEmployee: Employee
//attributes: ratePerHour, WorkingHours
//functions: constractor, CalcSalary, setRatePerHour, setWorkingHours
class HourlyEmployee: public Employee{
private:
    double ratePerHour, WorkingHours;
public:
    HourlyEmployee(string s, int i): Employee(s, i) {}
    void CalcSalary(){
        setNetPay(ratePerHour * WorkingHours);
    }
    void setRatePerHour(double rh){
        ratePerHour = rh;
    }
    void setWorkingHours(double wh){
        WorkingHours = wh;
    }
};



//SalaryEmployee: Employee
//attributes: salary
//functions: constractor, CalcSalary, setSalary
class SalaryEmployee: public Employee{
private:
    double salary;
public:
    SalaryEmployee(string s, int i): Employee(s, i) {}
    void CalcSalary(){
        setNetPay(salary);
    }
    void setSalary(double s){
        salary = s;
    }
};



void solve(){
    HourlyEmployee koko("Koko", 1000);
    SalaryEmployee ahmed("Ahmed", 1001);
    koko.setRatePerHour(20);
    koko.setWorkingHours(90);
    koko.CalcSalary();
    koko.PrintEmployeeInfo();

    ahmed.setSalary(1500);
    ahmed.CalcSalary();
    ahmed.PrintEmployeeInfo();

}
int main(){
    solve();
}
