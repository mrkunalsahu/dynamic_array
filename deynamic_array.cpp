#include<iostream>
#include<iomanip>
#include<limits>
using namespace std;
int main()
{
    int n,i;
	int *arr,*head;
	head=arr;
	while(1)
	{

		cin>>*arr;
		arr=new int[1];
		++arr;
		if(cin.peek()=='\n')
			break;
	}
	cout<<"\nAll the elements entered by you are : ";
	while(arr!=head)
		{
			cout<<*head;
         ++head;
     }
	return 0;
}