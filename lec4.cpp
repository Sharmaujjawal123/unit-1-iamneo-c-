// The task for the student is to create a program that prompts the user to enter a number representing a month and displays the corresponding month as output. To accomplish this, the student should implement a class named Year that includes an enumeration called Month. The Month enumeration should consist of twelve constants representing the months of the year. The student needs to ensure that the program utilizes the Year class and the Month enumeration to correctly map the input number to the corresponding month name for display.



// Note: This is a sample question asked in an Infosys interview.

// Input format :
// The input consists of an integer representing the desired month number, n.

// Output format :
// If the input is a valid month (between 1 and 12), the output displays the corresponding month as a string.

// If the input is invalid, display "Invalid month input".



// Refer to the sample output for the formatting specifications.

// Code constraints :
// 1 <= n <= 12

// Sample test cases :
// Input 1 :
// 6
// Output 1 :
// Month: JUNE
// Input 2 :
// 13
// Output 2 :
// Invalid month input


// You are using GCC
#include<iostream>
using namespace std;
class Year{
public:
    enum Month { JANUARY=1,FEBRUARY,MARCH,APRIL,MAY,JUNE,JULY,AUGUST,SEPTEMBER,OCTOBER,NOVEMBER,DECEMBER
};
};


int main(){
Year a;
int q;
cin>>q;
string arr[]={" ","JAUNUARY","FEBRAURY","MARCH","APRIL","MAY","JUNE","JULY","AUGUST","SEPTEMBER","OCTOBER","NOVEMBER","DECEMBER"};
if(q<=12){
// if(s==q){
    cout<<"Month: "<<arr[q];
}
else{
    cout<<"Invalid month input";
}
}


﻿

// Farhana is fond of coding and she is learning structure and union concepts. While practicing questions she came across a question that uses the union concept. Since she is only familiar with structures, she is unable to solve this. Help her solve the question. The question is given below:



// Write a C++ program to store and display information about an employee using a union. The program should prompt the user to enter the employee ID, name, date of birth (DOB), date of joining (DOJ), and salary. The program should then display the entered information.



// Union name: Employee



// Note: This is a sample question asked in a TCS interview.

// Input format :
// The first line contains an integer representing the employee ID.

// The second line contains a string representing the employee's name.

// The third line contains a string representing the date of birth in the format "dd/mm/yyyy".

// The fourth line contains a string representing the date of joining in the format "dd/mm/yyyy".

// The fifth line contains a floating-point number representing the salary.

// Output format :
// The first line displays the employee ID of the employee.

// The second line displays the employee's name.

// The third line displays the date of birth of the employee.

// The fourth line displays the employee's date of joining.

// The fifth line displays the salary of the employee rounding to one decimal place.



// Refer to the sample output for the formatting specifications.

// Code constraints :
// The maximum length of the employee's name is 20 characters.

// The maximum length of the date of birth and date of joining is 10 characters.

// Sample test cases :
// Input 1 :
// 200
// Karthick
// 22/03/1988
// 09/10/2018
// 57899.75
// Output 1 :
// ID : 200
// Name : Karthick
// DOB : 22/03/1988
// DOJ : 09/10/2018
// Salary : 57899.8


#include<iostream>
using namespace std;

union Employee{
    int empID;
    char empname[20];
    char dob[10];
    char doj[10];
    float salary;
};

int main(){
    union Employee emp;
    cin>>emp.empID;
    cout<<"ID : "<<emp.empID<<"\n",
    cin>>emp.empname;
    cout<<"Name : "<<emp.empname<<"\n";
    cin>>emp.dob;
    cout<<"DOB : "<<emp.dob<<"\n";
    cin>>emp.doj;
    cout<<"DOJ : "<<emp.doj<<endl;
    cin>>emp.salary;
    cout<<"Salary : "<<emp.salary;
}



// Vishnu is developing a geometry application that requires calculations related to lines. The program should be utilized to calculate the distance between two points and find the midpoint of a line segment.



// Create a structure named Line to store the coordinates of a point, say x and y. Find the distance between two Points.



// The distance between two points is given by the Euclidean formula.





// Also find the midpoint of the line formed by two points (x1, y1) and (x2, y2):







// Note: This is a sample question asked in an Amcat interview.

// Input format :
// The first line of input is the value of X1 and Y1, separated by a space.

// The next line is the value of X2 and Y2, separated by a space.

// Output format :
// The first line of output prints the distance between two points.

// The next line prints the midpoint.



// Refer to the sample output for the exact format.

// Code constraints :
// X1, X2 >=0

// Y1, Y2>=0

// Sample test cases :
// Input 1 :
// 1 1
// 2 2
// Output 1 :
// Distance: 1.41
// Midpoint: 1.50 1.50
// Input 2 :
// 3 2
// 4 1
// Output 2 :
// Distance: 1.41
// Midpoint: 3.50 1.50


// You are using GCC
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
struct Line{
    int x[2];
    int y[2];
};
int main(){
struct Line s1;
for (int i=0;i<2;i++){
    cin>>s1.x[i];
}
for (int i=0;i<2;i++){
    cin>>s1.y[i];
}
double c=sqrt(pow(s1.x[0]-s1.y[0],2)+pow(s1.x[1]-s1.y[1],2));
cout<<"Distance: "<<fixed<<setprecision(2)<<c<<endl;
cout<<"Midpoint: "<<fixed<<setprecision(2)<<(s1.x[0]+s1.y[0])/2.0<<" ";
cout<<fixed<<setprecision(2)<<(s1.x[1]+s1.y[1])/2.0;
}



// A hospital wants to store the information of its patients. Help them by providing a code. Your code should create a structure to store the information of patients coming to the hospital. The information stored will be the patient id, the patient’s gender (1 for Male and 2 for Female), and the age of the patient. There may be n number of patients visiting the hospital, where n will not exceed 50 at any time.



// Write a program to accept the information for n patients. Write a function to find the total number of male and female patients visited. Also, write a function that prints the patients whose age is greater than 40.



// Function specifications:﻿

// void print_gender - To calculate the count of male and female patients.
// void print_age - To calculate the count of patients whose age is above 40.


// Note: This is a sample question asked in a TCS interview.

// Input format :
// The first line consists of an integer n, representing the number of patients.

// The next n lines contain the patient details, each line consisting of three space-separated integers: id, gender, and age.

// Output format :
// The first line displays the count of male and female patients separated by a space.

// The second line displays the count of patients above 40 years.
// Sample test cases :
// Input 1 :
// 3 
// 110 2 25 
// 210 2 55 
// 220 1 62 
// Output 1 :
// 1 2
// 2
// Input 2 :
// 4
// 115 2 35 
// 205 2 65 
// 303 1 52 
// 403 2 72 
// Output 2 :
// 1 3
// 3


// You are using GCC
#include<iostream>
using namespace std;
struct patient{
    int a;
    // int arr[a][3];
};
void print_gender(int p,int q){
    cout<<q<<" "<<p<<endl;
}
void print_age(int r){
    cout<<r;
}
int main(){
    struct patient p;
    cin>>p.a;
    int arr[p.a][3];
    for(int i=0;i<p.a;i++){
        for (int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    int c=0,d=0,e=0;
    for (int i=0;i<p.a;i++){
        if(arr[i][1]==2){
            c=c+1;
        }
        else{
            d=d+1;
        }
       if(arr[i][2]>40){
           e=e+1;
       } 
    }
    print_gender(c,d);
    print_age(e);
    
}

