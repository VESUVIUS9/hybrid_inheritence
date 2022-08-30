#include <iostream>
using namespace std;

class resident   // craete a class named resident
{  
  protected:       //protected data sepcifier
      char resi_name[50];
      string resi_id;
  public:
      void getdata(void)
      {
    cout<<"Enter Residents name:";
    cin>>resi_name;
    cout<<"\nEnter Residents id:";
    cin>>resi_id;
      }
      void displaydata(void)     //recallimg the user defined function
      {
    cout<<"\n Resident's name  : "<<resi_name;
    cout<<"\nResident's id   : "<<resi_id;
      }
};

class vehicle : virtual public resident     // class details is inhereting from class resident
{
  protected:
       string Veh_name;
       string veh_model;
       string veh_type;
       string veh_no;
  public:
       void getvehicledetails(void)
       {
     cout<<"\nEnter Vehicle Type  : ";
     cin>>veh_type;
     cout<<"\nEnter Vehicle name (Company) : ";
     cin>>Veh_name;
     cout<<"\nEnter Vehicle Model name : ";
     cin>>veh_model;
     cout<<"\n Enter Vehicle Number :";
     cin>>veh_no;

       }
       void displayvehicledetails(void)
       {
      cout<<"\n Vehicle Type:" <<veh_type; 
      cout<<"\n Vehicle name : "<<Veh_name;
      cout<<"\n Vehicle Model : "<<veh_model;
      cout<<"\n Vehicle Number : "<<veh_no;

       }
};
class Accessories: virtual public resident    //class joining is inheriting from class resident
{
  protected:
   int table1;
   int chairs1;
   int fans1;
   int cooler1;
   int showcase1;
   int beds1;

public:
 void getaccessories(void)
 {
    cout<<"\n No of Tables:";
    cin>>table1;
    cout<<"\n No of Chairs:";
    cin>>chairs1;
    cout<<"\n No of Fans:";
    cin>>fans1;
    cout<<"\n No of Desert cooler:";
    cin>>cooler1;
    cout<<"\n No of Showcase:";
    cin>>showcase1;
    cout<<"\n No of beds:";
    cin>>beds1;
 }
 void displayaccessories(void)
 {
    cout<<"\n No of Tables:" <<table1;
    cout<<"\n No of Chairs:" <<chairs1;
    cout<<"\n No of Fans:"<<fans1;
    cout<<"\n No of Desert cooler:"<<cooler1;
    cout<<"\n No of Showcase:"<<showcase1;
    cout<<"\n No of beds:"<<beds1;
 }
};

class maindata : public vehicle, public Accessories
{
    public:
    void create(void)
    {
       cout<<"\n GETDATA\n";
       getdata();
       getvehicledetails();
        getaccessories();
    }

    void display(void)
    {
      
      cout<<"\nDISPLAY DETAILS\n";
      displaydata();
      displayvehicledetails();
      displayaccessories();
    }
};

int main()
{
    maindata e1;    //obj named e1
    int choice;
    while(1)
    {

       cout<<"\nResident's DATABASE\n";
       cout<<"\nChoose Operation you want to perform\n";
       cout<<"1)  Create  Record\n";
       cout<<"2)  Display Record\n";
       cout<<"3)  Exit\n";
       cout<<"\nEnter your choice: ";
       cin>>choice;
       switch(choice)
       {
         case 1 : e1.create();
              break;
         case 2 : e1.display();
              break;
         case 3 : exit(1);
        default : cout<<"\n\nInvalid Choice\n";
       }
    }
    return 0;
}