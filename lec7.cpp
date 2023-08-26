// Problem Statement



// You are designing a traffic simulator. Implement overloaded functions called calculateSpeed that can calculate different speeds, such as the speed of a car, the speed of a train, and the speed of a plane. Each overloaded function should take the required inputs and return the calculated speed.



// Formula:

// speed = distance/time

// speed = (distance/time) + acceleration*time



// Example



// Input:

// 100.5

// 10

// 5.5

// 6.6



// Output:

// 10.05

// 65.05

// 76.05



// Note: This is a sample question asked in Capgemini recruitment.

// Input format :
// The first line of input consists of the distance(in meters) as a double value.

// The second line of input consists of the time(in seconds) as a double value.

// The third line of input consists of the acceleration(in m/s2) of the train as a double value.

// The third line of input consists of the acceleration(in m/s2) of the plane as a double value.

// Output format :
// The first line of output prints the speed of the car(m/s) rounded off to two decimal places.

// The second line of output prints the speed of the train(m/s) rounded off to two decimal places.

// The third line of output prints the speed of the plane(m/s) rounded off to two decimal places.

// Code constraints :
// 1 < distance < 2500

// 1 < time < 60

// 1 < accelerations of train and plane < 50

// Sample test cases :
// Input 1 :
// 100.5
// 10
// 5.5
// 6.6
// Output 1 :
// 10.05
// 65.05
// 76.05


#include<iostream>
#include<iomanip>
using namespace std;
void calculateSpeed(double a,double b){
    cout<<fixed<<setprecision(2)<<a/b;
    
}
void calculateSpeed(double a,double c,double b,double d){
    cout<<fixed<<setprecision(2)<<(a/b)+(c*b);


    cout<<fixed<<setprecision(2)<<(a/b)+(d*b);
}
int main(){
    double a,b,c,d;
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;
    calculateSpeed(a,b);
    calculateSpeed(a,c,b,d);
    
}



// Problem Statement



// You are developing a bank application. Implement overloaded functions called "calculateInterest" that can calculate the interest for different types of accounts, such as savings accounts and fixed deposit accounts. Each overloaded function should take the necessary inputs, such as the principal amount and time period, and return the calculated interest in separate lines.



// Example



// Input:

// 1200

// 3.8

// 2



// Output:

// 45.60

// 91.20



// Explanation:

// ﻿For a savings account:

// The formula to calculate the interest for a savings account is interest = principal_amount * interest_rate / 100.

// So, the interest for the savings account is 1200 * 3.8 / 100 = 45.60.



// For a fixed deposit account:

// The formula to calculate the interest for a fixed deposit account is interest = principal_amount * interest_rate / 100 * time_period.

// So, the interest for the fixed deposit account is 1200 * 3.8 / 100 * 2 = 91.20.



// Note: This is a sample question asked in Mettl recruitment.

// Input format :
// The first line of input consists of a float value representing the principal amount.

// The second line of input consists of a float value representing the interest rate.

// The last line of input consists of an integer representing the time period (in years).

// Output format :
// The first line of output displays the calculated interest for the savings account rounded off to two decimal places.

// The second line of output displays the calculated interest for the fixed deposit account rounded off to two decimal places.

// Code constraints :
// 500 <= Principal amount <= 100000

// 0 < Interest rate < 15

// 0 < Years < 10

// Sample test cases :
// Input 1 :
// 1200
// 3.8
// 2
// Output 1 :
// 45.60
// 91.20


// You are using GCC
#include<iostream>
#include<iomanip>
using namespace std;
void calculateInterest(float a,float b,int c){
    float ine =a*b/100;
    cout<<fixed<<setprecision(2)<<ine<<endl;
    // a*b/100<<endl;
// }

    float in=a*b/100*c;
    cout<<fixed<<setprecision(2)<<in<<endl;
    // <<a*b/100*2<<endl;
}
int main(){
    float a,b;
    int c;
    cin>>a;
    cin>>b;
    cin>>c;
    
    calculateInterest(a,b,c);
    
}



// Problem Statement



// Let's imagine you are working on a program that involves complex numbers. You have been assigned the task of creating a ComplexNumber class to handle complex number operations. The ComplexNumber class has member variables: real and imaginary, representing the real and imaginary parts of a complex number.



// To enhance the functionality of the ComplexNumber class, you need to implement a friend function named multiply(). This function takes two ComplexNumber objects as arguments and returns their multiplication result.



// Now, let's consider a scenario where you are designing a scientific calculator application. You want to provide complex number multiplication functionality to the calculator's users. Your task is to implement the ComplexNumber class and the multiply() function, allowing users to multiply two complex numbers.



// Note: This is a sample question asked in Infosys recruitment.

// Input format :
// The first line of input consists of the real and imaginary parts of the first complex number separated by spaces.

// The second line of input consists of the real and imaginary parts of the second complex number separated by spaces.

// Output format :
// The output prints the multiplied value of the given complex numbers as shown in the sample outputs.

// Code constraints :
// Real and imaginary parts of the complex numbers are of double datatype.

// Sample test cases :
// Input 1 :
// 2 2
// 2 2
// Output 1 :
// 0 + 8i
// Input 2 :
// 1.5 9.0
// 3.6 -0.9
// Output 2 :
// 13.5 + 31.05i


// You are using GCC
#include<iostream>
using namespace std;
class ComplexNumber{
    public:
    double a,b,c,d;
    void multiply(double p,double q,double r,double s){
        double real= (p*r)-(q*s);
        double complex=(p*s)+(q*r);
        cout<<real<<" + "<<complex<<"i";
    }
    
};
int main(){
    // double a,b,c,d;
    ComplexNumber q;
    cin>>q.a;
    cin>>q.b;
    cin>>q.c;
    cin>>q.d;
    q.multiply(q.a,q.b,q.c,q.d);
}


// Problem Statement



// You are developing a recipe management system that deals with fractional quantities of ingredients. To implement this functionality, you decide to create a Fraction class to handle fractional calculations. The Fraction class has private attributes numerator and a denominator to represent a fraction.



// You need to implement a friend function addMixedFraction(const Fraction&, const Fraction&) that takes two Fraction objects as parameters. One of the fractions may be a mixed fraction, where the numerator is greater than the denominator. The function should add the fractions together and return the result as a new Fraction object.



// Write a C++ program that allows users to input the numerators and denominators of two fractions. Create objects of the Fraction class using the input values. Then, use the addMixedFraction function to add the mixed fractions and display the result.



// Note: This is a sample question asked in Capgemini recruitment.

// Input format :
// The first line of input consists of the numerator and denominator of the first fraction separated by space.

// The second line of input consists of the numerator and denominator of the second fraction separated by space.

// Output format :
// The program prints the sum of the mixed fractions as shown in the sample outputs.

// Code constraints :
// All input values are positive integers.

// Sample test cases :
// Input 1 :
// 4 7
// 8 7
// Output 1 :
// 12/7
// Input 2 :
// 3 5
// 6 7
// Output 2 :
// 51/35


// You are using GCC
#include<iostream>
using namespace std;
class Fraction{
    public:
    int a,b,c,d;

friend Fraction addMixedFraction(Fraction p);

};
Fraction addMixedFraction(Fraction p){
    if(p.b==p.d){
        cout<<p.a+p.c<<"/"<<p.d;
    }
    else{
        cout<<p.a*p.d+p.b*p.c<<"/"<<p.b*p.d;
    }
    
}
int main(){
    Fraction z;
    cin>>z.a>>z.b;
    cin>>z.c>>z.d;
    addMixedFraction(z);
}
