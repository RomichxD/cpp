#include <iostream>
#include <string>
using namespace std;
class Recognizer
{
private:
	string str;
public:
	void get_str()
	{
		cin >> str;
	}

	void put_str()
	{
		cout << str;
	}

	void func()
	{
		int matrix[5][15] =
		{
			{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
			{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
			{ 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 1, 1, 1 },
			{ 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 1, 1, 1, 4, 1 },
			{ 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 1, 1, 2, 1, 0 }
		};
		int length = str.length();
		int a = 2, b;
		for (int i = 0; i < length; i++)
		{
			int temp = str[i];
			switch (temp)
			{
			case '0': b = matrix[a][0]; break;
			case '1': b = matrix[a][1]; break;
			case '2': b = matrix[a][2]; break;
			case '3': b = matrix[a][3]; break;
			case '4': b = matrix[a][4]; break;
			case '5': b = matrix[a][5]; break;
			case '6': b = matrix[a][6]; break;
			case '7': b = matrix[a][7]; break;
			case '8': b = matrix[a][8]; break;
			case '9': b = matrix[a][9]; break;
			case '+': b = matrix[a][10]; break;
			case '-': b = matrix[a][11]; break;
			case ';': b = matrix[a][12]; break;
			case '.': b = matrix[a][13]; break;
			case '#': b = matrix[a][14]; break;
			default: b = 1;
			}
			a = b;
		}
		switch (b)
		{
		case 1:
		{
			cout << "STRING is WRONG" << endl;
			break;
		}
		case 0:
		{
			cout << "STRING is RIGHT" << endl;
			break;
		}
		}
	}
};

void main()
{
	Recognizer rec;
	rec.get_str();
	rec.func();
	system("pause");
}