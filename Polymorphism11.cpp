#include <iostream>
#include <bits/stdc++.h>
using namespace std ;

//POLYMORPHISM : Ability of an object to  behave in diffrent foems depending on the context given within a class.
// COMPILE-TIME POLYMORPHISM : O|P IS PRINTED WHILE COMPILING.

//1}  CONSTRUCTOR OVERLOADING

class Google{
    public:
    int users;
    string data;

Google(){
    cout<<"hello ji\n ";
}

Google(int users, string data){
    this->users = users;
    this->data = data  ;
    cout<<"parametrized";
}

};



// int main(){
// Google g1;
// return 0 ;

// }


int main(){
Google g1(927,"NR");
return 0 ;

}

//  WHEN CONSTRUCTOR IS CALLED ON THE BASIS OF CONTEXT , WHAT WE GIVE THIS IS CALLED CONSTRUCTOR OVERLOADING ;