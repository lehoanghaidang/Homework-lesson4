#include <iostream>
#include <io.h> // Mở _setmode
#include <fcntl.h> // Mở _O_U16TEXT

using namespace std;

int main()
{

	/*Bài 4. Viết chương trình nhập vào 2 biến tháng và năm.Xuất ra số ngày của tháng đó
	Không được dùng câu lệnh điều kiện và cấu trúc rẽ nhánh.*/

	// Nhập, xuất tiếng việt có dấu
		_setmode(_fileno(stdin), _O_U16TEXT);
		_setmode(_fileno(stdout), _O_U16TEXT);

	// Khai báo 
		int month, year;



	// Nhập 2 số nguyên 
		wcout << L" \n Nhập năm: "; // Dùng wcout và L để xuất tiếng việt có dấu
		wcin >> year;
		wcout << L" \n Nhập tháng: ";
		wcin >> month;

	// Kiểm tra nhập
		wstring kt_nhap = (month > 0 && month <= 12 && year > 0) ? L"\nTháng và năm hợp lệ! " : L"\nTháng và năm bạn nhập chưa hợp lệ! ";
		wcout << kt_nhap;

	// Xử lí
		wstring xu_li = (month == 4 || month == 6 || month == 9 || month == 11) ? L"có 30 ngày." 
			: ((month == 2 && year % 4 == 0 && year % 100 != 0) || (month == 2 && year % 400 == 0)) ? L"có 29 ngày."
			: (month == 2) ? L"có 28 ngày." : L"có 31 ngày.";

	// Xuất
		wcout << L"\n\nTháng " << month << L" trong năm " << year;
		wcout << " " << xu_li << endl;

		wcout << endl;
	return 0;
}
