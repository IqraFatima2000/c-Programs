#include <iostream>
#include<iomanip>
#include<string>
using namespace std;

int main()
{
    int n;
  

    cout << "Enter total number of Player scores: ";
    cin >> n;
    float score[n];
    cout << endl;
    for(int i = 0; i < n; ++i)
    {
       cout << "Enter score of player " << i + 1 << " : ";
       cin >> score[i];
    }

    for(i = 1;i < n; ++i)
    {
       if(score[0] < score[i])
           score[0] = score[i];
    }
    cout << "Largest score = " << score[0];

    return 0;
}
