#include<iostream>
using namespace std;
class Library {
      protected:
            int  id =1001;
            string room = "VIP";
};
class Book: public Library{
      private : 
            string title = "Book1";
            string autaur = "Authur";
      public:
      void DisplayDetail(){
            cout<<"ID : "<<id<<endl;
            cout<<"Room : "<<room<<endl;
            cout<<"Title: "<<title<<endl;
            cout<<"Authaur : "<<autaur<<endl;
      }
};
int main()
{
      Book n;
      n.DisplayDetail();

      return 0;
}
