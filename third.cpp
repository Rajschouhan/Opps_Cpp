#include <iostream>
#include <bits/stdc++.h>
using namespace std ;
 
class Teacher{

public:
string name;
string subject;
string depart ;
int roll ;

// paramettrized constructer are called by user , not default bCoz user made,
//while non-parametrized constructor are called automatically.


Teacher(){          // CONSTRUCTOR FUNCTION  BY PROAGRMEED BY USER NOT AUTO , called only at 1 while obj creation.
// cout<<"i m constructor fn"<<endl ;
// INITIALIZATION : same value of department for all teachers.
    depart = "Computer SCIENCE" ;
}
Teacher(string name,string subject , string depart , int roll){
    this->name = name ;
    this->subject = subject ;
    this-> depart= depart;
    this-> roll = roll ;
}

// void  changeName(string newName){
//     name = newName;
// }
void getInfo(){
    cout<<name<<endl;
    cout<<subject<<endl;
}

};

int main(){

    Teacher t1("Raj","c++", "computer Science",27);
    t1.getInfo();
    
    Teacher t2(t1);     //invokes copy constructor
    t2.getInfo();   //DEFAULT COPY CONSTRUCTOR CALL HUWA , VALUE of T1 to T2.


    // t1.name = "Raj";
    // t1.subject = "CSE";
    // t1.roll = 27 ;

// cout<<t1.name<<endl ;
// cout<<t1.depart ;
    return 0;
}


