#include <iostream>
#include <fstream>
#include <iomanip>
#include <string.h>
#define BROWN "\033[1;33m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN "\033[36m"
#define RESET "\033[0m"
using namespace std;
char username[100];char password[100];char confirmpassword[100];char email[100];
fstream storage;
bool signin = false;
void SignUp(){
    storage.open("storage_us.txt",ios::app);
    if(!storage.is_open()){
        cout<<"Error opening file. can't open file..."<<endl;
    }
    cout<<"================================================="<<endl;
    cout<<"Enter your username : ";cin>>username;
    cout<<"Enter your email    : ";cin>>email;
    cout<<"Enter your password : ";cin>>password;
    cout<<"Enter your confirmpassword : ";cin>>confirmpassword;
    cout<<"=================================================="<<endl;
    
    if (strcmp(password,confirmpassword) != 0){
        cout<<"Password do not match!!"<<endl;
        storage.close();
        return;
    }
    // Write to file
    storage << username << " " << email << " " << password << endl;
    storage.close();
    cout <<GREEN<< "Sign Up Successfully!" << endl;
}

void SignIn() {
    storage.open("storage_us.txt", ios::in);
    if (!storage.is_open()) {
        cout <<RED<< "Error opening file. Can't open file." << endl;
        return;
    }

    char stored_username[100], stored_email[100], stored_password[100];
    char new_email[100], new_password[100];

    cout <<MAGENTA<< "================================================" << endl;
    cout <<BLUE<< "Enter your email      : "; cin >> new_email;
    cout <<BLUE<< "Enter your password   : "; cin >> new_password;
    cout <<MAGENTA<< "================================================" << endl;

    // Read from file
    while (storage >> stored_username >> stored_email >> stored_password) {
        if (strcmp(stored_email, new_email) == 0 && strcmp(stored_password, new_password) == 0) {
            signin = true;
            strcpy(username, stored_username); // Store the username
            break;
        }
    }

    storage.close();

    if (signin) {
        cout <<GREEN<< "Sign In Successfully! Welcome, Mr. " << username << endl;
    } else {
        cout <<RED<< "Invalid password or email!" << endl;
    }
}
// -------------------REGISTER--------------------
class Product
{
    private:
        int id;
        string name;
        double price;
        int quantity;
        string size;
        string color;
        string brand;
        string category;
    public:
        void Input()
        {
            cout<<RED<<"===================================="<<endl;
            cout<<BLUE<< "Enter ID          : "<<YELLOW; cin >> id;
            cout<<BLUE<< "Enter Name        : "<<YELLOW; cin >> name;
            cout<<BLUE<< "Enter Price       : "<<YELLOW; cin >> price;
            cout<<BLUE<< "Enter Quantity    : "<<YELLOW; cin >> quantity;
            cout<<BLUE<< "Enter Size        : "<<YELLOW; cin >> size;
            cout<<BLUE<< "Enter Category    : "<<YELLOW; cin >> category;
        }
        void Output()
        {
            cout<<MAGENTA<<setw(12)<<id<<
            setw(12)<<name<<
            setw(12)<<price<<
            setw(12)<<quantity<<
            setw(12)<<size<<
            setw(12)<<category;
        }

};
class DateTime:public Product{
    protected:
        int day,month,year;
        time_t t = time(0);  // Get current system time
        tm* now = localtime(&t);
    public:
    void Input()
    {
        Product::Input();
    }
    void ShowDate()
    {
        cout <<"\t"<< setw(2) << setfill('0') << (now->tm_mon + 1) << "/"<< 
        setw(2) << setfill('0') << now->tm_mday << "/"<< (now->tm_year + 1900);
    }
    void ShowTime()
    {
        Product::Output();
        ShowDate();
        cout <<"\t"<<setw(2) <<setfill('0') << now->tm_hour << ":"
              <<setw(2) <<setfill('0') << now->tm_min << ":"
              <<setw(2) <<setfill('0') << now->tm_sec;
    }
};
int main()
{
    int op,i,n;
    DateTime product;
    fstream store_product;
    do{
        cout<<RED<<"===========[ FORM REGISTER ]==========="<<endl;
        cout<<CYAN<<"[ 1 - S I G N I N ]"<<endl;
        cout<<CYAN<<"[ 2 - S I G N U P ]"<<endl;
        cout<<BLUE<<"Please select one option : "<<YELLOW;cin>>op;
        switch(op)
        {
            case 1:{
                SignIn();
                if(signin)
                {
                    int op;
                    do{
                        cout<<RED<<"===========[ FORM REGISTER ]==========="<<endl;
                        cout<<CYAN<<"[ 1 - WRITE FILE  ]"<<endl;
                        cout<<CYAN<<"[ 2 - READ FILE   ]"<<endl;
                        cout<<CYAN<<"[ 3 - SEARCH FILE ]"<<endl;
                        cout<<CYAN<<"[ 4 - UPDATE FILE ]"<<endl;
                        cout<<CYAN<<"[ 5 - DELETE FILE ]"<<endl;
                        cout<<CYAN<<"[ 6 - INSERT FILE ]"<<endl;
                        cout<<BLUE<<"Please select one option : "<<YELLOW;cin>>op;
                        switch (op)
                        {
                            case 1:
                            {
                                
                            }
                        }

                    }while (op!=0);
                    
                }
            }break;
            case 2:{
                SignUp();
            }break;
        }
    } while (op!=0);
    
    return 0;
}
// #include <iostream>
// #include <fstream>
// #include <cstring>
// #define BROWN "\033[1;33m"
// #define RED "\033[31m"
// #define GREEN "\033[32m"
// #define YELLOW "\033[33m"
// #define BLUE "\033[34m"
// #define MAGENTA "\033[35m"
// #define CYAN "\033[36m"
// #define RESET "\033[0m"
// using namespace std;
// // -------------------REGISTER--------------------
// char username[100], email[100], password[100], confirm[100];
// fstream storage;
// bool signin = false;

