// TASK 2 :- A Calculator program that perform basis arithmetic operation such as addition, subtraction, multiplication and division. Allowing the user to input two numbers and choose an operation to perform.
#include<iostream>
#include<conio.h>
using namespace std;

class Operations{
public:
    void Entry(){
        cout << "****** Welcome to Ayush_kishor's CALCULATOR! ****** " << endl;   
    }               
    int Addition(int x, int y){
        int ans = x + y;
        return ans;
    }       
    int Subtraction(int x, int y){
        int ans = x - y;
        return ans;
    }       
    int Multiplication(int x, int y){
        int ans = x * y;
        return ans;
    }       
    int Division(int x, int y){
        int ans = x / y;
        return ans;
    }
};

int main(){
int Opc;
int x, y;

Operations key; //Object
key.Entry();

cout << "What Operation do you want to perform? " << endl;
cout << "1 - Addition " << endl;
cout << "2 - Subtraction " << endl;
cout << "3 - Multiplication " << endl;
cout << "4 - Division " << endl;
cout << "Input: " << endl;

cin >> Opc;
cout << endl;

switch(Opc){

    case 1: //Addition
        cout << "**ADDITION**" << endl;
        cout << "Please enter first number: " << endl;
        cin >> x;
        cout << "Please enter second number: " << endl;
        cin >> y;
        cout << x << " + " << y << " = "; 
        cout << key.Addition(x, y);
        break;          
    case 2: //Subtraction
        cout << "**SUBTRACTION**" << endl;  
        cout << "Please enter first number: " << endl;
        cin >> x;
        cout << "Please enter second number: " << endl;
        cin >> y;
        cout << x << " - " << y << " = ";
        cout << key.Subtraction(x, y);
        break;              
    case 3: //Multiplication
        cout << "**MULTIPLICATION**" << endl;   
        cout << "Please enter first number: " << endl;
        cin >> x;
        cout << "Please enter second number: " << endl;
        cin >> y;
        cout << x << " x " << y << " = ";
        cout << key.Multiplication(x, y);
        break;      
    case 4: //Division
        cout << "**DIVISION**" << endl; 
        cout << "Please enter first number: " << endl;
        cin >> x;
        cout << "Please enter second number: " << endl;
        cin >> y;
        cout << x << " / " << y << " = ";
        cout << key.Division(x, y);
        break;
    default:
        cout << "Invalid Input!";
        break;
}

}