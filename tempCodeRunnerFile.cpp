#include <iostream>
using namespace std;
int main()
{
    int code;
    string name;
    int qty;
    double price,discount,total,payment;


    cout<<"Enter Code  :";cin>>code;
    cout<<"Enter Name  :";cin>>name;
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


    cout<<"___________________PROTUCTION___________________:"<<endl;
    cout<<"Code     : "<<code<<endl;
    cout<<"Name     : "<<name<<endl;
    cout<<"Quantity : "<<qty<<endl;
    cout<<"Price    : "<<price<<endl;
    cout<<"===================PAYMENT=====================:"<<endl;
    cout<<"Total     : "<<total<<endl;
    cout<<"discount  : "<<discount<<endl;
    cout<<"payment   : "<<payment<<endl;
    return 0;
    
}