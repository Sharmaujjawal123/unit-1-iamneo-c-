// Problem Statement



// You are building a digital circuit simulation program where you need to manipulate and analyze integer values. The program should allow users to input an integer and perform various operations on it and it should print the binary representation, complement, left shift, and right shift, check if it is negative, and its absolute value. Refer the below explanations for each.



// Binary representation - Binary representation is a way to express a number using only 0s and 1s.

// Complement - Complement refers to flipping the bits of a binary number, changing 0s to 1s and 1s to 0s.

// Left shift - Left shift is an operation that moves the bits of a binary number to the left, effectively multiplying it by a power of 2.

// Right shift - Right shift is an operation that moves the bits of a binary number to the right, effectively dividing it by a power of 2.

// Check if it is negative - Checking if it is negative determines if the number is less than zero.

// Absolute value - Absolute value refers to the magnitude of a number without considering its sign.



// Write a program for the same and print everything in a detailed manner using manipulator functions.



// Note: This question can be asked in Cocubes and AMCAT recruitments.

// Input format :
// The input consists of an integer, N.

// Output format :
// The first line of output prints the binary representation of the given number.

// The second line of output prints the complement of the given number.

// The third line of output prints the left shift value of the given number.

// The fourth line of output prints the right shift value of the given number.

// The fifth line of output prints whether the givennumber is a negative number or not.

// The last line of output prints the absolute value of the given number.



// Refer to the sample outputs for the formatting specifications.

// Code constraints :
// -1000 <= N <= 1000

// Sample test cases :
// Input 1 :
// 10
// Output 1 :
// Binary representation: 00001010
// Complement: -11
// Left shift by 2: 40
// Right shift by 2: 2
// Is negative? false
// Absolute value: 10
// Input 2 :
// -5
// Output 2 :
// Binary representation: 11111011
// Complement: 4
// Left shift by 2: -20
// Right shift by 2: -2
// Is negative? true
// Absolute value: 5


// You are using GCC
#include<iostream>
#include<bitset>
using namespace std;

int main(){
    int n;
    cin>>n;
    bitset<8> decimalBitset(n);
    cout<<"Binary representation: "<<decimalBitset<<endl;
    cout<<"Complement: "<<-(n+1)<<endl;
    cout<<"Left shift by 2: "<<(n<<2)<<endl;
    cout<<"Right shift by 2: "<<(n>>2)<<endl;
    if(n>0){
        cout<<"Is negative? false"<<endl;
        
    }
    else{
        cout<<"Is negative? true"<<endl;
    }
    cout<<"Absolute value: "<<abs(n);
}


Problem Statement



// You are building a chatbot application that interacts with users through text messages. As part of the chatbot's functionality, you need to convert any sentence provided by the user into uppercase.



// Write a program that takes a sentence input from the user, converts it to uppercase using the manipulator function, and displays the modified sentence as the chatbot's response.



// Note: This is a sample question asked in an AMCAT interview.

// Input format :
// The input consists of the sentence that is given by the user.

// Output format :
// The output prints the modified uppercase sentence.

// Sample test cases :
// Input 1 :
// Hello World
// Output 1 :
// HELLO WORLD
// Input 2 :
// Programming is Fun.
// Output 2 :
// PROGRAMMING IS FUN.



// You are using GCC
#include<iostream>
#include<cctype>
using namespace std;
int main(){
    string n;
    // cin>>n;
    getline(cin,n);
    string a;
    for(char a:n){
    a=toupper(a);
    cout<<a;
}
}


// Problem Statement



// ﻿Matt is learning C++ and he got interested in how inline functions work. So he has been practicing questions on that. Help him solve the code for the following question statement: Write an inline function countEvenNumbers() to count the number of even numbers present after squaring the given number.



// Example 1



// Input:

// 12



// Output:

// 2



// Explanation:

// Given number = 12. After squaring (12*12 = 144). The number of even numbers present is 2.



// Example 2



// Input:

// 3



// Output:

// 0



// Explanation:

// Given number = 3. After squaring (3*3 = 9). The number of even numbers present is 0.



// Note: This is a sample question that can be asked in a mPhasis recruitment.

// Input format :
// The input consists of a positive integer N.

// Output format :
// The output prints the count of the number of even numbers that are present in the square of the given number.

// Code constraints :
// 0 <= N <= 1000

// Sample test cases :
// Input 1 :
// 12
// Output 1 :
// 2
// Input 2 :
// 3
// Output 2 :
// 0


// You are using GCC
#include<iostream>
using namespace std;
inline int countEvenNumbers(int a){
    int b=a*a;
    int i=0,r;
    while(b>0){
        r=b%10;
        
        if (r%2==0){
            i=i+1;
        }
        b=b/10;
    }
    return i;
}
int main(){
    int n ;
    cin>>n;
   cout<< countEvenNumbers(n);
}






// You have been assigned a task to create a program that performs arithmetic operations using the Operation class and using inline functions.



// You have declared the following inline functions within the class: get(), sum(), difference(), product(), division(), and modulus(). These functions are used to perform various arithmetic operations. Implement the class and its methods as described above.



// Then, create an object of the Operation class and demonstrate how the methods can be called to perform the necessary arithmetic calculations. Provide the complete code solution for the program, including the class definition, method implementations, and the main method where the object is created and the methods are called.



// Note: This is a sample question asked in a TCS interview.

// Input format :
// The input consists of two integers, separated by space.

// Output format :
// The output prints the result of arithmetic operations.



// Refer to the sample output for the formatting specifications.

// Code constraints :
// All inputs should be integers only.

// Sample test cases :
// Input 1 :
// 50 8
// Output 1 :
// Addition of two numbers: 58
// Difference of two numbers: 42
// Product of two numbers: 400
// Division of two numbers: 6
// Modulus of two numbers: 2
// Input 2 :
// 120 188
// Output 2 :
// Addition of two numbers: 308
// Difference of two numbers: -68
// Product of two numbers: 22560
// Division of two numbers: 0
// Modulus of two numbers: 120

// You are using GCC
#include<iostream>
using namespace std;
class Operation{
    public:
    int a,b;
    void get(){
        cin>>a;
        cin>>b;
    }
   inline void sum(){
        cout<<"Addition of two numbers:"<< a+b<<endl;
    }
  inline  void difference(){
        cout<<"Difference of two numbers:"<<a-b<<endl;
    }
  inline  void product(){
        cout<<"Product of two numbers:"<<a*b<<endl;
    }
 inline   void division(){
        cout<<"Division of two numbers:"<< a/b<<endl;
    }
   inline void modulus(){
        cout<<"Modulus of two numbers:"<< a%b;
    }
};
int main(){
    Operation q;
    q.get();
    q.sum();
    q.difference();
    q.product();
    q.division();
    q.modulus();
}