#include <iostream>
#include <string>
//#include "cpr/cpr.h"
#include <cpr/cpr.h>
using namespace std;

int main()
{
	string command;
	while (command != "exit")
	{
		cout << "Enter command: ";
		cin >> command;
		if (command == "get")
		{
			cpr::Response r = cpr::Get(cpr::Url("http://httpbin.org/get"));
			cout << r.text << "\n";
		}
		else if (command == "post")
		{
			cpr::Response r = cpr::Post(cpr::Url("http://httpbin.org/post"));
			cout << r.text << "\n";
		}
		else if (command == "put")
		{
			cpr::Response r = cpr::Put(cpr::Url("http://httpbin.org/put"));
			cout << r.text << "\n";
		}
		else if (command == "delete")
		{
			cpr::Response r = cpr::Delete(cpr::Url("http://httpbin.org/delete"));
			cout << r.text << "\n";
		}
		else if (command == "patch")
		{
			cpr::Response r = cpr::Patch(cpr::Url("http://httpbin.org/patch"));
			cout << r.text << "\n";
		}
		else if (command == "html")
		{
			cpr::Response r = cpr::Get(cpr::Url("http://httpbin.org/html")
				, cpr::Header({ { "accept", "text/html" } }));
			for (int i = r.text.find("<h1>") + 4; i < r.text.find("</h1>"); i++)
			{
				cout << r.text[i];
			}
			cout << endl;
		}
	}
	return 0;
}