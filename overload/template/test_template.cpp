#include<iostream>
using namespace std;
template<typename T>
T sum(T a,T b){
      return a + b;
}
int main()
{
      int num1=12,num2=21;
      cout<<"Sum = "<<sum(num1,num2)<<endl;
      short num3=8,num4=4;
      cout<<"Sum = "<<sum(num3,num4)<<endl;
      float num5=12.5,num6=21.5;
      cout<<"Sum = "<<sum(num5,num6)<<endl;
      double num7=233.23,num8=241243.7;
      cout<<"Sum = "<<sum(num7,num8)<<endl;
      return 0;
}