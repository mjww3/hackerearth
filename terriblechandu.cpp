#include <iostream>
#include <string>
#include <iostream>
#include <vector>
using namespace std;
 
int main()
{
	int t;
	string s;
	cin>>t;
	while(t--)
	{
		///lets input the string
		cin>>s;
		string temp="";
		for(int i=s.length()-1;i>=0;i--)
		{
			temp = temp+s[i];	
		}
		cout<<temp<<endl;
	}
    return 0;
}