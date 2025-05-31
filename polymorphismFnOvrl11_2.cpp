#include <iostream>
#include <bits/stdc++.h>
using namespace std ;

//COMPILE TIME 
// 2}   FUNCTION OVERLOADING 
//                        :- Fn Overloading is the implementation of compile time polymorphism ,in Fn overloading we have 2 or More functions,
//                           with Same Name but diffrent no. of Parameters in a class.                              

class Print{

public:
void show(string name){
    cout<<"name : "<< name <<endl;
}

void show(int age){
       cout<<"age is : "<<age ;
 }


} ;
 
// int main(){
//     Print p1;
//     p1.show(123);
//     return 0;
// }

int main(){
    Print p1;
    p1.show("ilu");
    return 0;
}