// void SignUp() {
//     storage.open("storage_us.txt", ios::app);
//     if (!storage.is_open()) {
//         cout << "Error opening file. Can't open file." << endl;
//         return;
//     }

//     cout <<RED<< "================================================" << endl;
//     cout <<BLUE<< "Enter your username   : "; cin >> username;
//     cout <<BLUE<< "Enter your email      : "; cin >> email;
//     cout <<BLUE<< "Enter your password   : "; cin >> password;
//     cout <<BLUE<< "Confirm your password : "; cin >> confirm;
//     cout <<RED<< "================================================" << endl;

//     // Check if passwords match
//     if (strcmp(password, confirm) != 0) {
//         cout <<RED<< "Passwords do not match!" << endl;
//         storage.close();
//         return;
//     }

//     // Write to file
//     storage << username << " " << email << " " << password << endl;
//     storage.close();
//     cout <<GREEN<< "Sign Up Successfully!" << endl;
// }

// void SignIn() {
//     storage.open("storage_us.txt", ios::in);
//     if (!storage.is_open()) {
//         cout <<RED<< "Error opening file. Can't open file." << endl;
//         return;
//     }

//     char stored_username[100], stored_email[100], stored_password[100];
//     char new_email[100], new_password[100];

//     cout <<MAGENTA<< "================================================" << endl;
//     cout <<BLUE<< "Enter your email      : "; cin >> new_email;
//     cout <<BLUE<< "Enter your password   : "; cin >> new_password;
//     cout <<MAGENTA<< "================================================" << endl;

//     // Read from file
//     while (storage >> stored_username >> stored_email >> stored_password) {
//         if (strcmp(stored_email, new_email) == 0 && strcmp(stored_password, new_password) == 0) {
//             signin = true;
//             strcpy(username, stored_username); // Store the username
//             break;
//         }
//     }

//     storage.close();

//     if (signin) {
//         cout <<GREEN<< "Sign In Successfully! Welcome, Mr. " << username << endl;
//     } else {
//         cout <<RED<< "Invalid password or email!" << endl;
//     }
// }
// -------------------REGISTER--------------------

// #include <iostream>
// #include <fstream>
// #include <cstring>  // For strcmp
// using namespace std;

// #define RED     "\033[31m"
// #define GREEN   "\033[32m"
// #define YELLOW  "\033[33m"
// #define BLUE    "\033[34m"
// #define MAGENTA "\033[35m"
// #define CYAN    "\033[36m"
// #define RESET   "\033[0m"
// // File stream
// fstream user;
// // User data
// string username, email, password, confirm;
// void Sign_Up() {
//     user.open("data_user.txt", ios::app);
//     if (!user.is_open()) {
//         cout << RED << "Error opening file!" << RESET << endl;
//         return;
//     }
//     cout << CYAN << " ==========================================" << endl;
//     cout << CYAN << "| Enter Username   : " << MAGENTA; getline(cin, username);
//     cout << CYAN << "| Enter Email      : " << MAGENTA; getline(cin, email);
//     cout << CYAN << "| Enter Password   : " << MAGENTA; getline(cin, password);
//     cout << CYAN << "| Confirm Password : " << MAGENTA; getline(cin, confirm);
//     cout << CYAN << " ==========================================" << RESET << endl;
//     if (password != confirm) {
//         cout << RED << "Password and Confirm Password do not match!" << RESET << endl;
//         user.close();
//         return;
//     }
//     // Write user data to file with separator
//     user <<"[ Username : "<< username << "] [ Email : " << email << "] [ Password : " << password <<"]"<< endl;
//     cout << GREEN << "Registration Successful!" << RESET << endl;
//     user.close();
// }
// void Sign_In() {
//     ifstream user("data_user.txt");
//     if (!user.is_open()) {
//         cout << RED << "Error opening file!" << RESET << endl;
//         return;
//     }
//     string entered_email, entered_password;
//     string stored_name, stored_email, stored_password;
//     cout << BLUE << "============ SIGN IN ============" << RESET << endl;
//     cout << BLUE << "| Enter Email      : " << MAGENTA;getline(cin, entered_email);
//     cout << BLUE << "| Enter Password   : " << MAGENTA;getline(cin, entered_password);
//     bool login_success = false;
//     // Read file line by line
//     while (user >> stored_name >> stored_email >> stored_password) {
//         if (entered_email == stored_email && entered_password == stored_password) {
//             login_success = true;
//             cout << GREEN << "Login Successful! Welcome, " << stored_name << "!" << RESET << endl;
//             break;
//         }
//     }
//     if (!login_success) {
//         cout << RED << "Invalid email or password!" << RESET << endl;
//     }
//     user.close();
// }
// int main() {
//     int choice;
//     cout << YELLOW << "1. Sign Up\n2. Sign In\nChoose an option: " << RESET;
//     cin >> choice;
//     cin.ignore();  // Ignore leftover newline character
//     if (choice == 1) {
//         Sign_Up();
//     } else if (choice == 2) {
//         Sign_In();
//     } else {
//         cout << RED << "Invalid option!" << RESET << endl;
//     }
//     return 0;
// }