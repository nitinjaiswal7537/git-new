#include <iostream>
using namespace std;

int main() {
	//code
	string str;int change=0;
	char c,d;
	cin>>str;
	for(int i=0;i<str.length();i++)
	{
	    
	 if(str.at(i)==str.at(i+1))
	 {
	    change++; 
	 }
	 
	 cout<<change;
	}
	return 0;
}
