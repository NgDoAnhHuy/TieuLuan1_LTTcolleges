#include <iostream>
#include <cmath>
using namespace std;
//Anh Huy
void nhap(int& n);
void BoiCua3(int n);
void xuathaidong(int n);
bool CheckSNT(int n);
void XuatSNT(int n);
void KySo(int n);

int main() {
	int n;
	nhap(n);
	BoiCua3(n);
	xuathaidong(n);
	XuatSNT(n);
	KySo(n);
	cout << endl;
	cout << "*/ DeTai_4 /*";
	cout << endl;
	cout << "*/ Code by AnhHuy /*";
	cout << endl;
}

void nhap(int& n) {
	do
	{
		cout << "Nhap gia tri n: ";
		cin >> n;
	} while (n <= 0 && cout << "Vui long nhap gia tri duong " << endl);
}
void BoiCua3(int n) {
	cout << "2. Cac gia tri la boi cua 3 : ";
	for (int i = 1; i <= n; i++)
	{
		if (i % 3 == 0)
		{
			cout << i << " ";
		}
	}
	cout << endl;
}
void xuathaidong(int n) {
	cout << "3. Xuat ra gia tri le dong 1 : ";
	for (int i = n; i >= 1; i--)
	{
		if (i % 2 != 0)
		cout << " " << i;
	}
	cout << "\n3. Xuat ra gia tri chan dong 2 : ";
	for (int i = 2; i <= n; i += 2)
	{
		cout << " " << i;
	}
}
bool CheckSNT(int n) {
	if (n < 2) {
		return false;
	}
	for (int i = 2; i < (n - 1); i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}
void XuatSNT(int n) {
	cout << endl;
	cout << "4. Cac so nguyen to tu 1 -> n : ";
	for (int i = 1; i <= n; i++)
	{
		if (CheckSNT(i)) cout << i << " ";
	}
}
void KySo(int n) {
	int max = 0;
	do
	{
		int i = n % 10;
		if (i > max)
		{
			max = i;
		}
	} while (n /= 10);
	cout << "\n5.so ky so lon nhat la : " << max;
}
	
