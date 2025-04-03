/*#include <iostream> 
#include <iomanip>

using namespace std;
int main(){

    float my_float;
    cout<<"Please Input Floating point:"<<endl;
    cin>>my_float;

    cout<<"Float:" <<my_float<<endl;
    
    return 0;
}


#include <iostream>
#include <iomanip>

using namespace std;
//STORE SELL
int main(){
    int code;
    char name[100];
    int qty;
    string date;
    float price;
    double total;


    cout<<"In Put Code:" ;cin>>code;
    cout<<"In Put Name:" ;cin.ignore();cin.getline(name, 100);
    cout<<"In Put Quantity:" ; cin>>qty;
    cout<<"In Put Date:" ;cin>>date;
    cout<<"In Put Price:" ;cin>>price;


    total = qty * price;

    cout<<left<<setw(10)<<"Code"<<
    setw(10)<<"Name"<<
    setw(10)<<"QTY"<<
    setw(10)<<"Date"<<
    setw(10)<<"Price"<<
    setw(10)<<"Total"<<endl;

    //out put data 

    cout<<left<<setw(10)<<code<<
    setw(10)<<name<<
    setw(10)<<qty<<
    setw(10)<<date<<
    setw(10)<<price<<
    setw(10)<<total<<endl;

    return 0;
}
                                    //login project
#include <iostream>
using namespace std;

int main(){

    string username,password,confirmpassword;

    cout<<"Enter Username :"; cin>>username;
    cout<<"Enter password :"; cin>>password;
    cout<<"Confirmpassword :"; cin>>confirmpassword;


    if(password!=confirmpassword)
    {

    cout<<"Wellcome to My Heart!"<<endl;
    
    }
    else
    {

        cout<<"Please Enter password again!";
    
    }

}

                             //if else project
#include <iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter A :" ;cin>>a;
    cout<<"Enter B :" ;cin>>b;
    
    if(a>b)
    {
        cout<<" true " <<endl;

    }
    else
    {
        cout<<" false " <<endl;

    }
    return 0;


}


#include <iostream>
#include <string.h> //for support the strcmp(a,b)=0
using namespace std;
int main(){
    char a[100],b[100];

    cout<<"Enter Character A :";cin>>a;
    cout<<"Enter Character B :";cin>>b;

    if(strcmp(a,b)==0)
    {
        cout<<"equals character :"<<endl;
    }
    else
    {
        cout<<"false :"<<endl;
    }
    return 0;


}
                             //password login project
#include <iostream>
using namespace std;
int main(){

    string username,password,confirmpassword;
    
    cout<<"__________login form__________"<<endl;
    cout<<"\t\tEnter Username :";cin>>username;
    cout<<"\t\Enter Password :";cin>>password;
    cout<<"\t\tPlease Enter the confirmpassword :";cin>>confirmpassword;

    if(username.empty())
    {
        cout<<"Please Enter Username :"<<endl;
    }
    else
    {
        if(username=="vy")
        {
             if(password=="123")
             {
                if(confirmpassword=="123")
                {
                    cout<<"Well come to etec center!"<<endl;
                }else{
                    cout<<"Invalid confirmpassword!"<<endl;
                }
             
             }else{
                cout<<"Invalid password!"<<endl;
                
             }

        }else{
            cout<<"Invalid username!"<<endl;
        }
        
        
        
        
    }
    return 0;

}

#include <iostream>
using namespace std;
int main(){

    char username[100];
    char password[100];
    char confirmpassword[100];

    cout<<"Enter username :"; cin>>username;
    cout<<"Enter password :"; cin>>password;
    cout<<"Enter confirmpassword :" ; cin>>confirmpassword;

    if(username.empty())
    { 
        cout<<"Please Enter Username :"<<endl;
    }
    else
    {
        if(username=="vy") 
        {
            if(password=="123")
            {
                if(confirmpassword=="123")
                { 
                    cout<<"Wellcome To My Heart:( "<<endl;
                }else{

                    cout<<"Invalid confirmpassword:"<<endl;
                }
            }else{
                cout<<"Invalid password:"<<endl;
            }
        }else{
            cout<<"Invalid Username:"<<endl;

        }
        
    }


return 0

}*/

// #include <iostream>
// #include <string.h>
// using namespace std;
// int main(){
    
//                                //register login
//    char username[100];
//    char password[100];
//    char confirmpassword[100];

// //    cout<<"______________[login]______________"<<endl;
// //    cout<<" Enter username : "; cin>>username;
// //    cout<<" Enter password : "; cin>>password;
// //    cout<<" Enter confirmpassword : "; cin>>confirmpassword;

//    if(empty(username)||empty(password)||empty(confirmpassword))
//    {
//     cout<<"please inter again."<<endl;
//    }
//    if{strcmp(username)

