#include <iostream>
#include <bits/stdc++.h>
using namespace std ;


// Abstract class using virtul fn , using draw() fn , in its both derived classes.

class Shape{
    virtual void draw() = 0 ;
};

class Circle : public Shape{

    public:
    void draw(){
        cout<<"Drawing a Circle\n";
    }
    
};

class Rectangle : public Shape{
    public:
    void draw(){
        cout<<"Drawing a Rectangle\n";
    }
};


int main(){
    Circle c1;
    c1.draw();
    Rectangle r1;
    r1.draw();
    return 0;
}