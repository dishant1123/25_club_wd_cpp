/*
class : bule  print  of object .

object : instance of class. ,entity  


type : 

1. public : data member can be accessed any where. 
2. private  : with in class only.
3. protected : with in class and inherited class.

4 pillar :

1. inheritance :
2. encapsulation :
3. abstraction :
4. polymorphism :
syntax :

#include<iostream>
using namespace std;

class name 
{

};
int main()
{
    return 0; 
}
*/

//public : 

#include<iostream>
using namespace std;

class student
{
    public : 
        int rollno=1;  // rollno  name  ==> class data member  ==> public 
        string name="mahek"; 

    void display()
    {
        cout<<"rollno is :"<<rollno<<endl;
        cout<<"name is :"<<name<<"\n";
    }
}; 
int main()
{
    student s1;  // s1 object ==> class student 

    // cout<<"rollno is :"<<s1.rollno<<endl;
    // cout<<"name is :"<<s1.name<<"\n";
    s1.display();

    return 0; 
}