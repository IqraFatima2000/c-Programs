#include<iostream>
using namespace std;
int main()
{
	float array[10]={-1,-43,23,54,76,12,56,65,89,98};
	int a;
	for(int i=0; i<10; i++)
	{
		for(int j=0; j<10; j++)
		{
			if(array[i]<array[j])
			{
			a = array[i];
			array[i] = array[j];
			array[j] = a;
	    	}
		}
   }
for(int m=0; m<10; m++)
{
	cout << array[m] << endl;
}
return 0;
}
