#include <iostream>
#include <bits/stdc++.h>
using namespace std ;

class Person {
    public:
    string name;
    int age;

//parametrized constr calld by user
//parent constructor
    Person(string name,int age){
        this->name=name;
        this->age = age;
    }
};

class Student : public Person {
    public:
    int rollno ;
    

    //child constructor
    Student(string name, int age,int rollno ) : Person(name,age) {      //calling parent constructor before child class constructor
        this->rollno= rollno ;  
    }


    void getInfo(){
        cout<<"name is : "<< name <<endl;
        cout<<"age  : "<< age <<endl;
        cout<<"roll no is : "<< rollno ;
    }
    };

int main(){
    Student S1("rahul",22,234);

   

    S1.getInfo();
    return 0;
}