#include <iostream>
#include <string>
using namespace std; 
int main()
{
	int n;
	string s= "codeforces";
	cin >>n;
	for (int  i = 0; i < n; i++)
	{
		char c;
		cin >> c;
		string s = "codeforces";
		
		if (s.find(c)!=-1)
		{
			cout << "yes"<<endl;
		}
		else
			cout << "no"<<endl;
	}
	return 0;

}

