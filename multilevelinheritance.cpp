#include<iostream>
#include<string.h>
using namespace std;
class person
{
    private:
    int age;
    string name;
    public:
          person()
          {
            age=0;
            name="no name";
            cout<<"\nCONSTRUCTOR OF BASE CLASS CALLED.";
          }
          person(int a,string n)
          {
            age=a;
            name=n;
            cout<<"\nTHE PARAMETERIZED CONSTRUCTOR OF BASE CLASS CALLED";
          }
          void accept()
          {
            cout<<"\nENTER THE AGE=";
            cin>>age;
            cout<<"\nENTER NAME=";
            cin>>name;
          }
          void display()
          {
            cout<<"\nTHE AGE OF PERSON IS "<<age;
            cout<<"\nNAME OF PERSON IS "<<name;
          }
};
class student:public person
{
 private:
       int roll_no;
       float percentage;
 public:
       student()
       {
        roll_no=0;
        percentage=0.0;
        cout<<"\nDEFAULT CONSTRUCTOR OF INTERMEDIATE CLASS IS CALLED";
       } 
       student(int a,string n,int r,float p):person(a,n)
       {
         roll_no=r;
         percentage=p;
         cout<<"\nPARAMETERIZED CONSTRUCTOR OF INTERMEDIATE CLASS IS CALLED";
       }  
       void get()
       {
        accept();
        cout<<"ENTER ROLL NO=";
        cin>>roll_no;
        cout<<"ENTER THE PERCENTAGE=";
        cin>>percentage;
       } 
       void put()
       {
        display();
        cout<<"\nTHE ROLL NO IS="<<roll_no;
        cout<<"\nTHE PERCENTAGE IS "<<percentage;

       }  
};
class ranking:public student
{
private:
        int rank;
 public:
        ranking()
        {
            rank=0;
            cout<<"\n DEFAULT CONSTRUCTOR OF DERIVED CLASS IS CALLED ";
        }       
        ranking(int rk,int a,string n,int r,float p):student(a,n,r,p)
        {
            rank=rk;
            cout<<"\n PARAMETERIZED CONSTRUCTOR OF DERIVED CLASS IS CALLED ";
        }
        void get()
        {
            student::get();
            cout<<"ENTER THE RANK=";
            cin>>rank;

        }
        void put()
        {
            student::put();
            cout<<"\nTHE RANK OF STUDENT IS "<<rank;
        }


};
int main()
{
    ranking s1,s2(2,19,"NISHA",11,99.27);
    s1.put();
    s2.put();
    s1.get();
    s2.get();
    s1.put();
    s2.put();

}