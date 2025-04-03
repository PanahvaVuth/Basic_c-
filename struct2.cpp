// #include<iostream>
// using namespace std;
// struct Employee{
//       int id;
//       double salary;
//       string name;
//       string gender;
// }emp;
// void Input()
// {
//       cout<<"Enter ID : ";cin>>emp.id;
//       cout<<"Enter Name : ";cin>>emp.name;
//       cout<<"Enter Gender : ";cin>>emp.gender;
//       cout<<"Enter Salary : ";cin>>emp.salary;
// }
// void Output()
// {
//       cout<<"ID : "<<emp.id<<endl;
//       cout<<"Name: "<<emp.name<<endl;
//       cout<<"Gender "<<emp.gender<<endl;
//       cout<<"Salary "<<emp.salary<<endl;
// }
// int main()

// {
//       Input();
//       Output();
// //       struct Employee emp;
// //       // employee(code,salary,name,gender)
// //       cout<<"Enter ID employee : ";cin>>emp.id;
// //       cout<<"Name employee     : ";cin>>emp.name;
// //       cout<<"Gender employee   : ";cin>>emp.gender;
// //       cout<<"Salary employee   : ";cin>>emp.salary;
//       return 0;
// }


#include<iostream>
using namespace std;
struct person{
      int id;
      string name;
      struct employee
      {
            double salary;
            struct staff
            {
                  string position;
            }sta;
      }emp ;
}per ;
int main()
{
      cout<<"Enter Id       : ";cin>>per.id;
      cout<<"Enter Name     : ";cin.ignore();getline(cin,per.name);
      cout<<"Enter Salary   : ";cin>>per.emp.salary;
      cout<<"Enter Position : ";cin>>per.emp.sta.position;
     return 0;
}
