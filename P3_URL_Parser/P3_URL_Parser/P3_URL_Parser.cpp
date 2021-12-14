

#include <iostream>
#include <cstring>

using std::string;
using std::cout;
using std::endl;
using std::cin;


int main()
{
	string url, scheme, authority, path;
	int pos, pos2, pos3, num;

	cout << "Please enter a URL: ";
	cin >> url;
	pos = url.find(":");

	for (int i = 0; i < url.size(); i++) {
		if (url[i] == '/' && url[i + 1] == '/') {
			pos2 = i;
			i++;
		}
		else if (url[i] == '/' && url[i + 1] != '/') {
			pos3 = i;
			break;
		}
	}

	scheme = url.substr(0, pos + 1);

	num = ((url.size() - pos) - (url.size() - pos3)) - 1;
	authority = url.substr(pos2, num);

	path = url.substr(pos3);

	cout << endl;
	cout << "Scheme = " << scheme << endl;
	cout << "Authority = " << authority << endl;
	cout << "Path = " << path << endl;

	return 0;

}

