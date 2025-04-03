// #include<iostream>
// using namespace std;
// class Library {
//       protected:
//             int room;
//             string address;

// };
// class Book : public Library{
//       protected :
//             int id;
//             string title;
//             int author;
// };
// class Student : public Book{
//       private :
//             int code;
//             string name;
//             int age;
//       public : 
//             void Input(){
//                   cout<<"Enter Library ID : ";cin>>id;
//                   cout<<"Enter Address    : ";cin.ignore(),getline(cin,address);
//                   cout<<"Enter Room       : ";cin>>room;
//                   cout<<"Enter Book ID    : ";cin>>id;
//                   cout<<"Enter Book Title : ";cin>>title;
//                   cout<<"Enter Author     : ";cin>>author;
//                   cout<<"Enter Student Code : ";cin>>code;
//                   cout<<"Enter Student Name : ";cin>>name;
//                   cout<<"Enter Student Age  : ";cin>>age;
//             }
//             void Output(){
//                   cout<<"Library ID  : "<<id<<endl;
//                   cout<<"Address     : "<<address<<endl;
//                   cout<<"Room        : "<<room<<endl;
//                   cout<<"Book ID     : "<<id<<endl;
//                   cout<<"Book Title  : "<<title<<endl;
//                   cout<<"Book Author : "<<author<<endl;
//                   cout<<"Student Code: "<<code<<endl;
//                   cout<<"Student Name: "<<name<<endl;
//                   cout<<"Student Age : "<<age<<endl;
//             }
//       };
// int main(){
//       Student stu;
//       stu.Input();
//       stu.Output();
//       return 0;
// }