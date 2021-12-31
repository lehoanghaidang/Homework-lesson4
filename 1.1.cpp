#include <iostream>
#include <io.h> // Mở _setmode
#include <fcntl.h> // Mở _O_U16TEXT
using namespace std;

int main()
{
	//Bài 1. Viết chương trình nhập vào 2 số nguyên. Tìm giá trị lớn nhất
	//Dữ liệu đầu vào                                           	Dữ liệu đầu ra
	//	a = 1, b = 2                                                 	2
	//	a = 2, b = 1                                                 	2
	//	a = 6, b = 6                                                 	6

	// Xuất tiếng việt có dấu
		_setmode(_fileno(stdout), _O_U16TEXT);

	// Khai báo
		int a, b;

	// Nhập
		wcout << L"\n Số nguyên thứ nhất: ";
		wcin >> a;
		wcout << L"\n Số nguyên thứ hai: ";
		wcin >> b;

	// Xử lí và xuất
		if (a > b)
		{
			wcout << L"\n Giá trị lớn nhất là: " << a << endl;
		}
		else
		{
			wcout << L"\n Giá trị lớn nhất là: " << b << endl;
		}

		wcout << endl;
		return 0;
}





