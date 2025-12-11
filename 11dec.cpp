/*
private :  with in class only. 

*/
/*
#include<iostream>
using namespace std;
class student 
{
    private :
        int rollno =1; 
        string name ="raj";
    
        void display()
        {
            cout<<"rollno is :"<<rollno<<endl;
            cout<<"name is :"<<name<<"\n";
        }
    public :
        void show()
        {
            display();
        }
};
int main()
{
    student s1; 
    s1.show();
    // cout<<"rollno is :"<<s1.rollno<<endl;
    // cout<<"name is :"<<s1.name<<"\n";   // private  not  poss to access using object
    return 0; 
}
*/ 
/*
constructor  : automatically called when object is created.

1. class name ==constructor  name 
2. no return type 

type : 
1. default constructor
2. parameterized constructor
3. non parameterized constructor

*/

//1 :
/*
#include<iostream>
using namespace std;
class person 
{
    public :
    person()
    {
        cout<<"default constructor called\n";
        cout<<"my name is raj"; 
        cout<<"live in gandhinagar\n";
    }
};
int main()
{
    person s1;
    return 0; 
}
*/
//2 :non parameterized constructor
/*
#include<iostream>
using namespace std;
class person 
{
    public :
        string name; 
        int age; 
    person()
    {
        name ="raj";
        age =19;
        
    }
    void show()
    {
        cout<<"my name is "<<name<<"\n";
        cout<<"age is "<<age<<"\n";
    }
};
int main()
{
    person s1;
    s1.show();
    return 0; 
}
*/ 

//3 :parameterized constructor

#include<iostream>
using namespace std;
class person 
{
    public :
        string name; 
        int age; 
    person(string n , int a )
    {
            name=n; 
            age=a; 
    }
    void show()
    {
        cout<<"my name is "<<name<<"\n";
        cout<<"age is "<<age<<"\n";
    }
};
int main()
{
    person s1("raj",19);
    person p2("taksh",20);
    s1.show();
    p2.show();
    return 0; 
}

/*
hw :  switch   conditional statement :
Write a C++ program to calculate the monthly gross pay, annual income, and income tax of an employee using the following rules:

ask user to enter the city and grade.

1. Salary Components

Gross Pay =
Basic Pay + House Rent Allowance (HRA) + Dearness Allowance (DRA) + Other Allowances + Transport Allowance (TA) – Professional Tax – Provident Fund (PF)

| Grade | Basic Pay (₹) | Other Allowances (₹) |
| ----- | ------------- | -------------------- |
| A     | 60000         | 8000                 |
| B     | 50000         | 7000                 |
| C     | 40000         | 6000                 |
| D     | 30000         | 5000                 |
| E     | 20000         | 4000                 |
| F     | 10000         | 3000                 |

2. Constants & Formulas

Professional Tax = ₹200
Transport Allowance TA = ₹900
Provident Fund PF = 0.11 × Basic Pay
Dearness Allowance DRA = 0.5 × Basic Pay
 
HRA depends on city type:
City 1 (Tier 1) → HRA = 0.30 × Basic Pay
City 2 (Tier 2) → HRA = 0.20 × Basic Pay
City 3 (Tier 3) → HRA = 0.10 × Basic Pay

3.Annual Income = Gross Pay × 12

4.
| Annual Income           | Tax                                    | 8 lpa 
| ----------------------- | -------------------------------------- |
| Up to ₹2,50,000         | 0%                                     |
| ₹2,50,001 – ₹5,00,000   | 5% of (Income – 2,50,000)              |12500
| ₹5,00,001 – ₹7,50,000   | 10% of (Income – 5,00,000) + 12,500    |25000 
| ₹7,50,001 – ₹10,00,000  | 15% of (Income – 7,50,000) + 37,500    |7500  == > 45000
| ₹10,00,001 – ₹12,50,000 | 20% of (Income – 10,00,000) + 75,000   |
| ₹12,50,001 – ₹15,00,000 | 25% of (Income – 12,50,000) + 1,25,000 |
| Above ₹15,00,001        | 30% of (Income – 15,00,000) + 1,87,500 |

*/