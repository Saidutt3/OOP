#include<iostream>
#include<stdlib.h>
using namespace std;
class publications
{ 
  protected:
	  string title;
	  float price;
  public: 
      void getdata()
      {
       cout<<"Enter the title of the boook : ";
       cin.ignore();
       
       getline(cin,title);
  
       cout<<"Enter the price of the book : ";
       cin>>price;
      }
      void dis()
      {
      
       cout<<"Title of the book is : "<<title;
       cout<<"Price of the book is : "<<price;
       
      }  
};
class book:protected publications
{
   int page_count;
   public:
   
   void getdata()
   {
   try
   {
   publications::getdata();
   cout<<"Enter the page count of the book : ";
   cin>>page_count;
   
   if(page_count==0)
   throw page_count;
   }
   catch(...)
   {
   cout<<"enter a valid page count.";
   page_count=0;
   }
   }
   void display()
   {
   cout<<"Name of the book is :"<<title;
   cout<<"\nPage count of the book : "<<page_count;
   cout<<"\n";
   }
};
class audio:protected publications
{
   float playing_time;
   public:
   
   void adddata()
   {
   try
   {
   publications::getdata();
   cout<<"Enter the playing time : ";
   cin>>playing_time;
   
   if(playing_time==0)
   throw playing_time;
   }
   catch(...)
   {
   cout<<"enter a valid playing time.";
   playing_time=0;
   }
   }
   void display()
   {
   cout<<"Playing time of the audio : "<<playing_time;
   }
};
int main()
{
  publications p1;
  book b1;
  audio a1;
    
  int z;
  //menu driven program:
  do
  {
  cout<<"\n\n\n----------- Publishing company ---------\n\n\n";
  cout<<"Enter the option you need to perform : \n";
  cout<<"1.Add book name data.\n";
  cout<<"2.Add audio data.\n";
  cout<<"3.Display book data.\n";
  cout<<"4.Display audio data.\n";
  cout<<"5.Exit from the program.\n";
  cin>>z;
  
  switch(z)
  {
    case 1:
    	b1.getdata();
    	break;
    case 2:
    	a1.adddata();
    	break;
    case 3:
    	b1.display();
    	break;
    case 4:
    	a1.display();
    	break;
    case 5:
    	exit(0);
    	break;
    default:
    cout<<"enter the valid choice.";
  }
  }while(z!=5);
}
  
