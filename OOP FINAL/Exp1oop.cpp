#include<iostream>
#include<stdlib.h>
using namespace std;
class complex
{
  private:
  int x;
  int y;
  
  public:
  	complex()
  	{
 	x=0;
 	y=0;
 	}
  	
        
    complex operator +(complex c)
    {
	 complex temp;
	 temp.x=x+c.x;
	 temp.y=y+c.y;
	 return temp;
    }
        
        friend istream & operator >> (istream &input,complex &c)
        {
        	cout<<"Enter the real part of the complex number : ";
        	input>>c.x;
        	cout<<"Enter the imaginary part of the copmlex number : ";
        	input>>c.y;
        	
        }
        
        friend ostream & operator << (ostream &out , complex &c)
        
        {
        out<<c.x<<"+ i"<<c.y;
        }
        
        complex operator *(complex c)
        {
        	complex temp;
        	temp.x=(x*c.x)-(y*c.y);
        	temp.y=(x*c.y)-(y*c.x);
        	return temp;
		}
        
};


int main()
{
 complex c1,c2,c3,c4;
 
 
 int z;
 do
 {
  cout<<"-------------------menu driven program---------------------\n";
  cout<<"1.Default constructor : \n";
  cout<<"2.Input complex numbers : \n";
  cout<<"3.Display the complex numbers : \n";
  cout<<"4.Addition of the complex number : \n";
  cout<<"5.Multiplication of complex number \n";
  cout<<"6.Exit from the program.\n";
  cin>>z;
 
 switch(z)
 {
 case 1:
 	cout<<c1;
 	break;
 case 2:
 	cout<<"Enter the first complex number : \n";
 	cin>>c2;
 	cout<<"\n";
 	cout<<"enter the second complex number : \n";
 	cin>>c3;
 	cout<<"\n";
 	break;
 case 3:
 	cout<<"1st complex number : ";
 	cout<<c2;
 	cout<<"\n";
 	cout<<"2nd complex number is : ";
 	cout<<c3;
 	cout<<"\n";
 	break;
 case 4:
 	cout<<"addition of the two numbers is : ";
 	
 	c4=c3+c2;
 	cout<<c4;
 	cout<<"\n";
 	break;
 case 5:
 	cout<<"multiplication of the two numbers is : ";
 	
 	c4=c3*c2;
 	
cout<<c4;
 	cout<<"\n";
 	break;
 case 6:
 	exit(0);
 	break;
 }
 }while(z!=6);
 
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

