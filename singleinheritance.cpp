#include<iostream>
#include<string.h>
using namespace std;
class student
{
   private:
           char name[50];
           int age;
   public:
          student()
          {
            strcpy(name,"no name");
            age=0;
            cout<<"\nDEFAULT CONSTRUCTOR OF BASE CLASS IS CALLED";
          }
          student(char n[],int a)
          {
            strcpy(name,n);
            age=a;
            cout<<"\nPARAMETERIZED CONSTRUCTOR OF BASE CLASS IS CALLED";
          }
          ~student()
          {
              cout<<"\nDESTRUCTOR OF BASE CLASS IS CALLED";
          }
          void accept()
          {
            cout<<"\nENTER THE NAME=";
            cin>>name;
            cout<<"ENTER THE AGE=";
            cin>>age;
          }
          void display()
          {
            cout<<"\nTHE NAME OF PERSON IS :"<<name;
            cout<<"\nTHE AGE OF PERSON IS :"<<age;
          }
};
class person:public student
{
  private:
  int roll_no;
  float percentage;
  public:
         person()
         {
            roll_no=0;
            percentage=0;
            cout<<"\nDEFAULT CONSTRUCTOR OF DERIVED CLASS IS CALLED";
         }
         person(int r,float per,char n[],int a):student(n,a)
         {
             roll_no=r;
             percentage=per;
             cout<<"\nPARAMETERIZED CONSTRUCTOR OF DERIVED CLASS IS CALLED";
         }
         ~person()
         {
             cout<<"\nDESTRUCTOR OF DERIVED CLASS IS CALLED";
         }
         
         void get()
         {
            accept();
            cout<<"\nENTER THE ROLL NO.=";
            cin>>roll_no;
            cout<<"ENTER THE PERCENTAGE =";
            cin>>percentage;
         }
         void put()
         {
            display();
            cout<<"\nTHE ROLL NO. OF PERSON IS :"<<roll_no;
            cout<<"\nTHE PERCENTAGE OF PERSON IS :"<<percentage;
         }
};
int main()
{
    person s1,s2(12,98.34,"SUYOG",19);
    s1.put();
    s2.put();
    s1.get();
    s2.get();
    s1.put();
    s2.put();

   
}

