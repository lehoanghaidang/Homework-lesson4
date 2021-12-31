#include <iostream>
#include <io.h>
#include <fcntl.h>
using namespace std;

int main()
{
	/*Bài 4. Viết chương trình giải phương trình bậc nhất có dạng : ax + b = 0
		Dữ liệu đầu vào                                           	Dữ liệu đầu ra
		a = 1, b = 2                                                 	Có nghiệm - 2
		a = 0, b = 2                                                 	Vô nghiệm
		a = 0, b = 0                                                 	Vô số nghiệm*/

	// Xuất tiếng việt có dấu
		_setmode(_fileno(stdout), _O_U16TEXT);

	// Khai báo
		int a, b;

	// Nhập
		wcout << L"\n Nhập a: ";
		wcin >> a;
		wcout << L"\n Nhập b: ";
		wcin >> b;

	// Xử lí và xuất
		if (a != 0)
		{
			wcout << L"\n Phương trình có nghiệm " << -b / a;
		}
		else
		{
			if (b == 0)
			{
				wcout << L"\n Phương trình có vô số nghiệm";
			}
			else
			{
				wcout << L"\n Phương trình vô nghiệm";
			}
		}
		return 0;
}