#include<iostream>
//#include<stdlib.h>
using namespace std;

template<class T>
class sort 
{
     private:
		T arr[20];
		int n;
     public:
	
	void getdata()
	{
	cout<<"Enter no of elements : ";
	cin>>n;
	
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	}
	void Sort()
	{
	
		T temp;
		for(int i=0;i<n;i++)
		{
			int min=i;
			for(int j=i+1;j<n;j++)
			{
				if(arr[min]>arr[j])
				{
					
					min=j;
					
				}
			}
				temp=arr[i];
				
				arr[i]=arr[min];
				arr[min]=temp;
			
		}
	}
	
	void display()
	{
		cout<<"The Sorted array is : ";
		for(int i=0;i<n;i++)
		{
			cout<<" "<<arr[i];
		
		}
		cout<<"\n";
	
	}
};
int main()
{
	sort<int>S1;
	sort<float>S2;
	sort<char>S3;
	
	int a;
	do
	{
	cout<<"1.Sort an integer array  \n";
	cout<<"2.Sort an floating array  \n";
	cout<<"3.Sort an character array  \n";
	cout<<"4.Exit From the program.\n";
	cout<<"Enter your choice : ";
	cin>>a;
	switch(a)
	{
		case 1:
			S1.getdata();
			S1.Sort();
			S1.display();
			break;
		case 2:
			S2.getdata();
			S2.Sort();
			S2.display();		
			break;
		case 3:
			S3.getdata();
			S3.Sort();
			S3.display();
			break;
		case 4:
			exit(0);
			break;
		default:
			cout<<"Please enter a valid choice. ";
	}
	}while(a!=4);
	return 0;
}
		



