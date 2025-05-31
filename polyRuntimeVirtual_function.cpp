#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Dad{
    public:
   virtual void  child(){
    cout<<"Hello from papa to baby";
   }
    


};

class Mom : public Dad {
    public:
    void child(){                                //Reimplement same function Child.
        cout<<"hello from  Mummy to child";
    }
};

int main(){
      Mom m1;
      m1.child();

    // Dad d1;
    // d1.child();

    return 0;
}