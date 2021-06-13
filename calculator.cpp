// [Classes and Objects] Write a program that uses a class where the member functions are defined outside a class.
//for making a calculator with sum(), multiply(), divide(), subtract(), sine( e.g. sin(30) deg- 1/2 )

#include<iostream>
#include<math.h>
#include<cmath>

using namespace std;

class Calc{

    public:
    void sum(float, float);
    void multi(float, float);
    void div(float, float);
    void sub(float, float);
    void sine(float);

};

void Calc::sum(float x, float y){
    float r = x+y;
    cout << "Sum: "<<r << endl;
    cout << endl;
}

void Calc::multi(float x, float y){
    float r = x*y;
    cout << "Product: "<<r << endl;
    cout << endl;
}

void Calc::div(float x, float y){
    float r = x/y;
    cout << "Division: "<<r <<endl;
    cout << endl;
}

void Calc::sub(float x, float y){
    float r = x-y;
    cout << "Difference: "<<r << endl;
    cout << endl;
}

void Calc::sine(float x){
    float f = x*3.14159/180;
    float r = sin(f);
    //float r = sin(x);
    cout << "Sine: "<<r << endl;
    cout << endl;
}

int main(){

    int z;
    int a;
    int b;
    Calc obj;

    while(z!=6){
    cout << "What do you want to calculate?" << endl;
    
    cout << "Press 1 for Sum" << endl;
    cout << "Press 2 for Product" << endl;
    cout << "Press 3 for Division" << endl;
    cout << "Press 4 for Difference" << endl;
    cout << "Press 5 for Sine" << endl;
    cout << "Press 6 to Exit" << endl;

    cin >> z;

    switch(z){
        case 1:
        cout << "Enter first number:" << endl;
        cin >> a;
        cout << "Enter second number:" << endl;
        cin >> b;
        obj.sum(a,b);
        break;

        case 2:
        cout << "Enter first number:" << endl;
        cin >> a;
        cout << "Enter second number:" << endl;
        cin >> b;
        obj.multi(a,b);
        break;

        case 3:
        cout << "Enter first number:" << endl;
        cin >> a;
        cout << "Enter second number:" << endl;
        cin >> b;
        obj.div(a,b);
        break;

        case 4:
        cout << "Enter first number:" << endl;
        cin >> a;
        cout << "Enter second number:" << endl;
        cin >> b;
        obj.sub(a,b);
        break;

        case 5:
        cout << "Enter the number:" << endl;
        cin >> a;
        obj.sine(a);
        break;

        case 6:
        break;

        default:
        cout << "Please select a valid option." << endl;
        break;
    }
    }
return 0;
} 