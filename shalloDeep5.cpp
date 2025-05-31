#include <iostream>
#include <bits/stdc++.h>
using namespace std ;
 

class Student{
public:
string name;
double* cgpaPtr ;       //CGPA KA POINTER , JO AB HEAP MEMORY ME STORE HO RAHE HAIN.
 //NOT STORING CGPA , STORING CGPA POINTER THAT STORES VALUE OF CGPA.



        Student(string name,double cgpa){
        this->name = name ;
//                                         pointer ko nayi memory me point karaya.
        cgpaPtr = new double ;                           // ALLOCATING NEW MEMORY TO POINTER. IN THIS memory double type ka data store ho skta hain.
//                                                      & this memory is in heap , which is dynmically allocated.
//                                         uske baad uss memory me jaakar cgpa ki value ko store kardiya.
         *cgpaPtr = cgpa ;                              //CGPA POINTER JNGHA PAR POINT KR RHA HAI JIS ADDRESS PR USKO DEREFRENCE  KIYA OR CGPA KO STORE KAR DIYA.
} 


//SHALLOW COPY
// Student(Student &obj){          // Copy constructor made KHUD KA , student ko copy kiya.
//     this->name = obj.name;
//     this->cgpaPtr = obj.cgpaPtr ;
// }

// //DEEP COPY
Student(Student &obj){       
    this->name = obj.name;
    cgpaPtr = new double ;
    *cgpaPtr = *obj.cgpaPtr ;
}

void getInfo(){
    cout<<"name"<<name<<endl;
    cout<<*cgpaPtr<<endl;
}

};


//Here , ynhha pr shallow copy me aati h prblm s2 ka chng kiya but s1 ka bhi hogya
//BcoZ : 
//      SHALLOW COPY ME VALUES COPY HOTI HAIN SAARI , JISME NAME K SATH SATH POINTER KA ADDRESS BHI COPY HOJATA HAIN.
//       THATS WHY , ISISLIYE YE SAME PRINT KR RHA HAI COPY KIYA HUWA BHALE S2 ki VALUE HUMNE CHNGE KRDI WO ADDRESS TO SAME POINT KR RHA.



int main(){

Student s1("rahul ", 9.8);
Student s2(s1);

s1.getInfo();
*(s2.cgpaPtr) = 9.3 ;   //chng value of cgpa in s2

s1.getInfo();
s2.name = "nitu";
s2.getInfo();
return 0;
};