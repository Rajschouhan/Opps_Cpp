#include <iostream>
#include <bits/stdc++.h>
using namespace std ;

// 1:  SINGEL INHERITANCE

//2: MULTI-LEVEL INHERITANCE -> Class -to- class.

class Person {
    public:
    string name;
    int age;
};

class Student : public Person {
    public:
    int rollno ;
    

 };


class GradStudent : public Student{
   public:
    string reserch;
};

int main(){
    
    GradStudent s1;
    s1.name = "tony kalu";
    s1.reserch = "comediology";
    s1.rollno = 786;
    cout<<s1.name<<endl;
    cout<<s1.reserch<<endl;
    cout<<s1.rollno;


    return 0;
}