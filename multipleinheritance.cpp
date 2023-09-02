#include<iostream>
using namespace std;
class jee
{
    private: float percentile;
    public:
           jee()
           {
            percentile=0.0;
            cout<<"\nDEFAULT CONSTRUCTOR OF BASE CLASS 1 IS CALLED";

           }
           jee(float p)
           {
            percentile=p;
            cout<<"\nPARAMETERIZED CONSTRUCTOR OF BASE CLASS 1 IS CALLED";
           }
           void accept()
           {
            cout<<"\nENTER THE PERCENTILE OF JEE :";
            cin>>percentile;
           }
           void display()
           {
            cout<<"\n JEE PERCENTILE IS :"<<percentile;

           }
};
           
class neet
{
    private: int marks;
    public:
          neet()
          {
            marks=0;
            cout<<"\nDEFAULT CONSTRUCTOR OF BASE CLASS 2 IS CALLED";

          }
          neet(int m)
          {
            marks =m;
            cout<<"\nPARAMETERIZED CONSTRUCTOR OF BASE CLASS 2 IS CALLED";
          }
          void accept()
          {
            cout<<"\n ENTER MARKS OF NEET";
            cin>>marks;
          }
          void display()
          {
            cout<<"\n MARKS OF NEET UG IS "<<marks;
          }
};
class student:public jee,public neet 
{
    private:
            float percentage;
    public:
       student()
        {
            percentage=0;
            cout<<"\nDEFAULT CONSTRUCTOR OF DERIVED CLASS IS CALLED";

        }   
       student(float pr,float p,int m):jee(p),neet(m)
        {
            percentage=pr;
            cout<<"\nPARAMETERIZED CONSTRUCTOR OF DERIVED CLASS IS CALLED ";

        }
        void accept ()
        {
            jee::accept();
            neet::accept();
            cout<<"ENTER THE BOARDS PERCENTAGE ";
            cin>>percentage;
        }
        void display()
        {
            jee::display();
            neet::display();
            cout<<"\n THE PERCENTAGE OF BOARDS ARE "<<percentage;
        }

             
};
int main()
{
    student s1,s2(93.714,95.12,671);
    s1.display();
    s2.display();
    cout<<"\n=================================";
     s1.accept();
     cout<<endl;
     s1.display();
     cout<<"\n================================";
     s2.accept();
     s2.display();

}