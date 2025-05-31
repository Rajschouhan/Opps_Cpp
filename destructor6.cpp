#include <iostream>
#include <bits/stdc++.h>
using namespace std ;


class Student{

    public:
    string name;
    double* cgpaPtr ;

    Student(string name,double cgpa){
        this->name = name;
     cgpaPtr = new double ;
        *cgpaPtr = cgpa;
   }

   //DESTRUCTOR
    ~Student(){
cout<<"I am destructor function";
delete cgpaPtr;
    }

    void getInfo(){
        cout<<"name :   " <<name << endl;
        cout<<"cgpa :   " << *cgpaPtr <<endl;
    }

};
int main(){
    Student s1("raju",8.8);
    s1.getInfo();
    return 0;
}