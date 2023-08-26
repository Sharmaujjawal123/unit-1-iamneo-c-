// Suma is developing a program to perform arithmetic operations on money values. The program uses a class called Money to represent a monetary amount in terms of rupees and paisa.



// Your task is to create the class Money with two attributes:

// int rupee
// int paisa
// Include getters, setters, and constructors.

// In the main method, initialize the values for the data members, get two amounts, and print their sum.



// Note: This is a sample question asked in an Infosys interview.

// Input format :
// The input consists of two lines, each containing two integers separated by a space.

// The first integer on each line represents the rupee value.

// The second integer on each line represents the paisa value.

// Output format :
// The output displays "Rupees.Paisa" where Rupees represent the total rupee value and Paisa represents the total paisa value.

// Sample test cases :
// Input 1 :
// 50 85
// 42 65
// Output 1 :
// 93.50
// Whitelist

#include<iostream>
#include<iomanip>
using namespace std;
class Money{
    public:
    int a[2];
    int b[2];
    float c;
};




int main(){
Money in;
    for (int i=0;i<2;i++){
        cin>>in.a[i];
        // cin>>in.b[i];
    }
    for(int i=0;i<2;i++){
        cin>>in.b[i];
    }
    float d;
    d=((in.a[1]+in.b[1])/100.00);
    in.c=in.a[0]+in.b[0]+d;
    cout<<fixed<<setprecision(2)<<in.c;
    
}



// Guna wants to write a program that counts the number of occurrences of a specific character in a given string.



// He decided to create a class called Occurrence to handle this task. In the class, a string and character are its private attributes. Initialize the variables using a member function. Define a member function countOccurrence() to count the number of times the character occurs in the string.



// Note: This is a sample question asked in a Capgemini interview.

// Input format :
// The first line of input consists of a string, str.

// The second line of input consists of a single character, ch, which represents the character to be counted for its occurrence in the string.

// Output format :
// The output displays a single integer representing the count of occurrences of the character ch in the given input string str.

// Code constraints :
// Use the small-case alphabets (a–z), numbers, and special characters.

// Sample test cases :
// Input 1 :
// utter
// t
// Output 1 :
// 2
// Input 2 :
// 453vgft
// 5
// Output 2 :
// 1
// Input 3 :
// ftf@fdfd@
// @
// Output 3 :
// 2


// You are using GCC
#include<iostream>
using namespace std;
class Occurrence{
public:
string a;
char b;

int countOccurrence(){
    int c=0;
    for(char i :a){
        if (i==b){
            c=c+1;
        }
    }
    return c;
}
};
int main(){
    Occurrence in;
    cin>>in.a;
    cin>>in.b;
    cout<<in.countOccurrence();
}




// Mithra is working on a hospital management system, and you need to implement a feature that allows doctors to input their information and generate a doctor passport. The doctor passport should include the doctor's name, address, and ward number.



// Write a program that takes input from the user for a doctor's name, address, and ward number. Create a class called Doctor object with the provided information and assign it to a doctor Passport object. Finally, display the doctor's name, address, and ward number from the doctor passport object.



// Note: This is a sample question asked in an Accenture interview.

// Input format :
// The first line of input consists of a string representing the name of a patient.

// The second line of input consists of a string representing the address of a patient.

// The third line of input consists of an integer representing the ward number.

// Output format :
// The output displays the patient's details.



// Refer to the sample output for format specifications.

// Sample test cases :
// Input 1 :
// Raju
// Chennai
// 34
// Output 1 :
// Name: Raju
// Address: Chennai
// Ward Number: 34
// Input 2 :
// Manju
// Coimbatore
// 37
// Output 2 :
// Name: Manju
// Address: Coimbatore
// Ward Number: 37


// You are using GCC
#include<iostream>
using namespace std;
class Doctor{
    public:
    string name;
    string add;
    int w;
};
int main (){
    Doctor inf;
    cin>>inf.name;
    cin>>inf.add;
    cin>>inf.w;
    cout<<"Name: "<<inf.name<<endl;
    cout<<"Address:"<<inf.add<<endl;
    cout<<"Ward Number: "<<inf.w;
    
}

