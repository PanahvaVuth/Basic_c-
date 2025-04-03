// #include<iostream>
// using namespace std;
// int main()
// {
//       int i,j,k;
//       int block,row,col;
//       cout<<"Enter Block  : ";cin>>block;
//       cout<<"Enter Row    : ";cin>>row;
//       cout<<"Enter Column : ";cin>>col;
//       for(k=0;k<block;k++)
//       {
//             cout<<endl;
//             {
//                   for(j=0;j<row;j++)
//                   {
//                         cout<<endl;
//                         {
//                               for(i=0;i<col;i++)
//                               {
//                                     cout<<endl;
//                               }
//                         }
//                   }
//             }
//       }
// }

#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
      int i,j,k;
      int row,col,block;
      int code[10][10][10];
      char name[10][10][10];
      int qty[10][10][10];
      double price[10][10][10];

      cout<<"Enter Block  : ";cin>>block;
      cout<<"Enter Row    : ";cin>>row;
      cout<<"Enter Column : ";cin>>col;

      for(k=0;k<block;k++)
      {
             for(i=0;i<row;j++)
             {
                  for(k=0;k<col;k++)
                  {
                        cout<<"Enter Code  : ";cin>>code[k][i][j];
                        cout<<"Enter Name  : ";cin;name[k][i][j];
                        cout<<"Enter Qty   : ";cin>>qty[k][i][j];
                        cout<<"Enter   : ";cin>>price[k][i][j];
                  }
             }
      }
      for(k=0;k<block;k++)
      {
            for(i=0;i<row;j++)
            {
                  for(k=0;k<col;k++)
                  {
                         
                        cout<<setw(12)<<code[k][i][j]<<
                        setw(12)<<name[k][i][j]<<
                        setw(12)<<qty[k][i][j]<<
                        setw(12)<<price[k][i][j]<<endl;
            
                  }
            }
      }
}