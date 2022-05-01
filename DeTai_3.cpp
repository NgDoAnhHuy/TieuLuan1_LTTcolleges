#include <iostream>
#include <cmath>
using namespace std;

void nhap(int& n);
void Tongle1n(int n);
void BoiCua4(int n);
bool CheckSHT(int n);
void XuatSHT(int n);
void DemKySo(int n);
int main() {
	int n;
	nhap(n);
	Tongle1n(n);
	BoiCua4(n);
	XuatSHT(n);
	DemKySo(n);
	return 0;
}
void nhap(int& n) {
	do
	{
		cout << "Nhap gia tri duong n: ";
		cin >> n;
	} while (n <= 0 && cout << "Vui long nhap gia tri duong " << endl);
}
void Tongle1n(int n) {
	int s = 0;
	for (int i = 1; i <= n; i += 2)
	{
		s += i;
	}
	cout << "1. Tong cac so le tu 1 den " << n << " la: " << s << endl;
}
void BoiCua4(int n) {
	cout << "2. Cac gia tri la boi cua 4 : ";
	for (int i = 1; i <= n; i++)
	{
		if (i % 4 == 0)
		{
			cout << i << " ";
		}
	}
	cout << endl;
}
bool CheckSHT(int n) {
	int s = 0;
	for (int i = 1; i <= n / 2; i++)
	{
		if (n % i == 0) s += i; 
	}
	if (s == n) return true;
	else return false;
}
void XuatSHT(int n) {
	cout << "3. Cac gia tri la SHT : ";
	int s = 0;
	for (int i = 1; i <= n; i++)
	{
		if (CheckSHT(i) == true)
			cout << i << " ";
	}
	cout << endl;
}
void DemKySo(int n) {
	int dem = 0;
	int temp = n;
	while (temp != 0)
	{
		dem++;
		temp = temp / 10;
	}
	cout << "4. Co : " << dem << " Ky so ";
}
