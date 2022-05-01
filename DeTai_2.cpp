#include <iostream>
#include <cmath>
using namespace std;

void nhap(int& a, int& b, int& c);
void timsolonnhat(int a, int b, int c);
bool checktamgiac(int a, int b, int c);
void tinhdientichvachieucao(int a, int b, int c);
void xuattamgiac(int a, int b, int c);

int main() {
	int a, b, c;
	nhap(a, b, c);
	timsolonnhat(a, b, c);
	xuattamgiac(a, b, c);
	tinhdientichvachieucao(a, b, c);
	cout << endl;
	cout << "*/ DeTai_2 /*";
	cout << endl;
	cout << "*/ Code by AnhHuy /*";
	cout << endl;
	return 0;
}

void nhap(int& a, int& b, int& c) {
	do
	{
		cout << "Nhap gia tri a: "; cin >> a;
		cout << "\nNhap gia tri b: "; cin >> b;
		cout << "\nNhap gia tri c: "; cin >> c;
	} while ((a <= 0 || b <= 0 || c <= 0) && cout << "Vui long nhap gia tri duong " << endl);
}
void timsolonnhat(int a, int b, int c) {
	int max = a;
	if (max < b) {
		max = b;
	}
	if (max < c) {
		max = c;
	}
	cout << "\n2.So lon nhat trong 3 so " << a << ", " << b << ", " << c << " la: " << max;
}
bool checktamgiac(int a, int b, int c) {
	if ((a + b > c) && (a + c > b) && (b + c > a)) return true;
	else return false;
}
void xuattamgiac(int a, int b, int c) {
	if (checktamgiac(a, b, c) == true)cout << "\n3. Day la do dai tam giac";
	else cout << "\n3. Day khong phai la do dai tam giac";
}
void tinhdientichvachieucao(int a, int b, int c) {
	int s = 0;
	int p = 0;
	int ha = 0;
	int hb = 0;
	int hc = 0;
	if (checktamgiac(a, b, c) == true)
	{
		p = (a + b + c) / 2;
		s = sqrt(p * (p - a) * (p - b) * (p - c));
	}
	cout << "\n4.Dien tich tam giac la : " << s;
	cout << "\nChieu cao canh a : " << (2 * s) / a;
	cout << "\nChieu cao canh b : " << (2 * s) / b;
	cout << "\nChieu cao canh c : " << (2 * s) / c;
}