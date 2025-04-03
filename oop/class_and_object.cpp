#include<iostream>
using namespace std;
// create class
class Test{
      private :
      // block data member
            int a=20,b=10;
      public :
      // block methods
            void Display()
            {
                  cout<<"A = "<<a<<endl;
                  cout<<"B = "<<b<<endl;
            }
};
int main()
{
      // create object
      Test t;
      t.Display();
      return 0;
}
