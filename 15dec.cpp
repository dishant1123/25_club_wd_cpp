/*
constructor  : 
1. default constructor
2. parameterized constructor
3. non parameterized constructor
4. copy constructor
5. constructor overloading 

rules : 

1. class name = constructor  name 

use : 

1. private access  / intializer 
2. constrcutor  ==> no return 
3. automatically called when  object is  created . 
*/

/*
#include <iostream>
using namespace std;
class student 
{
    public :
        int rollno; 
        string name; 
    student()
    {
        rollno =1; 
        name = "pratham";
    }
    void  show()
    {
        cout<<"rollno = "<<rollno<<" name = "<<name<<endl;
    }
}; 
int main()
{
    student s1; 
    s1.show();
    s1.rollno =2 ;
    s1.name ="vidhya"; 
    s1.show();
    return 0; 

}
*/ 

// copy constructor : 
/*
#include<iostream>
using namespace std;
class test 
{
    public : 
        int a ;
    test(int x)
    {
        a=x; 
    }
    //copy constructor
    test(test &t)
    {
        a=t.a; 
    }
    void show()
    {
        cout<<"value of a is  : "<<a<<endl;
    }
};
int main()
{
    test t(10); // t.show()
    test t1(t); 
    t1.show();
    return 0; 
}
*/ 
/*
int a =10 ; 
int *p =&a;   int  *p   p =&a; 
*/


// constructor overloading :

#include<iostream>
using namespace std;
class student 
{
    public : 
    int rollno ;
    string name; 
        student()
        {
            cout<<"student default constructor called\n";
        }
        student(string n ,int r)
        {
            name =n; 
            rollno =r; 
            cout<<"student rollno "<<rollno<<" name "<<name<<" constructor called\n";
        }
                
};
int main()
{
    student s0;
    student s1("raj",1);
    student s3;
            
    return 0; 
}
