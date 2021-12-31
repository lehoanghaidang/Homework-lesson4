#include <iostream>
#include <io.h> // Mở _setmode
#include <fcntl.h> // Mở _O_U16TEXT
using namespace std;

int main()
{
	/*Bài 2. Viết chương trình nhập vào 2 số nguyên dương a và b.Hoán vị 2 giá trị cho nhau
	Không được dùng thêm biến nào khác ngoài a và b  */                                             	

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

		if (a >= b)
		{
			a = a - b; 
			b = a + b;
			a = b - a;
		}
		else
		{
			b = b - a;
			a = b + a;
			b = a - b;
		}
		wcout << L"\n Giá trị của a: " << a << endl;
		wcout << L"\n Giá trị của b: " << b << endl;

		wcout << endl;
		return 0;
}





