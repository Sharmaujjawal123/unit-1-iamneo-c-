// Shamy is a computer science student studying number systems. She wants to write a program that converts a binary number to its decimal equivalent. The program should prompt the user to enter a binary number, perform the conversion, and display the decimal value.


// Note: This is sample question asked in a Capgemini interview.
// Input format :

// The input consists of a binary number.
// Output format :

// The output is in the form of a decimal.


// Refer to the sample output for formatting specifications.
// Code constraints :

// o to 11111111
// Sample test cases :
// Input 1 :

// 101

// Output 1 :

// Decimal: 5

#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int a,r,i,s=0,v,d=0;
    cin>>a;
    while(a>0){
        
        r=a%10;
        
        d=d+(r*pow(2,s));
        s++;
        a=a/10;
    }
    cout<<"Decimal: "<<d;
    
}



// John wants to write a program that requires the user to enter a username and password. The program should then read the user's input for the username and password and finally display the entered username and password.



// Note: This is a sample question asked in a TCS interview.

// Input format :
// The input consists of the user name and password, separated by space.

// Output format :
// The output prints the username and password on separate lines.



// Refer to the sample output for the formatting specifications.

// Sample test cases :
// Input 1 :
// Alice alice@01
// Output 1 :
// Name: Alice
// Password: alice@01


#include<iostream>
using namespace std;
int main(){
    string a,b;
    cin>>a;
    cout<<" ";
    cin>>b;
    cout<<"Name: "<<a<<endl<<"Password: "<<b;
}


