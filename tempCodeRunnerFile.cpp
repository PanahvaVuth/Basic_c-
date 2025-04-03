
#include <iostream>
#include <vector>
#include <string>
using  namespace std;
struct Movie {
    int id;
    string title,format,release,time,category;
    float price;
};
const int ROWS = 10;
const int COLUMNS = 10;
char seats[ROWS][COLUMNS];

struct Ticket {
    int movieId;
    string movieTitle;
    char row;
    int seat;
    int hall;
    float price;
    string type;
};
vector<Movie> movies;
vector<Ticket> tickets;

void initializeSeats()
{
    for (int i=0;i<ROWS;i++)
    { 
        for(int j=0;j<COLUMNS;i++)
        {
            seats[i][j] ='0';
            // 0 for open seat
        }
    }
}
void displaySeats()
{
    cout<<"\nSeat Availability : \n";
    for(int i=0;i<ROWS;i++)
    {
        for(int j=0;j<COLUMNS;j++)
        {
            cout<<  seats[i][j] <<"  ";
        }
        cout<< endl;
    }
}
void insertMovie()
{
    Movie movie;
    cout << "Enter movie ID       : ";cin>>movie.id;
    cout << "Enter title          : ";cin.ignore();getline(cin,movie.title);
    cout << "Enter release date   : ";getline(cin,movie.release);
    cout << "Enter format (2D/3D) : ";getline(cin,movie.format);
    cout << "Enter price          : ";cin>>movie.price;
    cout << "Enter time           : ";cin.ignore();getline(cin,movie.time);
    cout << "Enter category       : ";getline(cin,movie.category);

}
void checkMovie()
{
    cout<<"Available Movie : \n";
    for(const auto & movie : movies)
    {
        cout<<"ID : " << movie.id << ", Title: " << movie.title << "\n";
    }
}
void bookTicket()
{
    int movieId;
    cout<<"Enter movie ID to book : ";cin>>movieId;

    for (const auto & movie : movies)
    {
        if (movie.id == movieId)
        {
            Ticket ticket;
            ticket.movieId = movie.id;
            ticket.movieTitle = movie.title;
            cout<<"Enter row (0-9): ";int row;cin>>row;
            cout<<"Enter seat number (0-9): ";int column;cin>>column;
            if (row >= 0 && row < ROWS && column >= 0 && column < COLUMNS && seats[row][column] == '0')
            {
                seats[row][column]='X';
                // X for booked seat
                ticket.row = 'A' + row;
                ticket.seat = column + 1 ;
                cout << "Enter Hall number:";cin>>ticket.hall;
                cout << "Enter seat type (VIP/Normal):";cin>>ticket.type;
                ticket.price = movie.price;
                tickets.push_back(ticket);
                cout<<"Ticket booked succesfully!\n";
            }
            else
            {
                cout<<"Seat not available!\n";
            }
            return;

        }
    }
    cout<<"Movie not found.\n";
}
void checkTickets()
{
    cout<<"Booked Ticket : \n";
    for(const auto & ticket : tickets)
    {
        cout<<"Movie : " << ticket.movieTitle <<",Row:"<< ticket.row <<",seat: "<<ticket.seat<<",Hall "<<ticket.hall<<",Type: "<<ticket.type<<"\n";
    }
}

void checkSeats()
{
    displaySeats();
}
int main()
{
    initializeSeats();
    int choice;
    do{
        cout<<"\n1. Insert Movie\n2. Check & Book Movie\n3. Check Ticket\n4. Check Seat\n5. Exit\nEnter Choice:";cin>>choice;
        switch (choice){
            case 1:
                insertMovie();
                break;
            case 2:
                checkMovie();
                bookTicket();
                break;
            case 3:
                checkTickets();
                break;
            case 4:
                checkSeats();
                break;
            case 5:
                cout<< "Exiting...\n";
                break;
            default:
            cout<<"Invalid choice!\n";
    
        }

    }while(choice != 5);
    return 0;
}