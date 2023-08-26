// Problem Statement



// A retail store wants to calculate the total cost of an item based on its number and cost. The store has an Item class that encapsulates the item's details and provides a method to calculate the total cost based on the quantity.



// Write a program to calculate the total cost of an item based on its item number, cost, and quantity purchased.



// Define a member function outside the class definition and make it inline by just using the qualifier inline in the header line of the function definition.



// Note: This is a sample question asked in a Capgemini interview.

// Input format :
// The first line of input consists of an integer representing the item number.

// The second line of input consists of a floating-point number representing the cost of the item.

// The last line consists of an integer representing the quantity of the item purchased.

// Output format :
// A single-line output displaying the total cost of the item, formatted to two decimal places

// Sample test cases :
// Input 1 :
// 123
// 4.99
// 3
// Output 1 :
// Total cost: 14.97
// Input 2 :
// 456
// 2.49
// 10
// Output 2 :
// Total cost: 24.90


// You are using GCC
#include<iostream>
#include<iomanip>
using namespace std;
class item{
    public:
    int i;
    float c;
    int q;
};
    inline void Item(){
        // cout "Total cost: ";
        // return c*q;
        return ;
    }
    inline float Item(float a,int b){
        return a*b;
        
    }
 
int main() {
item N;
cin>>N.i;
cin>>N.c;
cin>>N.q;
Item();
cout<<"Total cost: "<<fixed<<setprecision(2)<<Item(N.c,N.q);

}




// Problem Statement



// An event management company wants to keep track of the participants attending their events. They need a program that allows them to input participant details and calculate the total number of participants.



// You are tasked with implementing a program that uses the Event class to manage participant information. The class should have a static member variable totalParticipants to store the total number of participants and a member function setParticipant to set the participant's ID (unique) and name. Additionally, it should have a static member function getTotalParticipants to retrieve the total number of participants.



// Note: This is a sample question asked in a Deloitte interview.

// Input format :
// The first line of the input consists of a single integer, N, representing the number of participants attending the event.

// This is followed by N lines, each containing two values separated by a newline character.

// The first value is the participant's ID, an integer.

// The second value is the participant's name, a string of characters.

// Output format :
// The program should output a single line containing the message "Total Participants:" followed by the total number of participants.



// Refer to the sample output for formatting specifications.

// Code constraints :
// The maximum number of participants is N < 1000.

// Participant IDs are positive integers.

// Participant names can contain alphabets, spaces, and special characters.

// Participant IDs will be unique.

// Sample test cases :
// Input 1 :
// 3
// 1
// John Doe
// 2
// Jane Smith
// 3
// Alex Johnson
// Output 1 :
// Total Participants: 3
// Input 2 :
// 5
// 101
// Alice
// 102
// Bob
// 103
// Charlie
// 104
// David
// 105
// Eve
// Output 2 :
// Total Participants: 5


// You are using GCC
#include<iostream>
#include<string>
using namespace std;
class Event{
    public:
    // int n;
    int ID;
    string name;
    static int totalParticipants;
    void setParticipant(int ID,const std::string& name){
        return ;
    }
    static int getTotalPartipants(){
        cout <<"Total Participants: "<<totalParticipants;
    }
};
int Event :: totalParticipants=0;
int main(){
    Event out;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>out.ID;
        cin>>out.name;
        out.totalParticipants++;
    }
    
    out.getTotalPartipants();
}




// Problem Statement



// A text-processing application needs a module to manipulate strings. The module should provide functionalities to set a string, count the number of characters, find the length of the string, convert the string to uppercase, convert the string to lowercase, and retrieve the string.



// You are tasked with implementing a StringManipulator class that performs various operations on a given string. The class provides methods to count the number of characters in the string, find the length of the string, convert the string to uppercase, and convert the string to lowercase.



// Ensure that the class correctly manipulates the string and provides the expected results for each operation.



// Note: Use the Non-inline member function.



// Note: This is a sample question asked in a mPhasis interview.

// Input format :
// The input consists of a string.

// Output format :
// The first line of the output displays the number of characters in the string.

// The second line of the output displays the length of the string.

// The third line of the output displays the uppercase version of the string.

// The last line of the output displays the lowercase version of the string.



// Refer to the sample output for formatting specifications.

// Code constraints :
// The input string can contain alphanumeric characters, symbols, spaces, and punctuation marks.

// The maximum length of the input string is 1000 characters.

// Sample test cases :
// Input 1 :
// Hello World
// Output 1 :
// Number of characters: 11
// Length of the string: 11
// Uppercase string: HELLO WORLD
// Lowercase string: hello world
// Input 2 :
// abcdefg
// Output 2 :
// Number of characters: 7
// Length of the string: 7
// Uppercase string: ABCDEFG
// Lowercase string: abcdefg


// You are using GCC
#include<iostream>
#include<cctype>
#include<string>
using namespace std;
class StringManipulator{
    
    public:
    string a;
    void setString(const string& s);
    // a=s;
    int countCharacters();
    //     cout<<"Number of characters:"<<a.length();
    // }
    int findLength();
    //     cout<<"Length of the string: "<<a.length();
        
