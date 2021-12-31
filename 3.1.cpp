#include <iostream>
#include <io.h>
#include <fcntl.h>
using namespace std;

int main()
{
	/*Bài 1. Viết chương trình nhập vào 4 số thực bất kỳ.Tìm giá trị lớn nhất
	Điều kiện chương trình chỉ được dùng tối đa 2 biến*/

	// Xuất tiếng việt có dấu
		_setmode(_fileno(stdout), _O_U16TEXT);

	// Khai báo
		double a, b;

	// Nhập
		wcout << L"\n Số thực thứ nhất: ";
		cin >> a;
		wcout << L"\n Số thực thứ hai: ";
		cin >> b;

	// Xử lí và xuất
		if (a >= b) // 1
		{
			wcout << L"\n Số thực thứ ba: ";
			cin >> b;
			if (a >= b) // 1.1
			{
				wcout << L"\n Số thực thứ tư: ";
				cin >> b;
				if (a >= b) // 1.1.1
				{
					wcout << L"\n Giá trị lớn nhất là: " << a << endl;
				}
				else // 1.1.2
				{
					wcout << L"\n Giá trị lớn nhất là: " << b << endl;
				}
			}
			else // 1.2
			{
				wcout << L"\n Số thực thứ tư: ";
				cin >> a;
				if (a >= b) // 1.1.1
				{
					wcout << L"\n Giá trị lớn nhất là: " << a << endl;
				}
				else // 1.1.2
				{
					wcout << L"\n Giá trị lớn nhất là: " << b << endl;
				}
			}
		}
		else // 1
		{
			wcout << L"\n Số thực thứ ba: ";
			cin >> a;
			if (a >= b) // 1.1
			{
				wcout << L"\n Số thực thứ tư: ";
				cin >> b;
				if (a >= b) // 1.1.1
				{
					wcout << L"\n Giá trị lớn nhất là: " << a << endl;
				}
				else // 1.1.2
				{
					wcout << L"\n Giá trị lớn nhất là: " << b << endl;
				}
			}
			else // 1.2
			{
				wcout << L"\n Số thực thứ tư: ";
				cin >> a;
				if (a >= b) // 1.1.1
				{
					wcout << L"\n Giá trị lớn nhất là: " << a << endl;
				}
				else // 1.1.2
				{
					wcout << L"\n Giá trị lớn nhất là: " << b << endl;
				}
			}
		}

		wcout << endl;
		return 0;
}

