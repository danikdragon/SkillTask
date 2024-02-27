#include <iostream>
#include <map>
#include <vector>
#include <cpr/cpr.h>
using namespace std;

int main()
{
	string pathGet = "http://httpbin.org/get";
	string pathPost = "http://httpbin.org/post";
	cpr::Response r;

	vector<cpr::Pair> arguments;
	string key, value;

	while(true)
	{
		cout << "Enter key or (get|post): ";
		cin >> key;
		if (key == "get" || key == "post")
			break;

		cout << "Enter value or (get|post): ";
		cin >> value;
		if (value == "get" || value == "post")
			break;

		arguments.push_back({ key,value });
	}

	if(key == "get" || value == "get")
	{
		string getArgs = "?";
		for (int i = 0; i < arguments.size(); i++)
			getArgs += (arguments[i].key + "=") + (arguments[i].value + "&");

		r = cpr::Get(cpr::Url(pathGet + getArgs));
		cout << r.text << endl;
	}
	else if (key == "post" || value == "post")
	{
		cpr::Payload payload = cpr::Payload(arguments.begin() ,arguments.end());
		r = cpr::Post(cpr::Url(pathPost),
			cpr::Payload(payload));
		cout << r.text << endl;
	}
	return 0;
}