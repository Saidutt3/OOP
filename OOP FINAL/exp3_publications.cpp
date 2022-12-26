#include<iostream>
#include<stdlib.h>
using namespace std;
class publication 
{
string title;
float price;
public:
void getdata()
{
cout<<"enter title :";
cin>>title;
cout<<"enter price :";
cin>>price;
}
void display()
{
cout<<"title :"<<title<<"\n";
cout<<"price :"<<price<<"\n";
}

};

class book : public publication
{
int pagecount;
public:
void getdata()
{
publication::getdata();
cout<<"enter no pages :";
cin>>pagecount;
}

void display()
{
publication::display();
cout<<"pagecount :"<<pagecount<<"\n";
}

};

class audio : public publication
{
float min;
public:
void getdata()
{
publication::getdata();
cout<<"playtime in mins :";
cin>>min;
}

void display()
{
publication::display();
cout<<"playtime (min):"<<min<<"\n";
}
};

int main()
{


book b1[3];



audio a1[3];

// menu driven 
int z,count1=0,count2=0,i;


		 do
		 {
 		 cout<<"___-______menu driven_______"<<"\n";
		 cout<<"enter the options you need to perform: "<<"\n";
	 	 cout<<"1.add book data:"<<"\n";
		 cout<<"2.show book data:"<<"\n";
	 	 cout<<"3.add audio data:"<<"\n";
		 cout<<"4.show audio data:"<<"\n";
		 cout<<"5.exit"<<"\n";
	 	 cin>>z;
		 switch(z)
{
 			case 1:
	  			b1[count1].getdata();
	  			count1++;
	  			
	  			break;
	  		 case 2:
				
	  		 	for(i=0;i<count1;i++)
	  		 	{
	  			b1[i].display();
	  			}
	  			break;
			 case 3:
			
				a1[count2].getdata();
	  			count2++;
	  			
	  			break;

				
			case 4:
				
	  		 	for(i=0;i<count2;i++)
	  		 	{
	  			a1[i].display();
	  			}
	  			break;				
						
	  		 case 5:
	  			exit(0);
	  			break;
	 		 default:
	  			cout<<"Enter a valid choice.";
		}
		 }while(z!=5);
  	




}


