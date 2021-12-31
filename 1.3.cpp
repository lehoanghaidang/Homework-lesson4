#include <iostream>
#include <io.h> // Mở _setmode
#include <fcntl.h> // Mở _O_U16TEXT
#include <string> // Dùng getline
using namespace std;

int main()
{
	/*Bài 3. Viết chương trình nhập vào điểm của sinh viên gồm điểm chuyên cần(10 %),
	điểm giữa kỳ(30 %), điểm cuối kỳ(60 %).
	Tính điểm trung bình và xếp loại theo quy ước sau :
		- Điểm trung bình < 5          = > loại D
		- Điểm trung bình >= 5 và < 7  = > loại C
		- Điểm trung bình >= 7 và < 9  = > loại B
		- Điểm trung bình >= 9         = > loại A  */

	// Nhập xuất tiếng việt có dấu
		_setmode(_fileno(stdout), _O_U16TEXT);
		_setmode(_fileno(stdin), _O_U16TEXT);

	// Khai báo
		wstring name;
		double cc, gk, ck;

	// Nhập
		wcout << L"\n Nhập tên sinh viên: ";
		getline(wcin, name);
		wcout << L"\n Nhập điểm chuyển cần ( từ 0 đến 10 ): ";
		wcin >> cc;
		wcout << L"\n Nhập điểm giữa kì ( từ 0 đến 10 ): ";
		wcin >> gk;
		wcout << L"\n Nhập điểm cuổi kì ( từ 0 đến 10 ): ";
		wcin >> ck;

	// Xử lí và xuất
	// Tính điểm
		double diem = ck * 0.1 + gk * 0.3 + ck * 0.6;

	// So sánh
		if (diem < 5)
		{
			wcout << L"\n*Sinh viên: " << name << L"\n Điểm chuyên cần: " << cc << L"\n Điểm giữa kì: " << gk
				<< L"\n Điểm cuối kì: " << ck << L"\n=> ĐIỂM TRUNG BÌNH: " << diem << L" , XẾP LOẠI: D";
		}
		else if (diem < 7)
		{
			wcout << L"\n*Sinh viên: " << name << L"\n Điểm chuyên cần: " << cc << L"\n Điểm giữa kì: " << gk
				<< L"\n Điểm cuối kì: " << ck << L"\n=> ĐIỂM TRUNG BÌNH: " << diem << L" , XẾP LOẠI: C";
		}
		else if (diem < 9)
		{
			wcout << L"\n*Sinh viên: " << name << L"\n Điểm chuyên cần: " << cc << L"\n Điểm giữa kì: " << gk
				<< L"\n Điểm cuối kì: " << ck << L"\n=> ĐIỂM TRUNG BÌNH: " << diem << L" , XẾP LOẠI: B";
		}
		else if (diem <= 10)
		{
			wcout << L"\n*Sinh viên: " << name << L"\n Điểm chuyên cần: " << cc << L"\n Điểm giữa kì: " << gk
				<< L"\n Điểm cuối kì: " << ck << L"\n=> ĐIỂM TRUNG BÌNH: " << diem << L" , XẾP LOẠI: A";
		}

		wcout << endl;
		return 0;
}