    // }
    void convertToUppercase();
    //     for(char& p : a){
    //         cout<<"Uppercase string:"<<toupper(p); 
    //     }
    // }
    void convertToLowercase();
    //     for(char q: a){
    //         cout<<"Lowercase string:"<<tolower(q);
    //     }
    // }

};
void StringManipulator::setString(const string& s){
    a=s;
}
int StringManipulator::countCharacters(){
    cout<<"Number of characters:"<<a.length()<<endl;
}
int StringManipulator::findLength(){
    cout<<"Length of the string: "<<a.length()<<endl;
    
}
void StringManipulator::convertToUppercase(){
    string p;
    for(char &p:a){
        p=toupper(p);
    }
    // cout<<"ggfgghg";
}
void StringManipulator::convertToLowercase(){
    string g;
    for(char &g:a){
        g=tolower(g);
    }
    // cout<<g;
}


int main(){
    StringManipulator q;
    string r;
    getline(cin,r);
    q.setString(r);
    q.countCharacters();
    q.findLength();
    q.convertToUppercase();
    cout<<"Uppercase string:"<<q.a<<endl;
    q.convertToLowercase();
    cout<<"Lowercase string:"<<q.a;
}



// Problem Statement



// Imagine you are developing a software application that tracks and manages the configuration settings for multiple user profiles. As part of this application, you need to create a class named "Demo" to handle the retrieval and printing of specific configuration values. The "Demo" class should have the following specifications:



// It includes two private static integer variables, X and Y, which represent the configuration values.



// The class provides a static member function called "get()" that allows other parts of the application to retrieve the values of X and Y.
// The class also provides a static member function called "fun()" that prints the values of X and Y to the console.
// The default values for X and Y are set to 10 and 20, respectively.


// Your task is to implement the "Demo" class based on the given specifications. In the main method of your application, create an object of the "Demo" class and call the "get()" and "fun()" methods to retrieve and print the configuration values, respectively.



// Note: This is a sample question asked in a Capgemini interview.

// Input format :
// The first line of input consists of the value of X.

// The second line of input consists of the value of Y.

// Output format :
// The first two lines of output print the default values of X and Y.

// The last two lines of output print the given input values of X and Y



// Refer to the sample outputs for the formatting specifications.

// Code constraints :
// The initial default values of X and Y are set to 10 and 20, respectively.

// 1 <= X, Y <= 105

// Sample test cases :
// Input 1 :
// 250
// 350
// Output 1 :
// Value of X: 10
// Value of Y: 20
// Value of X: 250
// Value of Y: 350
// Input 2 :
// 240
// 840
// Output 2 :
// Value of X: 10
// Value of Y: 20
// Value of X: 240
// Value of Y: 840


// You are using GCC
#include<iostream>
using namespace std;
class Demo{
    public:
    static int x,y;
     static void get(){
         cout<<"Value of X:"<<"10"<<endl;
         cout<<"Value of Y:"<<"20"<<endl;
     }
     static void fun(){
         cout<<"Value of X:"<<x<<endl;
         cout<<"Value of Y:"<<y;
     }
};
int Demo::x=0;
int Demo :: y=0;
int main(){
    Demo a;
    cin>>a.x;
    cin>>a.y;
    a.get();
    a.fun();
}




// Problem statement



// A university wants to store and analyze the marks of its students. They need a program that allows them to input and retrieve the marks of multiple students. They also want to keep track of the total number of students whose marks have been recorded.



// Write a program to create a class named "Student" with the following specifications:



// a private data member named "count" that is static and initialized to 0.
// a public static member function named "getCount" that returns the value of "count".
// a public member function named "setMarks" that sets the marks of a student for a subject
// a public member function named "getMarks" that returns the marks of a student for a subject.
// a private data member named "marks" that is an array of int with size 5.


// Note: This is a sample question asked in an Amcat interview.

// Input format :
// The first line of the input consists of an integer representing the number of students (n).

// The next n lines have 5 integers denoting their marks in 5 subjects, separated by spaces.

// Output format :
// The output prints the total number of students, followed by the next line where their marks will be printed.



// Refer to the sample output for formatting specifications.

// Sample test cases :
// Input 1 :
// 3
// 98 97 91 92 98
// 98 65 85 37 68
// 95 65 87 85 89
// Output 1 :
// Total number of students: 3
// Marks of student 1: 98 97 91 92 98 
// Marks of student 2: 98 65 85 37 68 
// Marks of student 3: 95 65 87 85 89 


// You are using GCC
#include<iostream>
using namespace std;
class Student {
    public:
    static int count ;
};
int Student ::count =0;
int main(){
    Student a;
    cin>>a.count;
    int arr[a.count][5];
    for(int j=0;j<a.count;j++){
    for (int i=0;i<5;i++){
        cin>>arr[j][i];
    }
    }
    cout<<"Total number of students: "<<a.count<<endl;
    for(int j=0;j<a.count;j++){
        
            cout<<"Marks of student"<<j+1<<":";
            for(int i=0;i<5;i++){
                cout<<arr[j][i]<<" ";
            }
        cout<<endl;
    }
    
    
}