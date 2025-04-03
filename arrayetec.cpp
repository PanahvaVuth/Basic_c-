#include <iostream>
#include <iomanip>
using namespace std;
int i;
int code[100];
int qty [100];
string name[100];
double price[100],payment[100],total[100],discount[100],tax[100];
void AddProduct()
{
      cout<<"Enter Product Code     : ";cin>>code[i];
      cout<<"Enter Product Name     : ";cin>>name[i];
      cout<<"Enter Product Quantity : ";cin>>qty[i];
      cout<<"Enter Product Price    : ";cin>>price[i];
}
double Total()
{
      return price[i] * qty[i];
}
double Discount()
{
      double t = Total();
      return (t >= 1 && t <=100 )? t * 0.1:
      (t > 100 && t <= 200 )? t * 0.2:
      (t > 200 && t <= 300 )? t * 0.3:
      (t > 300 && t <= 400 )? t * 0.4: t * 0.5;
}
double Tax()
{
      return Total() * 0.05;
}
double Payment()
{
      return Total() + Tax() - Discount();
}
void Header()
{
      cout<<setw(16)<<"Code"<<
      setw(14)<<"Name"<<
      setw(14)<<"Qty"<<
      setw(16)<<"Price"<<
      setw(16)<<"Total"<<
      setw(18)<<"Tax"<<
      setw(18)<<"Discount"<<
      setw(18)<<"Payment"<<endl;
}
void Display()
{
       cout<<setw(14)<<code[i]<<
      setw(14)<<name[i]<<
      setw(14)<<qty[i]<<
      fixed<<setprecision(2)<<
      // ក្បៀស
      setw(14)<<"$"<<price[i]<<
      setw(13)<<"$"<<Total()<<
      setw(14)<<"$"<<Tax()<<
      setw(13)<<"$"<<Discount()<<
      setw(13)<<"$"<<Payment()<<endl;
}
int main()
{
      int op;
      int n;
      do{
      cout<<"===================[ M E N U]==================="<<endl;
      cout<<"[ 1 - Add Product     ] "<<endl;
      cout<<"[ 2 - Display Product ] "<<endl;
      cout<<"[ 3 - Search Product  ] "<<endl;
      cout<<"[ 4 - Update Product  ] "<<endl;
      cout<<"[ 5 - Insert Product  ] "<<endl;
      cout<<"[ 6 - Delete Product  ] "<<endl;
      cout<<"[ 7 - Sort Product    ] "<<endl;
      cout<<"[ 8 - Add Product     ] "<<endl;
      cout<<"[ 9 - Total Payment   ] "<<endl;
      cout<<"[ 10 - Exit (0)       ] "<<endl;
      cout<<"Please select one option : ";cin>>op;
      switch(op)
      {
            case 1:{
                  cout<<"Enter Number of Product : ";cin>>n;
                  for(i=0; i<n; i++)
                  // {
                  //       if(n!=n)
                  //       {
                  //             cout<<"Enter Number of Product : ";cin>>n;
                  //       }
                  //       else{
                  //             cout<<"Error!!"<<endl;
                  //       }
                  // }
                  {
                        cout<<"==============#00"<<i+1<<"================="<<endl;
                        AddProduct();
                  }
            }break;
            case 2:{
                  Header();
                  for(i=0; i<n; i++)
                  {
                        Display();
                  }
            }break;
            case 3:
            {
                  int searchid;
                  string searchname;
                  int op;
                  bool check = false;
                  cout<<"Search by ID or Name? "<<endl;
                  cout<<"[ 1. ID    ]"<<endl;
                  cout<<"[ 2. Name  ]"<<endl;
                  cout<<" Enter your choice : ";cin>>op;
                  switch(op)
                  {
                        case 1:{
                              cout<<"Enter Product ID to Search  : ";cin>>searchid;
                              for(i=0;i<n;i++)
                              {
                                    if (code[i]==searchid)
                                    {
                                          Header();
                                          Display();
                                          check = true;
                                          cout<<"Search Found.....\n";
                                          break;
                                    }
                                    if(check==false){
                                          cout<<"Search Not Found....\n";
                                    }
                              }
                        }break;
                        case 2:
                        {
                              cout<<"Enter Product Name to Search : ";cin>>searchname;
                              for(i=0;i<n;i++)
                              {
                                    if(name[i]==searchname)
                                    {
                                          Header();
                                          Display();
                                          check = true;
                                          cout<<"Searh Found....\n";
                                          break;
                                    }
                                    if(check==false)
                                    {
                                          cout<<"Search Not Found....\n";
                                    }
                              }
                        }break;
                  }
            }break;
            case 4:
            {
                  int updateid;
                  string updatename;
                  int op;
                  bool check = false ;
                  cout<<"Update by ID or Name? "<<endl;
                  cout<<"[ 1. ID   ]"<<endl;
                  cout<<"[ 2. Name ]"<<endl;
                  cout<<"Enter Your Choice : ";cin>>op;
                  switch(op){
                        case 1:
                        {
                              cout<<"Enter Product ID tO Update : ";cin>>updateid;
                              for(i=0; i<n; n++)
                              {
                                    if(code[i]==updateid)
                                    {
                                          AddProduct();
                                          cout<<"Update Successful....\n";
                                          break;
                                    }
                                    if(check==false)
                                    {
                                          cout<<"Update Not Found....\n";
                                    }
                              }
                        }break;
                        case 2:
                        {
                              cout<<"Enter Product Name to Update : ";cin>>updatename;\
                              for(i=0;i<n;i++)
                              {
                                    if(name[i]==updatename)
                                    {
                                          AddProduct();
                                          cout<<"Update Successful....\n";
                                          break;
                                    }
                                    if(check==false)
                                    {
                                          cout<<"Update Not Found....\n";
                                    }
                              }
                        }break;
                  }
            }break;
            case 5:
            {
                  int insertid;
                  string insertname;
                  int op;
                  bool check = false;
                  string status;
                  do{
                        cout<<"Insert by ID or name?"<<endl;
                        cout<<"[ 1 - Insert ID    ]"<<endl;
                        cout<<"[ 2 - Insert Name  ]"<<endl;
                        cout<<"Enter Your Choice : ";cin;op;
                        switch(op)
                        {
                              case 1:
                              {
                                    bool check = false;
                                    cout<<"Enter Product ID to Insert After : ";cin>>insertid;
                                    for(i=0;i<n;i++)
                                    {
                                          if (code[i]==insertid)
                                          {
                                                for(int j = n; j>=i; j--)
                                                {
                                                      code[j] = code[j-1];
                                                      name[j] = name[j-1];
                                                      qty[j] = qty[j-1];
                                                      price[j] = price [j-1];
                                                      total[j] = total [j-1];
                                                      tax[j] = tax [j-1];
                                                      discount[j] = discount [j-1];
                                                      payment[j] = payment[j-1];
                                                }
                                                n++;
                                                AddProduct();
                                                check = true;
                                                break;
                                          }
                                    }
                                    if (check==false)
                                    {
                                          cout<<"Insert not successful....\n";
                                    }
                                    else
                                    {
                                          cout<<"Insert Successful....\n";
                                    }

                              }break;
                              case 2:
                              {
                                    bool check = false ;
                                    int insertid ;
                                    cout<<"Enter Product Name to Insert After : ";cin>>insertname;
                                    for(i=0; i<n; i++)
                                    {
                                          if(insertname.compare(name[i])==0)
                                          {
                                                for(int j=n; j>=i; j--)
                                                {
                                                     
                                                      code[j] = code[j-1];
                                                      name[j] = name[j-1];
                                                      qty[j] = qty[j-1];
                                                      price[j] = price [j-1];
                                                      total[j] = total [j-1];
                                                      tax[j] = total [j-1];
                                                      discount[j] = discount [j-1];
                                                      payment[j] = payment[j-1];

                                                }
                                                n++;
                                                AddProduct();
                                                check = true;
                                                break;
                                          }
                                    }
                                    if(check == false)
                                    {
                                          cout<<"Insert not successful....\n";
                                    }
                                    else
                                    {
                                          cout<<"Insert successful....\n";
                                    }
                              }
                              
                        }     
                        cout<<"Press key Yes/yes to continue or no go to back : ";cin>>status;          
                  }while(status.compare("Yes")==0 || status.compare("yes")==0);
           }break;
           case 6:
           {
                  int deleteid;
                  int op;
                  int check = 0;
                  // not check = 1 -> true or check = 0 -> false
                  string deletename;
                  string status;
                  do{
                        cout<<"Delete by ID or name?"<<endl;
                        cout<<"[ 1 - Delete ID    ]"<<endl;
                        cout<<"[ 2 - Delete Name  ]"<<endl;
                        cout<<"Enter Your Choice : ";cin;op;
                        switch(op)
                        {
                              case 1:
                              {
                                    cout<<"Enter Product ID to Delete : ";cin>>deleteid;
                                    for(i=0;i<n;i++)
                                    {
                                          if (code[i]==deleteid)
                                          {
                                                for(int j=1;j<n-1;j++)
                                                {
                                                                                                    
                                                      code[j] = code[j+1];
                                                      name[j] = name[j+1];
                                                      qty[j] = qty[j+1];
                                                      price[j] = price [j+1];
                                                      total[j] = total [j+1];
                                                      tax[j] = total [j+1];
                                                      discount[j] = discount [j+1];
                                                      payment[j] = payment[j+1];
                                                }
                                                n--;
                                                check = 1;
                                                cout<<"Delete Successful....\n";
                                                break;
                                          }
                                    }
                                    if (check == 0)
                                    {
                                          cout<<"Delete Not Found...\n";
                                    }
                              }break;
                              case 2:
                              {
                                    cout<<"Enter Product Name to Delete : ";cin>>deletename;
                                    for(i=0; i<n;i++)
                                    {
                                          if(deletename.compare(name[i])==0)
                                          {
                                                for(int  j=i; j<n-1; j++)
                                                {                                                         code[j] = code[j+1];
                                                      name[j] = name[j+1];
                                                      qty[j] = qty[j+1];
                                                      price[j] = price [j+1];
                                                      total[j] = total [j+1];
                                                      tax[j] = total [j+1];
                                                      discount[j] = discount [j+1];
                                                      payment[j] = payment[j+1];
                                                }
                                                n--;
                                                check=1;
                                                cout<<"Delete Successful...\n";
                                                break;
                                          }
                                    }
                              }break;
                        }      
                  }while(status.compare("Yes")==0);
            }break;
            case 7 :
            {
                  int op;
                  int sortid;
                  string sortname;
                  cout<<"Sort by ID  : ";cin>>sortid;
                  cout<<"Sort by Name: ";cin>>sortname;
                  cout<<"Please Select one Option : ";cin>>op;
            }break;
            case 8:
            {
                  int add;
                  int b;
                  cout<<"Enter Add Product : ";cin>>add;
                  for(i=n;i<n+add;i++)
                  {
                        AddProduct();
                  }
                  n+=add;
                  b=1;
                  if(b==0)
                  {
                        cout<<"Error Add"<<endl;
                  }
                  else
                  {
                        cout<<"Add Successful....\n"<<endl;
                  }
            }break;
            case 9:{
            
                  double sum = 0;
                  for(i=0;i<n;i++)
                  {
                        sum+=total[i];
                  }
                  cout<<"Total Sales : $"<<sum<<endl;
                  }
            case 0:
            cout<<"Exiting program...."<<endl;
            break;
       default:
            cout<<"Invalid option!Please try again."<<endl;
      }
      
      }while(op!=0);
      return 0;
}
                        //     end.........
                        // char * == string == char[]

