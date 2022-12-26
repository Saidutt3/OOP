#include<iostream>
#include<stdlib.h>
#include<fstream>
using namespace std;
class student
{
   private:
   	int rollno;
   	string name,div;
   public:
    	void getdata()
    	{
    	fstream f1;
		f1.open("Student_Data.txt",ios::out|ios::app);  //out to write in a file
		cout<<"Enter the name of the student : ";
		cin>>name;
				
		cout<<"\n";
		cout<<"Enter the Roll Number of the student : ";
		cin>>rollno;\
		f1<<"Name of the student is :  "<<name<<"\nRoll no of the student is :  "<<rollno;
		f1.close();
		cout<<"\n";
		
	}
	void display()
	{
		fstream f1;
		f1.open("Student_Data.txt",ios::in);	// i/p = read , o/p = write
   		cout<<"Name of the student is : "<<name<<"\n";
   		cout<<"Roll Number of the student is : "<<rollno<<"\n";
   		cout<<"\n";
   		f1.close();
   		
   	}
};
int main()
{
  student S1;
  int z;
  do
  {
  cout<<"Enter the choices you want to perform : \n";
  cout<<"1.Add the data of the students : \n";
  cout<<"2.Display the data of the student : \n";
  cout<<"3.Exit from the program : \n";
  cin>>z;
  switch(z)
  {
  case 1:
  	S1.getdata();
  	break;
  case 2:
  	S1.display();
  	
  	break;
  case 3:
  	exit(0);
  	break;
  }
  }while(z!=3);	
}
