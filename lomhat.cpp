// #include<iostream>
// using namespace std;
// int i;
// int op;
// class Wellcome_To_Your_account{
//       protected : 
//             int op;
//             string Email;
//             string password;
//             string confirmpassword;
//       public :
//             Wellcome_To_Your_account(){
//                         Email="null";
//                         password="null";
//                         confirmpassword="null";
//             }
//       void Input(){
//             do{
//                   int n;
//                   cout<<"|1 - Login Account |"<<endl;
//                   cout<<"|2 - Create Account|"<<endl;
//                   cout<<"Please Select One option : ";cin>>op;
//                   switch(op){
//                         case 1:{
//                               cout<<"\t\t\t\t============[Login Account]============"<<endl;
//                               cout<<"Enter Email  : ";cin>>Email;
//                               cout<<"Enter Password  : ";cin>>password;
//                               cout<<"Enter ConfirmPassword : ";cin>>confirmpassword;
//                                     if(Email.empty()){
//                                           cout<<"Invalid Email..."<<endl;
//                                                 if(password=="123"){
//                                                       if (confirmpassword=="123"){
//                                                             cout<<"Wellcome To Your Account...."<<endl;
//                                                       }
//                                                 }
//                                     else{
//                                           cout<<"Invalid Password.....\n";
//                                     }
//                               }    
//                         }break;
//                         case 2:
//                         {
//                               string firstname;
//                               string lastname;
//                               double email;
//                               double password;
//                               cout<<"============[Create Account]============"<<endl;
//                               cout<<"Enter Your First Name : ";cin>>firstname;
//                               cout<<"Enter Your Last Name  : ";cin>>lastname;
//                               cout<<"Enter Email    : ";cin>>email;
//                               cout<<"Enter Password : ";cin>>password;
//                               cout<<"Enter ConfirmPassword :";cin>>confirmpassword;
//                               if(firstname.empty()){
//                                     cout<<"Invalid FirstName...!"<<endl;
//                               }
//                               else{
//                                     if(password == confirmpassword)
//                               }
//                         }break;
//                   }
//             }while(op!=0);
//       }
//       void Output(){
//             cout<<"Email   : "<<Email<<endl;
//             cout<<"Password   : "<<password<<endl;
//             cout<<"Confirmpassword: "<<confirmpassword<<endl;
//       }
// };
// int main()
// {
//       Wellcome_To_Your_account well;
//       well.Input();
//       well.Output();
//       return 0;
// }


#include <iostream>
#include <fstream>
#include <cstring>  // For strcmp
using namespace std;

#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define RESET   "\033[0m"
// File stream
fstream user;
// User data
string username, email, password, confirm;
void Sign_Up() {
    user.open("data_user.txt", ios::app);
    if (!user.is_open()) {
        cout << RED << "Error opening file!" << RESET << endl;
        return;
    }
    cout << CYAN << " ==========================================" << endl;
    cout << CYAN << "| Enter Username   : " << MAGENTA; getline(cin, username);
    cout << CYAN << "| Enter Email      : " << MAGENTA; getline(cin, email);
    cout << CYAN << "| Enter Password   : " << MAGENTA; getline(cin, password);
    cout << CYAN << "| Confirm Password : " << MAGENTA; getline(cin, confirm);
    cout << CYAN << " ==========================================" << RESET << endl;
    if (password != confirm) {
        cout << RED << "Password and Confirm Password do not match!" << RESET << endl;
        user.close();
        return;
    }
    // Write user data to file with separator
    user <<"[ Username : "<< username << "] [ Email : " << email << "] [ Password : " << password <<"]"<< endl;
    cout << GREEN << "Registration Successful!" << RESET << endl;
    user.close();
}
void Sign_In() {
    ifstream user("data_user.txt");
    if (!user.is_open()) {
        cout << RED << "Error opening file!" << RESET << endl;
        return;
    }
    string entered_email, entered_password;
    string stored_name, stored_email, stored_password;
    cout << BLUE << "============ SIGN IN ============" << RESET << endl;
    cout << BLUE << "| Enter Email      : " << MAGENTA;getline(cin, entered_email);
    cout << BLUE << "| Enter Password   : " << MAGENTA;getline(cin, entered_password);
    bool login_success = false;
    // Read file line by line
    while (user >> stored_name >> stored_email >> stored_password) {
        if (entered_email == stored_email && entered_password == stored_password) {
            login_success = true;
            cout << GREEN << "Login Successful! Welcome, " << stored_name << "!" << RESET << endl;
            break;
        }
    }
    if (!login_success) {
        cout << RED << "Invalid email or password!" << RESET << endl;
    }
    user.close();
}
int main() {
    int choice;
    cout << YELLOW << "1. Sign Up\n2. Sign In\nChoose an option: " << RESET;
    cin >> choice;
    cin.ignore();  // Ignore leftover newline character
    if (choice == 1) {
        Sign_Up();
    } else if (choice == 2) {
        Sign_In();
    } else {
        cout << RED << "Invalid option!" << RESET << endl;
    }
    return 0;
}