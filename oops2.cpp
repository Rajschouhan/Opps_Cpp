#include <iostream>
#include <bits/stdc++.h>
using namespace std ;


class Amazon {
//properties,attributes
public:
// Amazon(){   //CONSTRUCTOR FN , : NON PARAMETRIZED
   
//     price = 20000 ;     //INITIALISE VALUE OF PRICE IN CONS FN for all
// }

public:

string productname;
string category;
int price ;
int money;

//CONSTRUCTOR FUNCTION

Amazon( string n , string c , int p){    //parametrized constr.
    productname = n;
    category = c;
    price = p;
};





void getInfo(){
    getline(cin,productname);
   cout<<"name is: " << productname << endl ;
    cout<<category <<endl;
cout << price <<endl;


}

};

int printMoney(){
    int money;
    cin>>money;
    money = money * 10 ;
cout<<"The amount 10 times is :"<< money;
}



int  main(){
    //objec
     Amazon p1("Raj","Genral", 500); //obj p1            ,  
     p1.getInfo();
     printMoney();
  



    return 0;
}