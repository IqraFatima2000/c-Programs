#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int main()
{
	bool m=false;
	int NumberOfPlayers;
	cout << "Enter the Number of Players: ";
	cin >> NumberOfPlayers;
	string players[NumberOfPlayers];
	
	for(int i=0;i<NumberOfPlayers;i++)
{
	cin >> players[i];
}
string name;



cout << "Enter the name of player: ";
cin >> name;
for(int j=0;j<NumberOfPlayers;j++)
{
	if(players[j]==name)
	{
	 m=true;		
	}
}
if(m==true)
 {
 cout<< "Welcome back " << name << endl;
}
else
{
cout << "Nice to meet you " << name << endl;
}
	return 0;
}
