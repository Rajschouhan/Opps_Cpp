#include <iostream>
#include <bits/stdc++.h>
using namespace std ;

//STATIC KEYWORD 
// STATIC  VARIABLE : IN FUNCTION

void fun(){

//                          This initialization is only at once , while using static Keyword & it exists for lifetime of Programe.

  static int x= 0 ;   //  THIS WILL PRINT 3 TIMES 0 ZERO , WITHOUT USING STATIC KEYWORD ,
  //                       but when using static keyword within a function with VARIABLE X , the magic happens x value
  //                       which was storing 0 in call stack and destroying is now , not deleting ye Memory k andar Rahega or increment hoga
   
    cout<<"X is :"<<x<<endl;
    x++ ;
}

int main(){
    fun();
    fun();
    fun();
    return 0;

};