//    }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int a;
//     cout<<"enter valau a:";cin>>a;

//     if(a>0)
//     {
//         cout<<"A is a Max:"<<endl;

//     }
//     else if (a<0)
//     {
//         cout<<"A is a Min:"<<endl;
//     }
//     else
//     {
//         cout<<"A is a Mid:"<<endl;

//     }


//     return 0;
// }
   

// #include <iostream>
// using namespace std;
// int main(){
//     int code;
//     string name,sex;
//     float math,khmer,english,total,average;
//     char grade;

//     cout<<"Enter code :";cin>>code;
//     cout<<"Enter name :";cin>>name;
//     cout<<"Enter gender :";cin>>sex;
//     cout<<"Enter math score :";cin>>math;
//     cout<<"Enter khmer score :";cin>>khmer;
//     cout<<"Enter english score :";cin>>english;

//     total = math+khmer+english;
//     average = total / 3;

//     if(average  >90 && average <=100)
//     { 
//         grade = 'A';
//     }
//     else if(average > 80 && average <= 90)
//     { 
//         grade = 'B';
//     }
//     else if(average > 70 && average <= 80)
//     { 
//         grade = 'C';
//     }
//     else if(average> 60 && average <= 70)
//     {
//         grade = 'D';
//     }
//     else if(average > 50 && average <= 60)
//     {
//         grade = 'E';
//     }
//     else 
//     { 
//         grade = 'F';
//     }


//     cout<<"______________INFORMATION______________"<<endl;
//     cout<<"Code   : "<<code<<endl;
//     cout<<"Name   : "<<name<<endl;
//     cout<<"Gender : "<<sex<<endl;
//     cout<<"Math   : "<<math<<endl;
//     cout<<"Khmer  : "<<khmer<<endl;
//     cout<<"English: "<<english<<endl;
//     cout<<"________________________________________"<<endl;
//     cout<<"total   : "<<total<<endl;
//     cout<<"Average : "<<average<<endl;
//     cout<<"Grade   : "<<grade<<endl;

//     return 0;
// }
   



// #include <iostream>
// #include <string.h>
// using namespace std;
// int main()
// {
//    char username[100];
//    char password[100];
//    char confirmpassword[100];

//    cout<<"______________[LOGIN]______________"<<endl;
//    cout<<" Enter username : "; cin>>username;
//    cout<<" Enter password : "; cin>>password;
//    cout<<" Enter confirmpassword : "; cin>>confirmpassword;

//   if(empty(username)==0 || empty(password)==0 || empty(confirmpassword)==0)
//    {
//     cout<<"please Enter username and password again!"<<endl;
//    }
 
//    return 0;

// }


                   //ternary 

// #include <iostream>
// using namespace std;
// int main(){
//     int code;
//     string name,sex;
//     float math,khmer,english,total,average;
//     char grade;

//     cout<<"Enter code :";cin>>code;
//     cout<<"Enter name :";cin>>name;
//     cout<<"Enter gender :";cin>>sex;
//     cout<<"Enter math score :";cin>>math;
//     cout<<"Enter khmer score :";cin>>khmer;
//     cout<<"Enter english score :";cin>>english;

//     total = math+khmer+english;
//     average = total / 3;
//     grade=(average >= 90 && average <=100)? 'A':
//     (average >= 80 && average <= 90)? 'B':
//     (average >= 70 && average <= 80)? 'C':
//     (average >= 60 && average <= 70)? 'D':
//     (average >= 50 && average <= 60)? 'E':'F';

//     cout<<"_____________________INFORMATION______________________:";
//     cout<<"Code   : "<<code<<endl;
//     cout<<"Name   : "<<name<<endl;
//     cout<<"Gender : "<<sex<<endl;
//     cout<<"Math   : "<<math<<endl;
//     cout<<"Khmer  : "<<khmer<<endl;
//     cout<<"English: "<<english<<endl;
//     cout<<"________________________________________"<<endl;
//     cout<<"total   : "<<total<<endl;
//     cout<<"Average : "<<average<<endl;
//     cout<<"Grade   : "<<grade<<endl;

//     return 0;

// }




#include <iostream>
using namespace std;
int main()
{
    int code;
    string name;
    int qty;
    double price,discount,total,payment;


    cout<<"Enter Code  :";cin>>code;
    cout<<"Enter Name  :";cin.ignore();getline(cin,name);
    cout<<"Enter QTY   :";cin>>qty;
    cout<<"Enter Price :";cin>>price;


    total = qty * price;

    if(total > 0 && total <= 10)
    { 
        discount = (total * 10)/100;
        payment = total - discount;
    }
    else if(total >10 && total <= 20)
    {
        discount = (total * 20)/100;
        payment = total - discount; 
    }


    cout<<"___________________PROTUCTION___________________:";
    cout<<"Code     : "<<code<<endl;
    cout<<"Name     : "<<name<<endl;
    cout<<"Quantity : "<<qty<<endl;
    cout<<"Price    : "<<price<<endl;
    cout<<"===================PAYMENT=====================:";
    cout<<"Total     : "<<total<<endl;
    cout<<"discount  : "<<discount<<endl;
    cout<<"payment   : "<<payment<<endl;
    return 0;
    
}


