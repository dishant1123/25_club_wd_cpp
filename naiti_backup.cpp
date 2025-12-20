/*
cpp : object oriented programming. 

printf("hello");   ===> 
scanf();     ===> 
cpp ==> cout  ==> iostream
        cin>> 

*/
/*
#include<iostream>    
using namespace std; // std ==> standard lib , namespace ==> container , 
int main()
{
    cout<<"hello world.\n";
    cout<<"ram"<<endl; // end of the  line     
    return 0; 
}
*/
// prof : 
/*
#include<iostream>    
int main()
{
    std::cout<<"hello world.\n";
    std::cout<<"ram"<<"\n"; // end of the  line     
    return 0; 
}
*/ 

// variable declaration  : 
/*
int a@ =10 , int @a =90 , int A@A=78, int 12a =90   
int __=89 , int a12 =78  
*/
/*
#include<iostream>
using namespace std;
int main()
{
    float a=10; 
    float b=10.00; 
    cout<<"a  and  b value  is  :"<<(a==b)<<endl; 
    //cout<<"b value  is  :\n"<<b<<"\n"; 

    return 0; 
}
*/ 

// operator : 

/*
1. airthematic : + - * / % 
    ex : int a =1  b= 10   ==>  a%b == ??    1 %10 == 1??  2 %10 =2  
2. relational : == != > < >= <=
    ex : float a=10  float b =10.00  ==> a==b  ==> ?? 
3. assignment : = += -= *= /= %=
    ex :a= a +b  ==> a+=b  
4. logical : && ||  
5. bitwise : & | ^ << >>
6. increment decrement : 
    pre inc : ++a   post inc : a++ 
    pre dec : --a   post dec : a-- 
    int a =20 
    ex : a++  +  --a  + a--  + ++a + a++   ==> 
        20  +20 + 20 +20 +20  ==> 100  
ans : 100 101   
*/

/*

public  : accessible from anywhere
private  : with in the class 
protected : accessible from the class and its derived class. 
*/

// public : 
/*
#include<iostream>
using namespace std;
class student 
{
    public :
        int rollno[3]; 
        string name[3];
    void input()
    {
        for(int i=0; i<3; i++)
        {
            cout<<"enter rollno :";
            cin>>rollno[i]; 
            cout<<"enter name :";
            cin>>name[i];
        }
    }
    void  show()
    {
        for(int i=0; i<3; i++)
        {
            cout<<"rollno is  :"<<rollno[i]<<endl;
            cout<<"name is  :"<<name[i]<<endl;
        }
    }
};
int main()
{
    student s1; 
    //cout<<"rollno is  :"<<s1.rollno<<endl; 
    //cout<<"name is  :"<<s1.name<<endl; // object  though  public data member  access . 
    // cout<<"before changes :"<<endl;
    // s1.show();

    //s1.rollno =100; 
    //s1.name="mahek"; 

    // cout<<"after changes :"<<endl;
    // //s1.show(); 
    // cout<<"rollno is  :"<<s1.rollno<<endl;
    // cout<<"name is  :"<<s1.name<<endl;
    //s1.input(); 
    s1.input();
    s1.show(); 
    return 0; 
}
*/

// private  : 

#include<iostream>
using namespace std;
class student 
{
    private :
        int rollno =1 ;
        string name ="mahek";
    public :
        void show()
        {
            cout<<"rollno is  :"<<rollno<<endl;
            cout<<"name is  :"<<name<<endl;
        }
};
int main()
{
    student s1; 
    // cout<<"rollno is  :"<<s1.rollno<<endl;// not accessible bcz of private . 
    s1.show(); 
    return 0; 
}
