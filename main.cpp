#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main()
{
	string string;
	int result, x,a;
	char op;
	getline(cin,string);
	istringstream stream(string);
	stream>>result;
        bool stop = false; 
	while(stream>>op) {
		stream>>x;
		if(op=='+') result = result+x;
	        else if(op=='-') result = result-x;
	        else if(op=='*') result = result*x;
	        else if(op=='/') {
			if (x == 0) {cout<<"An error has occurred while division by zero";a=1;}
			else result = result/x;
			}
                else {cout<<"Error"; stop = true;}
	}
        if (!stop) { if(a!=1) cout<<result;};
}