// #include <iostream>
// using namespace std;
// int main()
// {
//     int use_old,use_new;
//     double total,payment;

//     cout<<"Enter Use Old  :";cin>>use_old;
//     cout<<"Enter Use New  :";cin>>use_new;
//     total = use_new - use_old;

//     if(total > 0 && total <= 10)
//     {
//         payment = total * 350;
//     }
//     else if(total > 10 && total <= 20)
//     {
//         payment = 10 * 350 + (total - 10)*450;
//     }
//     else if(total > 20 && total <= 10)
//     { 
//         payment = (10 * 350) + (10 * 450)+ (total - 20) * 550;
//     }
//     else if(total > 20 && total <= 30)
//     {
//         payment = (10 * 350) + (10 * 450) + (10 * 650) + (total - 30) * 650;
//     }

//     cout<<"=========================OUTPUT========================="<<endl;
//     cout<<"Use_old    : "<<use_old<<"kw"<<endl;
//     cout<<"Use_new    : "<<use_new<<"kw"<<endl;
//     cout<<"Total      : "<<total<<"kw"<<endl;
//     cout<<"Payment    : "<<payment<<"reil"<<endl;
//     cout<<"_________________________THANK YOU_______________________"<<endl;
//     return 0;



// }

                                //    TERNARY_FORM

// #include <iostream>
// using namespace std;
// int main()
// {
//     int use_old,use_new;
//     double total,payment;

//     cout<<"Enter Use Old  :";cin>>use_old;
//     cout<<"Enter Use New  :";cin>>use_new;
//     total = use_new - use_old;

//     payment = (total > 0 && total <=10)?: total * 350;
//     (total > 10 && total <= 20)? : 10 * 350 + (total - 10)*450;
//     (total > 20 && total <= 30)? : 10 * 450 + 10 * 550 + (total - 20)*550;
//     (total > 30 && total <= 40)? : 10 * 350 + 10 * 450 + 10 * 550 + (total - 30)*650;
//     (total > 40 && total <= 50)? : 10 * 350 + 10 * 450 + 10 * 550 + 10 * 650 + (total - 40)*750;
//     (total > 50 && total <= 60)? : 10 * 350 + 10 * 450 + 10 * 550 + 10 + 650 + 10 * 750 + (total - 50)*850;
//     10*350 + 10*450 + 10*550 + 10*650 + 10*750 + (total - 50)*850; 

//     cout<<"=========================OUTPUT========================="<<endl;
//     cout<<"Use_old    : "<<use_old<<"kw"<<endl;
//     cout<<"Use_new    : "<<use_new<<"kw"<<endl;
//     cout<<"Total      : "<<total<<"kw"<<endl;
//     cout<<"Payment    : "<<payment<<"reil"<<endl;
//     cout<<"_________________________THANK YOU_______________________"<<endl;
//     return 0;


// }


// #include <iostream>
// #include <cstring>
// #include <string.h>
// using namespace std;
// int main(){

//     int a=10;
//     string messege;
//     messege = (a>0)?"max":(a<0)?"min":"zero";
//     cout<<"messege :"<<endl;
    
//     return 0;
// }



// #include <iostream>
// #include <cstring>
// #include <string.h>
// using namespace std;
// int main()
// {
//     char name[100],password[100],confirmpassword;

//     cout<<"Enter Name            :";cin>>name;
//     cout<<"Enter Password        :";cin>>password;
//     cout<<"Enter Confirmpassword :";cin>>confirmpassword;

//     if(strlen(name)==0) || (strlen(password)==0) || (strlen(confirmpassword)==0)
//     { 
//         cout<<"name is empty!:"<<endl;
//     }

// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     int a=100,b=200;
//     int c;

//     // swap
//     c = a;
//     a = b;
//     b = c;

//     cout<<"Value A :"<<a<<endl;
//     cout<<"Value B :"<<b<<endl;

//     return 0;
// }

//     strcpy (ប្ដូរឈ្មោះ)

    // #include <iostream>
    // #include <string.h>
    // using namespace std;
    // int main()
    // {
    //     char name1[] = "Dara",name2[]= "Sokha",newname[10];
    //     // swap
    //     strcpy(newname,name1);
    //     strcpy(name1,name2);
    //     strcpy(name2,newname);

    //     cout<<"Value A  : "<<name1<<endl;
    //     cout<<"Value B  : "<<name2<<endl;

    //     return 0;
    // }













