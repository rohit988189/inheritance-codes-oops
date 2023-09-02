#include <iostream>
#include <string.h>
using namespace std;
class person           //base class
{
private:
    string name;
    int age;

public:
    void accept()
    {
        cout << "Enter the name  : ";
        cin >> name;
        cout << "Enter the age : ";
        cin >> age;
    }
    void display()
    {
        cout << "name is " << name << endl;
        cout << "Age is : " << age << endl;
    }
     person()
    {
       cout<<"default base constructor called"<<endl;
    }
    person(string s,int a)
    {
        name=s;
        age=a;
        cout<<"Base class paramet const called "<<endl;
    }

      ~person()
    {
        cout<<"base class destructor called "<<endl;
    }
};
  class student : public person   //student is derived class of
                      //derived class            //person so derived class : base class
{                                 //class student can access the attributes of class person as well
private:
    int roll;
    float percentage;

public:
    void accept()
    {
        person::accept();            
        cout << "Enter the roll no of : ";
        cin >> roll;
        cout << "Enter the percentage : ";
        cin >> percentage;
    }
    void display()
    {
        person::display();
        cout << "The roll no of student is : " << roll;
        cout << "\n";
        cout << "The percentage of student is : " << percentage;
        cout << endl;
    }
    student()
    {
        cout<<"derived constr called "<<endl;
    }
    student(string s,int a,int r,float p):person(s,a)
    {
        roll=r;
        percentage=p;
        cout<<"derived paramet construc called "<<endl;
    }
    ~student()
    {
        cout<<"derived destructor called "<<endl;
    }
};
class teacher : public person  //derived  class
{
    private: float salary ;
             int starrating ;

    public: void accept()
            {
                person::accept();            //student class kadun accept krr
                cout<<"Enter salary : ";
                cin>>salary;
                cout<<"Enter rating of student out of 5  : ";
                cin>>starrating;
            }
            void display()
            {
                person::display();
                cout<<"The salary is : "<<salary<<endl;
                cout<<"The starrating is : "<<starrating<<endl;
            }
            teacher()
            {
                cout<<"default cons called "<<endl;
            }
            teacher(string s,int a,float sal,int strat):person(s,a)
            {
                salary=sal;
                starrating=strat;
                cout<<"derived class teacher called "<<endl;
            }
            ~teacher()
            {
                cout<<"derived destructor called "<<endl;
            }

 //2 base class hence we require to call two objects
};
int main()
{
  student s("suyog",18,12,99);
//   s.accept();
//   cout<<"THe information of student is "<<endl;
  s.display();

  teacher t("Anand",40,1999,5);
//   t.accept();
//   cout<<"The information of teacher is "<<endl ;
  t.display();

   
}