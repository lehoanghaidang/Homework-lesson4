#include <iostream>
#include <io.h>
#include <fcntl.h>

using namespace std;

int main()
{
	/*Bài 6. Viết chương trình nhập vào hai giá trị tháng và năm.Xuất ra số ngày tương ứng của tháng đó.
	Dữ liệu đầu vào                                           	Dữ liệu đầu ra
	thang = 1, nam = 2010                                		Có 31 ngày
	thang = 6, nam = 2012                                		Có 30 ngày
	thang = 2, nam = 2000                                		Có 29 ngày
	thang = 2, nam = 2005                                		Có 28 ngày*/

	// Tiếng việt có dấu
		_setmode(_fileno(stdout), _O_U16TEXT);

	// Khai báo
		int month, year;

	// Nhập
		wcout << L"\n Nhập tháng ( từ 1 -> 12): ";
		wcin >> month;
		wcout << L"\n Nhập năm: ";
		wcin >> year;

	// Xử lí và xuất
		switch (month)
		{
		case 4: case 6: case 9: case 11:
		{
			wcout << L"\n Tháng " << month << L" trong năm " << year << L" có 30 ngày";
			break;
		}
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
		{
			wcout << L"\n Tháng " << month << L" trong năm " << year << L" có 31 ngày";
			break;
		}
		case 2:
		{
			if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
			{
				wcout << L"\n Tháng " << month << L" trong năm " << year << L" có 29 ngày";
			}
			else
			{
				wcout << L"\n Tháng " << month << L" trong năm " << year << L" có 28 ngày";
			}
			break;
		}
		default:
		{
			wcout << L"\n XXX Tháng bạn nhập không hợp lệ vui lòng nhập từ 1 -> 12! XXX ";
			break;
		}
		}
		wcout << endl;
		return 0;

}