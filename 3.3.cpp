#include <iostream>
#include <io.h> // Mở _setmode
#include <fcntl.h> // Mở _O_U16TEXT
using namespace std;

int main()
{
	/*Bài 3. Viết chương trình nhập vào 2 số nguyên dương a và b.Tìm giá trị lớn nhất.
	Không được dùng câu lệnh điều kiện */                                            	

	// Xuất tiếng việt có dấu
		_setmode(_fileno(stdout), _O_U16TEXT);
		_setmode(_fileno(stdin), _O_U16TEXT);

	// Khai báo
		int a, b;

	// Nhập
		wcout << L"\n Số nguyên thứ nhất: ";
		wcin >> a;
		wcout << L"\n Số nguyên thứ hai: ";
		wcin >> b;

	// Xử lí và xuất
		int xl = (a >= b) ? a : b;
		
		// Xuất
		wcout << L"\nGiá trị lớn nhất là " << xl;
		wcout << endl;

	return 0;
}





