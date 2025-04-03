#include<iostream>
using namespace std;
class Person{
      private:      
      // block data members
            int id;
            string name;
            string gender;
            double salary;
            string address;
      public:
      // block methots
            // create defualt constructor
            Person()
            {
                  id =0;
                  name = "NULL";
                  gender = "NULL";
                  address = "NULL";
                  salary = 0;
            }
            Person(int id,string name,string gender ,string address,double salary)
            {
                  this -> id=id;
                  this -> name=name;
                  this -> gender = gender;
                  this -> address = address;
                  this -> salary = salary;
            }
            void Display()
            {
                  cout<<"Person ID      : "<<id<<endl;
                  cout<<"Person Name    : "<<name<<endl;
                  cout<<"Person Gender  : "<<gender<<endl;
                  cout<<"Person Address : "<<address<<endl;
                  cout<<"Person Salary  : "<<salary<<endl;
            
            }
};
int main()
{
      // create object
      Person per;
      per.Display();
      Person per1(1001,"John","Male","PP",1200);
      per1.Display();
      return 0;
}