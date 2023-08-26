// Alice is a mathematics teacher who wants to help her students understand the concept of the summation of natural numbers. To make it more interactive, she decides to write a program that calculates the sum of all natural numbers between 1 and a given number n using the concept call by value.



// Alice's program implements a function called calculatesum(), which takes n as an argument. When the program runs, it prompts the user to enter a value for n. After receiving the input, the program calls the calculatesum() function, which performs the necessary calculations to find the sum of all natural numbers from 1 to n.



// Alice's program provides an engaging way for her students to visualize and understand the concept of summation while also enhancing their programming skills.



// Note: This is a sample question asked in TCS recruitment.

// Input format :
// The first line of input should be a positive integer representing the lower limit.

// The second line of input should be a positive integer representing the higher limit.

// Output format :
// The output prints the sum of all natural numbers from 1 to n.

// Sample test cases :
// Input 1 :
// 1
// 10
// Output 1 :
// 55
// Input 2 :
// 15
// 20
// Output 2 :
// 105


// You are using GCC
#include<iostream>
using namespace std;
int calculatesum(int a, int b){
    int c=0;
    for (int i=a;i<=b;i++){
        c=c+i;
        
    }
    cout<<c;
}
int main(){
    int a,b;
    cin>>a;
    cin>>b;
    calculatesum(a,b);
}



// Write a program that takes three integer values as input from the user, then performs the following operations:



// Calls a function named shift that takes three integer references as parameters and shifts their values one position to the left, i.e., the value of c becomes the value of b, the value of b becomes the value of a, and the value of a becomes the original value of c.



// Calls a function named getLargest that takes three integer references as parameters and returns a reference to the largest value among them.



// Prompts the user to input a new value for the largest value among the three integers, and modifies it using the reference returned by getLargest.Prints out the updated values of x, y, and z, as well as the new value of the largest value among them.



// Function Specifications:

// shift(int& a, int& b, int& c)

// int& getLargest(int& a, int& b, int& c)



// // Note: This is a sample question asked in TCS recruitment.

// // Input format :
// // The first line consists of three integers x, y, and z separated by space representing the initial values of the variables.

// // The last line consists of an integer that represents the value to be assigned to the largest variable.

// // Output format :
// // The first line prints the original values of the variables before the shift operation.

// // The second line prints the values of the variables after the shift operation.

// // The third line prompts the values of the variables after the largest variable has been modified.

// // The fourth line prints the largest value among the three variables.

// // Sample test cases :
// // Input 1 :
// // 1 2 3
// // 10
// // Output 1 :
// // Before Shift: x: 1 y: 2 z: 3
// // After Shift: x: 3 y: 1 z: 2
// // After modification: x: 10 y: 1 z: 2
// // The largest value among x, y, and z is: 10
// // Input 2 :
// // 5 3 7
// // 8
// // Output 2 :
// // Before Shift: x: 5 y: 3 z: 7
// // After Shift: x: 7 y: 5 z: 3
// // After modification: x: 8 y: 5 z: 3
// // The largest value among x, y, and z is: 8


#include <iostream>
using namespace std;

void output(int a,int b,int c){
    cout<<"x: "<<a<<" y: "<<b<<" z: "<<c<<endl;
}


int& getLargest(int& a, int& b, int& c){
    
    
    if(a>b && a>c){
        return a;
    }
    else if(b>a && b>c){
        return b;
    }
    else{
        return c;
    }
    
}


void shift(int &a, int &b, int &c){
    //create temp variables
    int x,y,z;
    x=a;
    y=b;
    z=c;
    
    //shift
    b=x;
    a=z;
    c=y;
    
    cout<<"After Shift: ";
    output(a,b,c);
}



int main(){
    
    int a,b,c,x;
    cin>>a>>b>>c;
    cin>>x;
    
    cout<<"Before Shift: ";
    output(a,b,c);
    
    shift(a,b,c);
    
    int& m=getLargest(a,b,c);
    m=x;
    cout<<"After modification: ";
    output(a,b,c);
    
    cout<<"The largest value among x, y, and z is: "<<m;
    
    return 0;
}



// Alex is a math enthusiast who loves playing with numbers. One day, Alex came across a challenge to write a program that reverses a given number. Intrigued by the challenge, Alex decides to write a program using reference variables.



// Can you help Alex by creating a program that reverses the number using reference variables?



// Function Name: void reverseNumber



// Note: This is a sample question asked in a HCL interview.

// Input format :
// The input consists of a positive integer N.

// Output format :
// The output displays the reversed number N.

// Code constraints :
// 0 <= N <= 107

// Beginning and trialing zeros will be ignored in the number while reversing.

// Sample test cases :
// Input 1 :
// 157
// Output 1 :
// 751
// Input 2 :
// 120
// Output 2 :
// 21


// You are using GCC
#include<iostream>
using namespace std;
void reverseNumber(int n){
    int i=0,r;
    while(n>0){
        r=n%10;
        i=(i*10)+r;
        n=n/10;
    }
    cout<< i;
    
}
int main(){
    int n;
    cin>>n;
    reverseNumber(n);
    
}



// Suppose you are working on a project that involves analyzing the individual digits of a given number. You are tasked with writing a program that calculates the sum of the digits of a positive integer using recursion.



// Your program should take a positive integer as input and recursively calculate the sum of its digits. Finally, it should return the sum as the output.



// Function Specifications:

// int sumOfDigits(int num);



// Note: This is a sample question asked in CTS recruitment.

// Input format :
// The input consists of a number N.

// Output format :
// The output prints the sum of the digits of the given number.

// Code constraints :
// 0 < N <= 1000000

// Sample test cases :
// Input 1 :
// 8659
// Output 1 :
// 28
// Input 2 :
// 52528
// Output 2 :
// 22
// Whitelist


// You are using GCC
#include<iostream>
using namespace std;
int sumOfDigits(int num);
int main(){
    int n;
    cin>>n;
    
    int q=sumOfDigits(n);
    cout<<q;
}
int sumOfDigits(int num){
    int r;
    if(num==0){
        return 0;
    }
    else{
    // while(num>0){
        
        r=num%10;
    return r+sumOfDigits(num/10);
    // }
}
}
