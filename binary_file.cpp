#include <iostream>
#include <iomanip>
#include <fstream>
#include <string.h>
#include <ctime>
#include <vector>
#define BROWN "\033[1;33m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN "\033[36m"
#define RESET "\033[0m"
using namespace std;
// -------------------REGISTER--------------------
char username[100], email[100], password[100], confirm[100];
fstream storage;
bool signin = false;

void SignUp() {
    storage.open("storage_us.txt", ios::app);
    if (!storage.is_open()) {
        cout << "Error opening file. Can't open file." << endl;
        return;
    }

    cout <<RED<< "================================================" << endl;
    cout <<BLUE<< "Enter your username   : "; cin >> username;
    cout <<BLUE<< "Enter your email      : "; cin >> email;
    cout <<BLUE<< "Enter your password   : "; cin >> password;
    cout <<BLUE<< "Confirm your password : "; cin >> confirm;
    cout <<RED<< "================================================" << endl;

    // Check if passwords match
    if (strcmp(password, confirm) != 0) {
        cout <<RED<< "Passwords do not match!" << endl;
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
            strcmp(username,stored_username);
            break;
        }
    }

    storage.close();
    if (signin) {
        cout <<GREEN<< "Sign In Successfully! Welcome, Mr. " << stored_username << endl;
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
        string getName()
        {
            return name;
        }
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
    void ShowDate(struct tm *now) {
        cout << "\t" << setw(2) << (now->tm_mon + 1) << "/"
             << setw(2) << now->tm_mday << "/"
             << (now->tm_year + 1900);
    }

    void ShowTime() {
        time_t t = time(0);
        struct tm *now = localtime(&t);

        Output(); // Call Product::Output()
        ShowDate(now);
        cout << "\t" << setw(2) << now->tm_hour << ":"
             << setw(2) << now->tm_min << ":"
             << setw(2) << now->tm_sec << endl;
    }
};
void Header()
{
    cout<<setw(12)<<"CODE"<<
    setw(12)<<"NAME"<<
    setw(12)<<"PRICE"<<
    setw(12)<<"QUANTITY"<<
    setw(12)<<"SIZE"<<
    setw(12)<<"CATEGORIES"<<
    setw(15)<<"DATE"<<
    setw(15)<<"TIME"<<endl;
}
int main()
{
    int op;
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
                    
                    int op,i,n;
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
                                bool check = false;
                                // open file
                                store_product.open("storeproduct.bin",ios::app | ios::binary);
                                if(!store_product)
                                {
                                    cerr<<"can't open file stream"<<endl;
                                }
                                cout<<"Enter Number Of Product : ";cin>>n;
                                for(i=0;i<n;i++)
                                {
                                    product.Input();
                                    store_product.write((char*)&product,sizeof(product));
                                    check = true;
                                }
                                if(check)
                                {
                                    cout<<"save file successful.."<<endl;
                                }
                                else
                                {
                                    cout<<"can't saving..."<<endl;
                                }
                                store_product.close();
                            }break;
                            case 2:{
                                // open file stream
                                store_product.open("storeproduct.bin",ios::in|ios::binary);
                                if(!store_product)
                                {
                                    cout<<"can't open file stream"<<endl;
                                    return 0;
                                }
                                Header();
                                while(store_product.read((char*)&product,sizeof(product))){
                                    product.ShowTime();
                                }
                                store_product.close();

                            }break;
                            // case 3:{
                            //     bool check = false;
                            //     int searchid;
                            //     string searchname;
                            //     cout<<"Enter ID to search : ";cin>>searchid;
                            //     while(store_product.read((char *)&product,sizeof(product)))
                            //     {
                            //         if(searchid==product)
                            //         {
                            //             product.ShowTime();
                            //             check = true;
                            //         }
                            //     }
                            // }break;
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