#include <iostream>
#include <bits/stdc++.h>
using namespace std ;

// Function OVERRIDING:  in this both the paremnt and child class have same function , but with diffrent implementations , through object calling.

class Parent{
public:
  void  getInfo(){
     cout<<"PARENT CLASS\n";
}
};

class Child : public Parent{
   public:
    void getInfo(){
      cout<<"child class ";
    }

};

int main(){
// Parent p1;   // Parent class ka fn Child class k fn ko override kardega , say overTake.
// p1.getInfo();

Child c1;  // Child class ka fn Parent class k fn ko override kardega , say overTake.
c1.getInfo();

return 0;

}