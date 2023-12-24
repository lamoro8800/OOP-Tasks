#include <iostream>
#include <exception>
using namespace std;
//DivideByZero: exception
//functions: what overload
class DivideByZero : public exception {
public:
    //what function overload and it returns string 
    virtual const char* what() const throw() {
        return "Error! Division By Zero.";
    }
};

//InvalidOperation: exception
//functions: what overload
class InvalidOperation : public exception {
public:
    //waht function overload
    virtual const char* what() const throw() {
        return "Invalid operation.";
    }
};

//calc is a function that takes two numbers and an operation. returns the result of this operation 
int calc(int x, int y, char op) throw(DivideByZero, InvalidOperation) {
    if (op == '+')
        return x + y;
    else if (op == '-')
        return x - y;
    else if (op == '*')
        return x * y;
    else if (op == '/') {
        if (y == 0) {
            DivideByZero d;
            throw d;
        }
        return x / y;
    } else {
        InvalidOperation d;
        throw d;
    }
}

int main() {
    try {
        int x, y;
        char c;
        cout << "Please enter the statement in this format: first number, operation, second number (ex. 2 + 5): ";
        cin >> x >> c >> y;
        cout << calc(x, y, c) << '\n';
    } catch (InvalidOperation e) {
        cout << e.what() << '\n';
    } catch (DivideByZero d) {
        cout << d.what() << '\n';
    }
  
}
