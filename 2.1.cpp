#include <iostream>
#include <io.h>
#include <fcntl.h>

using namespace std;

int main()
{
	/*Bài 1. Nhập vào số nguyên dương có ít nhất 1 chữ số và tối đa 3 chữ số.
		Đọc số nguyên dương đó bằng chữ
		Dữ liệu đầu vào                                           			Dữ liệu đầu ra
			123                                                      	Một trăm hai mươi ba
			402                                                      	Bốn trăm linh hai
			999                                                      	Chín trăm chín mươi chín
			10                                                        	Mười
			20                                                        	Hai mươi */

	// Tiếng việt có dấu
		_setmode(_fileno(stdout), _O_U16TEXT);

	// Khai báo
		int a;

	// Nhập
		wcout << L"\n Nhập số cần đọc ( từ 0 -> 999): ";
		wcin >> a;

	// Xử lí và xuất
	// Tạo 3 biến tram, chuc, don vi
		int tram = a / 100;
		int chuc = (a - tram * 100) / 10;
		int don_vi = a - tram * 100 - chuc * 10;

		wcout << L"\n Số đó đọc là";

	// Xử lí
		switch (tram)
		{
		case 0: break;
		case 1: wcout << L" một"; break;
		case 2: wcout << L" hai"; break;
		case 3: wcout << L" ba"; break;
		case 4: wcout << L" bốn"; break;
		case 5: wcout << L" năm"; break;
		case 6: wcout << L" sáu"; break;
		case 7: wcout << L" bảy"; break;
		case 8: wcout << L" tám"; break;
		case 9: wcout << L" chín"; break;
		}

		if (tram >= 1)
		{
			wcout << L" trăm";
		}

		switch (chuc)
		{
		case 0:
		{
			if (tram >= 1)
			{
				wcout << L" linh";
			}
			break;
		}
		case 1: wcout << L" mười"; break;
		case 2: wcout << L" hai mươi"; break;
		case 3: wcout << L" ba mươi"; break;
		case 4: wcout << L" bốn mươi"; break;
		case 5: wcout << L" năm mươi"; break;
		case 6: wcout << L" sáu mươi"; break;
		case 7: wcout << L" bảy mươi"; break;
		case 8: wcout << L" tám mươi"; break;
		case 9: wcout << L" chín mươi"; break;
		}

		switch (don_vi)
		{
		case 0:
		{
			if (a == 0)
			{
				wcout << L" không";
			}
			break;
		}
		case 1: wcout << L" một"; break;
		case 2: wcout << L" hai"; break;
		case 3: wcout << L" ba"; break;
		case 4: wcout << L" bốn"; break;
		case 5: wcout << L" năm"; break;
		case 6: wcout << L" sáu"; break;
		case 7: wcout << L" bảy"; break;
		case 8: wcout << L" tám"; break;
		case 9: wcout << L" chín"; break;
		}

		wcout << "!";
		wcout << endl;

		return 0;
}