#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)
			cout << " ";
		for (int j = 0; j < n - i; j++)
			cout << "*";
		for (int j = 0; j < n - i - 1; j++)
			cout << "*";
		cout << endl;
	}
}

/*int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)
			cout << " ";
		for (int j = 0; j < n - i; j++)
			cout << "*";
		for (int j = 0; j < n - i-1; j++)
			cout << "*";
		cout << endl;
	}*/

	/*int n;
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < i; j++)
				cout << " ";
			for (int j = 0; j < n-i ; j++)
				cout << "*";
			cout << endl;
		}*/

		/*SetConsoleOutputCP(1251);
			int n;
			cin >> n;
			for (int i = 0; i < n; i++)
			{
				for (int j = 0; j < n - i - 1; j++)
					cout << " ";
				for (int j = 0; j < i + 1; j++)
					cout << "*";
				cout << endl;
			}*/

			/*SetConsoleOutputCP(1251);
				int n;
				cin >> n;
				for (int i = 0; i < n; i++)
				{
					for (int j = 0; j < n - i; j++)
						cout << " ";
					for (int j = 0; j < i + 1; j++)
						cout <<"*";
					cout << endl;
				}*/

				/*SetConsoleOutputCP(1251);
					int n;
					cin >> n;
					for (int i = 0; i < n; i++)
					{
						for (int j = 0; j < i + 1; j++)
							cout << "*";
						cout << endl;
					}*/

					/*SetConsoleOutputCP(1251);
						int n;
						cin >> n;
						for (int i = 0; i < n; i++)
						{
							for (int j = 0; j < n-i; j++)
								cout << "*";
								cout << endl;
						}*/

						/*int  end = 100000;
							for (int a = 1; a < end; a++)
								for (int i = 1; i * i <= end; i++)
									if (a % (i * i) == 0 && a % (1ll * i * i * i) != 0)
										cout << "a=" << a << '\t' << i << endl;*/