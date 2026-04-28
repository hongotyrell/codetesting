#include <iostream>

using namespace std;

int main()
{
	string username;
	float passcode;

	do
	{
		cout << "Enter your username: " << endl;
		cin >> username;
		if (username == "Tyrell")
		{

			cout << "Enter your passcode: " << endl;
			cin >> passcode;
			if (passcode == 2273)
			{
				cout << "Access granted. Welcome, Tyrell!" << endl;
				exit(0);
			}
			else if (passcode == 0000)
				exit(0);
			else
			{
				cout << "Invalid passcode. Please try again." << endl;
				continue;
			}

			exit(0);
		}
		else if(username=="quit")
			exit(0);
		else
		{
			cout << "Invalid username. Please try again." << endl;
		}
	}
	while (true);
		return 0;
}
