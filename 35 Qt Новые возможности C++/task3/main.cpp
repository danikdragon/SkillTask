#include <iostream>
#include <string>
#include <filesystem>

using namespace std;
namespace fs = filesystem;

int main()
{
	auto recursiveGetFileNamesByExtension = [](fs::path path, const string extension)
	{
			for (auto& p : fs::recursive_directory_iterator(path))
				if (p.path().extension() == extension)
					cout << p.path().filename() << '\n';

	};
	recursiveGetFileNamesByExtension("..\\..\\..\\..\\", ".cpp");
	cout << endl;
	recursiveGetFileNamesByExtension("..\\..\\..\\..\\", ".txt");
	cout << endl;
	recursiveGetFileNamesByExtension("..\\..\\..\\..\\", ".exe");
	cout << endl;

	//по непонятным мне причинам этот участок кода уходит в ошибку, какую бы я директорию не вписал бы туда
	//string path;
	//while (path != "exit")
	//{
	//	cout << "Enter your path or exit: ";
	//	cin >> path;
	//	if (fs::is_regular_file(path))
	//		cout << "This is file, enter dir\n";
	//	else
	//	{
	//		string extension;
	//		cout << "Enter your extension: ";
	//		cin >> path;
	//		recursiveGetFileNamesByExtension(path, extension);
	//	}
	//}

	return 0;
}