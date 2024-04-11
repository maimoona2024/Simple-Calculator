#include<iostream>
using namespace std;
int main() {
    int firstNumber;
    int secondNumber;
    string arithematicOperation;
    cout<<"Please! Enter First number: ";
    cin>>firstNumber;
    cout<<"Please! Enter Second number: ";
    cin>>secondNumber;
    cout<<"Please! Enter arithematic operation you want to perform: "<<arithematicOperation;
    cin>>arithematicOperation;
    if(arithematicOperation == "Addition"){
        int sum = firstNumber + secondNumber;
        cout<<"The sum of numbers is "<<sum;
    }
    else if(arithematicOperation == "Subtraction" ) {
        int sub = firstNumber - secondNumber;
        cout<<"The difference between numbers is "<<sub;
    }
    else if(arithematicOperation == "Multiplication" ) {
        int mul = firstNumber * secondNumber;
        cout<<"The product of numbers is "<<mul;
    }
    else if(arithematicOperation == "Division" ) {
        if (secondNumber != 0) {
            int div = firstNumber / secondNumber;
            cout << "The division of numbers is " << div;
        }
        else if(secondNumber == 0){
            cout << "Error: Division by zero is not possible!";
        }
    }
    else {
        cout<<"Please! Enter a valid Arithematic Operation: ";
    }
}