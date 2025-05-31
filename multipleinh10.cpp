// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std ;

//multiple - INheritance

// class Person{
//     public :
//     string name;
//     int age;
// };
// class Student {
//     public:
//     int roll;
//     string subject;
// };

// class Mix:public Student , public Person {

// };

// int main(){
//     Mix s1;
//     s1.name = "Champion";
//     s1.subject = "PE";



//     return 0;
// }


//  **************************************************HIERARCHIAL INHERITANCE************************************************************

// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std ;

// class Person{
//     public :
//     string name;
//     int age;
// };

// class Student: public Person {
//     public:
//     string subject;
// };

// class Teacher : public Person {
//     public:
//     int salary;
// };
// int main(){
//     Teacher t1;
//     t1.name = "Mr. Brahmma" ;
//     cout<<t1.name;
// }




//  ******************************************************* HYBRID INHERITANCE **************************************************************


//MIX OF INHERITANCEES 

#include <iostream>
#include <bits/stdc++.h>
using namespace std ;

class Person{
    public :
    string name;
    int age;
};

class Student: public Person {
    public:
    string subject;
};

class Teacher : public Person {
    public:
    int salary;
};
int main(){
    Teacher t1;
    t1.name = "Mr. Brahmma" ;
    cout<<t1.name;
}
