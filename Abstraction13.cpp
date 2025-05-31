#include <iostream>
#include <bits/stdc++.h>
using namespace std ;


// Automatically Abstract class
class  Shape{
 
    // IT MEANS SHAPE BASE CLASS , ALL THE DERIVED CLASS SHOULD HAVE THE FUNCTION draw()  IMPLEMENTED . Its a BluePrint.
   virtual void draw() = 0;     // PURRE VIRTUAL FUNCTION

};




int main(){
Shape s1;
return 0;
}




// diffrenc e btrwn virtual function in fn overriding & here in Abstraction.

//*** In virtual fn , the object is made of virtual fn,  but in  Abstraction the object cannot be made of the virtual function. ***
