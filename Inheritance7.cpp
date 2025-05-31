#include <iostream>
#include <bits/stdc++.h>
using namespace std ;

class Person {
    public:
    string name;
    int age;

//non-para constructor auto called
    Person(){
 cout<<"Parent constructor babe"<<endl;
    }
};


// 1st parent constructor called then child.
class Student : public Person {
    public:
    int rollno ;
    
    Student(){
        cout<<"Child constructor babe"<<endl;
    }

    //inherit the properties of base class Person in Student.
    void getInfo(){
        cout<<"name is : "<< name <<endl;
        cout<<"age  : "<< age <<endl;
        cout<<"roll no is : "<< rollno ;
    }
    };

int main(){
    Student S1;

    S1.name = "rajkumar";
    S1.age = 28;
    S1.rollno = 765 ;

    S1.getInfo();
    return 0;
}