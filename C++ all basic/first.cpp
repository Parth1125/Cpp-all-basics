#include <iostream>
#include <string>
using namespace std;

// f(x) = x^2 + 2
int add(int a, int b)
{
    int c;
    c = a + b;
    return c;
}

class Employee
{
public:
    string name;
    int salary;  
// CONSTRUCTOR
    Employee(string n, int s, int sp)           
    {
        this->name = n;
        this->salary = s;
        this->secretPassword = sp;
    }
    // this-> means access the members
    void printDetails()
    {
        cout << "The name of our first employee is " << this->name << " and his salary is " << this->salary << " Dollars" << endl;
    }
// Private      here method is created of getseceretPassword
    void getSecretPassword()
    {
        cout<<"The secret password of employee is "<<this->secretPassword;
    }

private:
    int secretPassword;
};


class Programmer : public Employee
{
    public:
        int errors;
        
};

int main()
{
    // cout<<"Hello World Harry"<<endl;
    // cout<<"Next line";
    // int a, b, c;
    // short s23423a=9;
    // cout<<s23423a;

// camelCase Notation
    // int marksInMaths=83;
    // cout<<"The marks of the student in maths is "<<marksInMaths;

// VARIABLES

    // string harry = "harry"
    // short a;
    // int b= 89;
    // long c;
    // long long d;
    // float const score = 45.32;
    // double score2 = 45.322;
    // long double score3 = 45.332;
    // score = 34.2;
    // b = 34;
    // cout<<"The score is "<<score;]

// USER INPUT

    // int a, b;
    // cout<<"Enter first number"<<endl;
    // cin>>a;

    // cout<<"Enter second number"<<endl;
    // cin>>b;

    // cout<<"a + b is "<<a + b<<endl;
    // cout<<"a - b is "<<a - b<<endl;
    // cout<<"a * b is "<<a * b<<endl;
    // cout<<"a / b is "<<(float) a / b<<endl;

    // int age;
    // cout << "Enter your age" << endl;
    // cin >> age;

// SWITCH STATEMENT

    // switch (age)
    // {
    // case 12:
    //     cout << "You are 12 years old"<<endl;
    //     break;
    // case 18:
    //     cout << "You are 18 years old"<<endl;
    //     break;

    // default:
    //     cout << "You are neither 12 nor 18 years old";

    // }

 // IF ELSE STATEMENT

    // if(age>150 || age<1)
    // {
    //     cout<<"Invalid age";
    // }

    // else if (age>=18){
    //     cout<<"You can vote";
    // }

    // else
    // {
    //    cout<<"You cannot vote";
    // }

 // LOOPS
 // WHILE LOOP

    // int index = 0;
    // while(index<34)
    // {
    //     cout<<"We are at index number "<<index<<endl;
    //     index = index + 1;
    // }

// DO WHILE LOOP

    // do
    // {
    //     cout << "We are at index number " << index << endl;
    //     index = index + 1;
    // } while (index < 33);

// FOR LOOP

    // for (int i = 1; i <= 34; i++)
    // {
    //     cout<<"The value of i is "<<i<<endl;
    // }

    // int a, b;
    // cout<<"Enter first number"<<endl;
    // cin>>a;

    // cout<<"Enter second number"<<endl;
    // cin>>b;
    // cout<<"The function returned "<<add(a,b);

// ARRAYS 1D

    //     int arr[] = {1, 3, 6};
    // // Array Index   0  1  2
    //     // cout<<arr[1];
    //     int marks[6];

    //     for (int i = 0; i < 6; i++)
    //     {
    //         cout<<"Enter the marks of "<<i<<"th student"<<endl;
    //         cin>>marks[i];
    //     }

    //     for (int i = 0; i < 6; i++)
    //     {
    //         cout<<"Marks of "<<i<<"th student is "<<marks[i]<<endl;
    //     }

// ARRAYS 2D

    // int arr2d[2][3] = {  {1,2,3},
    //                      {4,5,6}};

    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout<<"The value at "<<i<<","<<j<<" is "<<arr2d[i][j]<<endl;
    //     }

    // }

// TYPECASTING

    // int a =343;
    // float b = 87.94;
    // cout<<(float) a/34<<endl;

    // cout<<(int) b;

    // string name = "harry";
    // cout<<"The name is "<<name<<endl;
    // cout<<"The length of name is "<<name.length()<<endl;
    // cout<<"The name is "<<name.substr(1,155)<<endl;
    // cout<<"The name is "<<name.substr(2,3);

    // float a = 34.34;
    // float* ptra;
    // ptra = &a;
    // cout<<"The value of a is "<<a<<endl;
    // cout<<"The value of a is "<<*ptra<<endl;
    // cout<<"The address of a is "<<&a<<endl;
    // cout<<"The address of a is "<<ptra<<endl;

    // Employee har("Harry constructor", 344, 324432);
    // har.name = "harry";
    // har.salary = 100;
    // har.printDetails();

// THAT PRIVATE PASSWOrD CAN NOW be ACCESS AS METHOD IS CREATED
    // har.getSecretPassword();
    // cout<<har.secretPassword;


    // cout<<"The name of our first employee is "<< har.name << " and his salary is "<<har.salary<<" Dollars"<<endl;
    
// POINTERS CONCEPT
    // int a = 34;
    //  int* ptra;
    // ptra = &a;
    // cout<<" The value of a is"<<*ptra;
    return 0;
}

