#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main()
{
	string string;
	int result, x;
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
			if (x == 0) cout<<"Error";
			else result = result/x;
			}
                else {cout<<"Error"; stop = true;}
	}
        if (!stop) cout<<result;
}
