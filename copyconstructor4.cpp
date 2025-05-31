#include <iostream>
#include <bits/stdc++.h>
using namespace std ;
 
class Teacher{

public:
string name;
string subject;
string depart ;
int roll ;

// Teacher(){          
//     depart = "Computer SCIENCE" ;
// }


//KHUD KA CUSTOM COPY CONSTRUCTER 
Teacher(Teacher &orgObj){                       //pass  by reference , original object
    cout<<" i m Custom copy Constructor"<<endl;    // ye default copy constr.  jo call huwa wo hai
    this->name = orgObj.name;
    this->subject = orgObj.subject;
    this->depart = orgObj.depart;
    this->roll = orgObj.roll;
}

Teacher(string name,string subject , string depart , int roll){
    this->name = name ;
    this->subject = subject ;
    this-> depart= depart;
    this-> roll = roll ;
}


void getInfo(){
    cout<<name<<endl;
    cout<<subject<<endl;
}

};

int main(){

    Teacher t1("Raj","c++", "computer Science",27);
   
    
    Teacher t2(t1);     //invokes copy constructor
    t2.getInfo();   //DEFAULT COPY CONSTRUCTOR CALL HUWA , VALUE of T1 to T2.


   


    return 0;
}


