#include<iostream>
#include<stdio.h>
#include<string>
#include <fstream>
using namespace std;
class Customer
{

public:
    int customer;
    char name[100];
    int id;
    int mobile;
    int bill;


void show_customer_details()
{

}
void show_customer_info_single_room()

    {

       ifstream file;
       file.open("SingleRoomAC.txt");
       cout<<"\n\n";
       while(!file.eof())
    {
       cout<<"Customer Name:"<<endl;
       file >> name;
       printf("%s\n", name);
       cout<<"Customer ID:"<<endl;
       file >> id;
       cout << id << endl;
       cout<<"Customer Mobile Number:"<<endl;
       file >>mobile;
       cout << mobile << endl;
       file>>bill;
       cout<<"You'r Total Bill is: "<<bill<<endl;
       cout<<"\n\n";
       }
       file.close();


    }
    void show_customer_info_double_room()

    {

       ifstream file;
       file.open("SingleRoomAC.txt");
       cout<<"\n\n";
       while(!file.eof())
    {
       cout<<"Customer Name:"<<endl;
       file >> name;
       printf("%s\n", name);
       cout<<"Customer ID:"<<endl;
       file >> id;
       cout << id << endl;
       cout<<"Customer Mobile Number:"<<endl;
       file >>mobile;
       cout << mobile << endl;
       file>>bill;
       cout<<"You'r Total Bill is: "<<bill<<endl;
       cout<<"\n\n";
       }
       file.close();


    }

void show_customer_info_single_room_ac()

    {
       ifstream file;
       file.open("SingleRoomAC.txt");
       cout<<"\n\n";
       while(!file.eof())
    {
       cout<<"Customer Name:"<<endl;
       file >> name;
       printf("%s\n", name);
       cout<<"Customer ID:"<<endl;
       file >> id;
       cout << id << endl;
       cout<<"Customer Mobile Number:"<<endl;
       file >>mobile;
       cout << mobile << endl;
       file>>bill;
       cout<<"You'r Total Bill is: "<<bill<<endl;
       cout<<"\n\n";
       }

       file.close();


    }
void show_customer_info_double_room_ac()

    {

       ifstream file;
       file.open("DoubleRoomAC.txt");
       cout<<"\n\n";
       while(!file.eof())
    {
       cout<<"Customer Name:"<<endl;
       file >> name;
       printf("%s\n", name);
       cout<<"Customer ID:"<<endl;
       file >> id;
       cout << id << endl;
       cout<<"Customer Mobile Number:"<<endl;
       file >>mobile;
       cout << mobile << endl;
       file>>bill;
       cout<<"You'r Total Bill is: "<<bill<<endl;
       cout<<"\n\n";
    }
    file.close();
}

void set_customer_info_single_room(int n)

    {
       ofstream file;
       file.open("SingleRoom.txt",ios::app);
       cout<<"\n\n";
       cout<<"Enter Customer Name:"<<endl;
       scanf("%s", name);
       file << name << endl;
       cout<<"Enter Customer ID:"<<endl;
       cin>>id;
       file << id << endl;
       cout<<"Enter Customer Mobile Number:"<<endl;
       cin>>mobile;
       file<<mobile;
        bill=1000*n;
       //cin>>bill;
       file<<bill;
       file.close();


    }
    void set_customer_info_double_room(int n)

    {
       ofstream file;
       file.open("DoubleRoom.txt",ios::app);
       cout<<"\n\n";
       cout<<"Enter Customer Name:"<<endl;
       scanf("%s", name);
       file << name << endl;
       cout<<"Enter Customer ID:"<<endl;
       cin>>id;
       file << id << endl;
       cout<<"Enter Customer Mobile Number:"<<endl;
       cin>>mobile;
       file<<mobile;
        bill=1500*n;
       //cin>>bill;
       file<<bill;
       file.close();


    }
    void set_customer_info_single_room_ac(int n)

    {
       ofstream file;
       file.open("SingleRoomAC.txt",ios::app);
       cout<<"\n\n";
       cout<<"Enter Customer Name:"<<endl;
       scanf("%s", name);
       file << name << endl;
       cout<<"Enter Customer ID:"<<endl;
       cin>>id;
       file << id << endl;
       cout<<"Enter Customer Mobile Number:"<<endl;
       cin>>mobile;
       file<<mobile;
       bill=2000*n;
       //cin>>bill;
       file<<bill;
       cout<<"\n\n";
       file.close();


    }
    void set_customer_info_double_room_ac(int n)

    {
       ofstream file;
       file.open("DoubleRoomAC.txt",ios::app);
       cout<<"\n\n";
       cout<<"Enter Customer Name:"<<endl;
       scanf("%s", name);
       file << name << endl;
       cout<<"Enter Customer ID:"<<endl;
       cin>>id;
       file << id << endl;
       cout<<"Enter Customer Mobile Number:"<<endl;
       cin>>mobile;
       file<<mobile;
        bill=2500*n;
       //cin>>bill;
       file<<bill;
       cout<<"\n\n";
       file.close();


    }

};

