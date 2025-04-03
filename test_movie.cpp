#include<iostream>
#include<string>
#include<vector>
using namespace std;
struct Movie { 
      int id;
      string title;
      string release;
      string time;
      string category;
      float price;
};

const int ROWS = 10;
const int COLUMNS = 10;
char seats[ROWS][COLUMNS];

struct Ticket {
      int movieId;
      string movieTitle;
      char row;
      int hall;
      int seat;
      float price;
      string type;
};
void insertMovie(){
      Movie movie;
      cout<<"Enter movie ID: ";cin>>movie.id;
      cout<<"Enter title: ";cin.ignore();getline(cin,movie.title);
      cout<<"Enter release date: ";getline(cin,movie.release);
      cout<<"Enter time: ";getline(cin,movie.time);
      cout<<"Enter category: ";getline(cin,movie.category);
      cout<<"Enter price: ";cin>>movie.price;
      cout<<"Movie added successfully!\n";
}
void DisplaySeats(){
      cout<<"Seat Availability : ";
      for(int i=0;i<ROWS;i++){
            for(int j=0;j<COLUMNS;j++){
                  cout<<seats[i][j]<<"  "; 
            }
            cout<<endl;
      }
}
void checkSeats(){
      DisplaySeats();
}
int main(){
      int choice;
      do{
            cout<<"[1 .Insert Movie] \n[2.Check & Book Movie]\n[3.Check Ticket]\n[4.Check Seat]\n[5.Exit]\nEnter choice: ";
            switch(choice){
                  case 1: 
                        insertMovie();
                        break;
                  case 2:
                        checkSeats();
                        break;
            }
      }while(choice!=5);
      return 0;
}

