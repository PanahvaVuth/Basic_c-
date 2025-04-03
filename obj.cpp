#include<iostream>
#include<iomanip>
using namespace std;
class person
{
      private:
            int id;
            char gender;
      public :
            string name;
            // setter
            void setId(int Id)
            {
                  id=Id;
            }
            void setGender(char Gender)
            {
                  gender=Gender;
            }
            // getter
            int getId()
            {
                  return id;

            }
            char getGender()
            {
                  return gender;
            }
};
int main()
{
      person obj;
      obj.setId(12);
      obj.name="Vy";
      obj.setGender('M');

      cout<<"ID : "<<obj.getId()<<setw(10)<<"Name:"<<obj.name<<setw(10)<<"Gender:"<<obj.getGender()<<endl;
      return 0;
}
