/*
private :  with in class only. 

*/

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

