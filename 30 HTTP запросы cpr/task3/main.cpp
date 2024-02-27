#include <iostream>
#include <map>
#include <cpr/cpr.h>
using namespace std;

int main()
{
	string pathGet = "http://httpbin.org/get";
	string pathPost = "http://httpbin.org/post";
	cpr::Response r;

	map<std::string, std::string> arguments;
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

		arguments.insert(key,value);
	}

	if(key == "get" || value == "get")
	{
		string getArgs = "?";
		for (map<string,string>::iterator i = arguments.begin(); i != arguments.end(); i++)
		{
			getArgs += i->first + "=";
			getArgs += i->second + "&";
		}
		r = cpr::Get(cpr::Url(pathGet), cpr::Header("args", getArgs.c_str()));
		cout << r.text << endl;
	}
	else if(key == "post" || value == "post")
	{
		cpr::Payload payload{};
		for (map<string, string>::iterator i = arguments.begin(); i != arguments.end(); i++)
		{
			payload.Add(cpr::Pair((string)i->first.c_str(), (string)i->second.c_str()));
		}
		r = cpr::Post(cpr::Url(pathPost), cpr::Header("form", payload));
		cout << r.text << endl;
	}
	return 0;
}