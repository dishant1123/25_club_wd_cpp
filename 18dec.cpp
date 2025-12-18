/*
constructor  : 

constrcutor  overloading  : 

*/
/*
#include<iostream>
using namespace std; 
class demo 
{
    public : 
        // demo()
        // {
        //     cout<<"default constructor called\n";
        //     cout<<"yanshi is  very  intelligen girl\n";
        // }
        demo(int x,int  y)
        {
            cout<<"parameterized constructor called ==>1 \n";
            cout<<"x value is  : "<<x<<endl;
            cout<<"y value is  : "<<y<<endl;
        }
        demo(int x)
        {
            cout<<"parameterized constructor called  ==> 2 \n";
            cout<<"x value is  : "<<x<<endl;
        }
};

int main()
{
    demo d1(89); 
    demo d2(90,78);

    return 0; 
}
*/ 

/*
4 pillars 
1. inheritance 
2. polymorphism 
3. abstraction 
4. encapsulation

*/

// inheritance : 

/*
ex : 
class a  // base class 
{
    public :
        void  show()
        {
            cout<<"a class called\n";
        }
}
class b : public a    ===> b ==> derived class
{
    public : 
}

*/

// single inheritance :

#include<iostream>
using namespace std;
class a 
{
    public : 
        int  rollno =1 ; 
        string name ="naiti";
   
};
class b : public a 
{
    public : 
        void  display()
        {
            cout<<"rollno is  : "<<rollno<<endl;
            cout<<"name is  : "<<name<<endl;
        }
}; 
int main()
{
    b b1; 
    //b1.show(); /// a class 
    b1.display();  // b  class 
    b1.rollno =2; 
    b1.name ="pratham";
    b1.display();
    return 0; 
}