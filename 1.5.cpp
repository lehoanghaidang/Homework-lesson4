#include <iostream>
#include <io.h>
#include <fcntl.h>
using namespace std;

int main()
{
	/*Bài 5. Viết chương trình giải phương trình bậc 2 có dạng : ax ^ 2 + bx + c = 0
		Dữ liệu đầu vào                                           	Dữ liệu đầu ra
		a = 1, b = 2, c = 3                                       	Vô nghiệm
		a = 0, b = 2, c = 4                                       	Có nghiệm - 2
		a = 0, b = 0, c = 0                                       	Vô số nghiệm
		a = 0, b = 0, c = 4                                       	Vô nghiệm
		a = 1, b = 2, c = 1                                       	Nghiệm kép - 1
		a = 1, b = 3, c = 2                                       	Có 2 nghiệm phân biệt - 1 và - 2*/

	// Tiếng việt có dấu
		_setmode(_fileno(stdout), _O_U16TEXT);

	// Khai báo
		int a, b, c;

	// Nhập
		wcout << L"\n Nhập a: ";
		wcin >> a;
		wcout << L"\n Nhập b: ";
		wcin >> b;
		wcout << L"\n Nhập c: ";
		wcin >> c;

	// Xử lí và xuất
	// Tính delta
		int delta = b * b - 4 * a * c;

	// Xử lí
		if (a == 0)
		{
			if (b != 0)
			{
				wcout << L"\n Phương trình có nghiệm " << -c / b;
			}
			else
			{
				if (c == 0)
				{
					wcout << L"\n Phương trình có vô số nghiệm";
				}
				else
				{
					wcout << L"\n Phương trình vô nghiệm";
				}
			}
		}
		else
		{
			if (delta > 0)
			{
				wcout << L"\n Phương trình có 2 nghiệm phân biệt x1 = " << (-b + sqrt(delta)) / 2 * a
					<< L", x2 = " << (-b - sqrt(delta)) / 2 * a;
			}
			else if (delta == 0)
			{
				wcout << L"\n Phương trình có nghiệm kép x1 = x2 = " << -b / 2 * a;
			}
			else
			{
				wcout << L"\n Phương trình vô nghiệm";
			}
		}

}