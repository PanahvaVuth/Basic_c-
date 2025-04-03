#include<iostream>
using namespace std;
int main()
{
      cout<<"Hello world";
      int i,j,k;
      int block,row,col;
      cout<<"Enter Block  : ";cin>>block;
      cout<<"Enter Row    : ";cin>>row;
      cout<<"Enter Column : ";cin>>col;
      for(k=0;k<block;k++)
      {
            cout<<endl;
            {
                  for(j=0;i<row;i++)
                  {
                        cout<<endl;
                        {
                              for(i=0;i<col;i++)
                              {
                                    cout<<endl;
                              }
                        }
                  }
            }
      }
}