class Room:public Customer
{
    public:
    int single_number_of_rooms=10;
    int double_number_of_rooms=10;
    int single_number_of_rooms_ac=10;
    int double_number_of_rooms_ac=10;


    void room_information()
    {

        cout<<"Single Room without AC Available:"<<single_number_of_rooms<<endl;
        cout<<"Double Room without AC Available:"<<double_number_of_rooms<<endl;
        cout<<"Single Room with AC Available:"<<single_number_of_rooms_ac<<endl;
        cout<<"Double Room with AC Available:"<<double_number_of_rooms_ac<<endl;
    }
    void add_room()
    {

    }
    void single_room()
{
    int n;
    if(single_number_of_rooms<=0)
    {
        cout<<"Sorry Room Is Not Available"<<endl;
    }
    else
    {
    cout<<"Enter Number OF Room You Need:"<<endl;
    cin>>n;
    single_number_of_rooms=single_number_of_rooms-n;
    set_customer_info_single_room(n);
    cout<<"Single Room without AC Available:"<<single_number_of_rooms<<endl;
    }


}
void double_room()
{
    int  n;
    if(double_number_of_rooms<=0)
    {
        cout<<"Sorry Room Is Not Available"<<endl;
    }
    else
    {
    cout<<"Enter Number OF Room You Need:"<<endl;
    cin>>n;
    double_number_of_rooms=double_number_of_rooms-n;
    set_customer_info_double_room(n);
    cout<<"Double Room without AC Available:"<<double_number_of_rooms<<endl;
    }


}
void single_room_ac()
{
    int  n;
    if(single_number_of_rooms_ac<=0)
    {
        cout<<"Sorry Room Is Not Available"<<endl;
    }
    else
    {
    cout<<"Enter Number OF Room You Need:"<<endl;
    cin>>n;
    single_number_of_rooms_ac=single_number_of_rooms_ac-n;
    set_customer_info_single_room_ac(n);
    cout<<"Single Room with AC Available:"<<single_number_of_rooms_ac<<endl;
    }

}
void double_room_ac()
{
    int  n;
    if(double_number_of_rooms_ac<=0)
    {
        cout<<"Sorry Room Is Not Available"<<endl;
    }
    else
    {
    cout<<"Enter Number OF Room You Need:"<<endl;
    cin>>n;
    double_number_of_rooms_ac=double_number_of_rooms_ac-n;
    set_customer_info_double_room_ac(n);
    cout<<"Double Room with AC Available:"<<double_number_of_rooms_ac<<endl;
    }

}
};

class Booking:public Room
{
  public:

  void  main_menu()
{
    int choice;
    int choice2;
    int choice3;

    while(choice!=5)
    {
        cout<<" MAIN MENU "<<endl;
        cout<<"1.Room Information"<<endl;
        cout<<"2.Book A Room"<<endl;
        cout<<"3.Show Customer Details"<<endl;
        cout<<"4.Exit"<<endl;
        cout<<"\n\n";
        cout<<"Enter Your Choice: "<<endl;

        cin>>choice;

        switch(choice)
        {
            case 1:room_information() ;
                    break;
            case 2: add_room();
            cout<<"\n\n";
            cout<<" CHOSE YOU'R ROOM TYPE"<<endl;
            cout<<"1.Single Room without AC "<<endl;
            cout<<"2.Double Room without AC "<<endl;
            cout<<"3.Single Room with AC "<<endl;
            cout<<"4.Double Room with AC "<<endl;
            cin>>choice2;
            switch(choice2)
            {
                case 1:single_room();
                break;
                case 2: double_room();
                break;
                case 3: single_room_ac();
                break;
                case 4:double_room_ac();
                break;
                cout<<"\n\n";
            }
                    break;

            case 3: add_room();
            cout<<"\n\n";
            cout<<" CUSTOMER INFORMATION"<<endl;
            cout<<"1.Single Room without AC "<<endl;
            cout<<"2.Double Room without AC "<<endl;
            cout<<"3.Single Room with AC "<<endl;
            cout<<"4.Double Room with AC "<<endl;
            cin>>choice3;
            switch(choice3)
            {
                case 1:show_customer_info_single_room();
                break;
                case 2:show_customer_info_double_room();
                break;
                case 3:show_customer_info_single_room_ac();
                break;
                case 4:show_customer_info_double_room_ac();
                break;
                cout<<"\n\n";
            }
                    break;

            case 4: break;
            default:
                    {
                        cout<<"Wrong choice"<<endl;
                        cout<<"Press any key to continue"<<endl;

                    }
        }
    }
}
};

int main()
{
    Booking h;
    h.main_menu();
}

