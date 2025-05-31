#include <iostream>
#include <bits/stdc++.h>
using namespace std ;

// A CLASS IS A USER DEFINED DATA THAT CONTAINS DATA MEMBERS AND MEMBER FUNCTIONS, IT IS A COLLECTION OF OBJECTS.;

// AN OBJECT IS A ENTITY OF AN CLASS , IN  SIMPLE TERMS IT OIS FUNCTIONALITY OF A CLASS.
class Amazon {
//properties,attributes



public:

string productname;
string category;
int price ;

Amazon(){       //CONSTRUCTOR FN , : NON PARAMETRIZED
   // cout<<"Constructor by manual called."<<endl;
    price = 20000 ;     //INITIALISE VALUE OF PRICE IN CONS FN
};




public:
//protected : is used mostly in Inheruitance , for subclases use.
//data members

//Member functions  are used to perform operastions on a data members of a clsass.

//methods , member functions
void addProduct(string newProductname){
    cin>>newProductname;
    productname = newProductname ;
    cout<<productname;
}

};

// ANOTHER CLASS

// class Account{
// private:
// string password;        //data hiding concept by encapsulation.


// public:
// string name;
// string id ;

// };


int  main(){
    //objects
     Amazon p1; //obj p1            ,   Constructor fn called automatically during new obj creation
                                       //  Each time new obj creates constructor fn and call it first.
     Amazon p2;
  //   acess properties of obj

//p1.productname = "Laptop";

p1.category = "Advanced";


cout<<p1.productname<< endl <<p1.price ;


    return 0;
}