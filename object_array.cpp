#include<iostream>
#include<iomanip>
using namespace std;
class Employee{
      private:
      // block data member 
            int id;
            string name;
            string gender;
            double salary;
      public:
      // block methods
      // default constructor
            Employee(){
                  id = 0;
                  gender = "null";
                  name = "null";
                  salary = 0;
            }
            Employee(int id, string  name,string gender,double salary)
            {
                  this->id=id;
                  this->name=name;
                  this->gender=gender;
                  this->salary=salary;
            }
            void setId(int id)
            {
                  this->id = id;
            }
            void setName(string name)
            {
                  this->name=name;
            }
            void setSalary(double salary)
            {
                  this->salary=salary;
            }
            int getId()
            {
                  return id;
            }
            string  getName()
            {
                  return name;
            }
            string getGender()
            {
                  return gender;
            }
            double getSalary()
            {
                  return salary;
            }
            void Input()
            {
                  cout<<"Enter Employee ID :";cin>>id;
                  cout<<"Enter Employee Name : ";cin>>name;
                  cout<<"Enter Employee Gender : ";cin>>gender;
                  cout<<"Enter Employee Salary : ";cin>>salary;
            }
            void Display()
            {
                  cout<<setw(12)<<id<<setw(12)<<name<<setw(12)<<gender<<setw(12)<<salary<<endl;
            }
};
void Header()
{
      cout<<setw(12)<<"Code"<<setw(12)<<"Name"<<setw(12)<<"Gender"<<setw(12)<<"Salary"<<endl;
}
int  main()
{
      Employee emp[100];
      int i,n,op;
      do{
            cout<<"=================[MENU]================"<<endl;
            cout<<"[1 - Input data   ]"<<endl;
            cout<<"[2 - Output data  ]"<<endl;
            cout<<"[3 - Search data  ]"<<endl;
            cout<<"[4 - Update data  ]"<<endl;
            cout<<"[5 - Delete data  ]"<<endl;
            cout<<"[6 - Insert data  ]"<<endl;
            cout<<"[7 - Sort data    ]"<<endl;
            cout<<"[8 - Add data     ]"<<endl;
            cout<<"[9 - Exit         ]"<<endl;
            cout<<"Please select one option : ";cin>>op;
            switch(op){
                  case 1:{
                        cout<<"Enter Number of Employee : ";cin>>n;
                        for(i=0;i<n;i++){
                              emp[i].Input();
                        }
                  }break;
                  case 2:{
                        Header();
                        for(i=0;i<n;i++){
                              emp[i].Display();
                        }
                  }break;
                  case 3:{
                        bool check = false;
                        int searchid;
                        cout<<"Enter ID to Search : ";cin>>searchid;
                        for(i=0;i<n;i++)
                        {
                              if(searchid=emp[i].getId())
                              {
                                    emp[i].Display();
                                    check = true;
                              }
                        }
                        if(check==true){
                              cout<<"Search found...."<<endl;
                        }
                        else{
                              cout<<"Search id not found....."<<endl;
                        }
                       
                  }break;
                case 4:
                {
                  int updateid;
                  string updatename;
                  bool check = false;
                  int op;
                  cout<<"Update Name or ID ? "<<endl;
                  cout<<"[1 - ID  ]"<<endl;
                  cout<<"[2 - Name]"<<endl;
                  cout<<"Please select one option : ";cin>>op;
                  switch(op){
                        case 1:{
                              cout<<"Enter ID to Update : ";cin>>updateid;
                              for(i=0;i<n;i++)
                              {
                                    if(updateid==updateid);
                              }
                        }
                  }
                }
            }
      }while(op!=0);
      return 0;
}