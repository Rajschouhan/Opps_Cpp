#include <iostream>
#include <bits/stdc++.h>
using namespace std ;

//STATIC KEYWORD 
// STATIC  VARIABLE : IN   A CLASS

class A {
        public:
        int x;

        void incX(){
            x = x+1 ;

        }
};

// int main(){
//   A obj ;
//   obj.x = 0;
//   cout<<obj.x<<endl;
//   obj.incX();
//   cout<<obj.x;
//     return 0;

// };

int main(){
 A obj1 ;           // Iska X alag se banega &
 A obj2 ;           // Iska bhi X alag se Banega . but agar Static lag jata then both the Objects ka X  1 hi banata.
 obj1.x = 100;
 obj2.x = 200;
 cout<<obj1.x<<endl;
obj2.incX();
 cout<<obj2.x;

};