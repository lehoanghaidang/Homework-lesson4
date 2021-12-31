#include <iostream>
#include <io.h> // Mở _setmode
#include <fcntl.h> // Mở _O_U16TEXT
using namespace std;

int main()
{
	/*Bài 2. Viết chương trình nhập vào 3 số nguyên. Tìm giá trị nhỏ nhất
	Dữ liệu đầu vào                                           	Dữ liệu đầu ra
	a = 1, b = 2, c = 3                                       	1
	a = 2, b = 1, c = 1                                       	1
	a = 6, b = 6, c = 6                                       	6 */

	// Xuất tiếng việt có dấu
		_setmode(_fileno(stdout), _O_U16TEXT);

	// Khai báo
		int a, b, c;

	// Nhập
		wcout << L"\n Số nguyên thứ nhất: ";
		cin >> a;
		wcout << L"\n Số nguyên thứ hai: ";
		cin >> b;
		wcout << L"\n Số nguyên thứ ba: ";
		cin >> c;

	// Xử lí và xuất
		if (a <= b && a <= c)
		{
			wcout << L"\n Giá trị nhỏ nhất là: " << a << endl;
		}
		else if (b <= c && b <= a)
		{
			wcout << L"\n Giá trị nhỏ nhất là: " << b << endl;
		}
		else
		{
			wcout << L"\n Giá trị nhỏ nhất là: " << c << endl;
		}

		wcout << endl;
		return 0;
}