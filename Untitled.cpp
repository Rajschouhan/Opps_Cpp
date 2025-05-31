#include <iostream>
#include <bits/stdc++.h>
using namespace std ;


//FN OVERLOADING PRACTISE

class Name{
public:
 
void printName(string username){
    cout<<"username :"<<username<<endl;
}
void printName(int salary){
    cout<<"Salary is: "<<salary;
}

};

int main(){
    Name p1;
    p1.printName("Tata consultancy and services");
    return 0;
}