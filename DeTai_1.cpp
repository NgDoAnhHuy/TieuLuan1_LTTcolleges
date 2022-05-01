#include <iostream>
#include <cmath>
using namespace std;

void nhap(int& a, int& b);
void Giatrilonnhat(int a, int b);
int UCLN(int a, int b);
void XuatUCLN(int a,int b);
bool CheckSNT(int a);
void XuatSNT(int a);
bool CheckSHT(int a);
void XuatSHT(int a);

int main() {
	int a,b;
	nhap(a, b);
	Giatrilonnhat(a, b);
	XuatUCLN(a, b);
	XuatSNT(a);
	XuatSHT(a);
	cout << endl;
	cout << "*/ DeTai_1 /*";
	cout << endl;
	cout << "*/ Code by AnhHuy /*";
	cout << endl;
	return 0;
}

void nhap(int& a, int& b) {
	do
	{
		cout << "Nhap gia tri a: "; cin >> a;
		cout << "\nNhap gia tri b: "; cin >> b;
	} while ((a <= 0 || b <= 0) && cout << "Vui long nhap gia tri duong " << endl);
}
void Giatrilonnhat(int a , int b) {
	int max = a;
	if (b >= max) max = b;
	cout << "2. Gia tri lon nhat : " << max;
}
int UCLN(int a , int b) {
	if (a == 0 || b == 0) {
		return a + b;
	}
	while (a != b) {
		if (a > b) {
			a -= b; // a = a - b
		}
		else {
			b -= a;
		}
	}
	return a;
}
void XuatUCLN(int a, int b) {
	cout <<"\n3. Uoc chung lon nhat: " << UCLN(a, b);
}
bool CheckSNT(int a) {
	if (a < 2) {
		return false;
	}
	for (int i = 2; i < (a - 1); i++) {
		if (a % i == 0) {
			return false;
		}
	}
	return true;
}
void XuatSNT(int a) {
	cout << endl;
	if (CheckSNT(a) == true) cout << "4. So " << a << " la so nguyen to";
	else cout << "4. So " << a << " Khong phai so nguyen to";
	cout << endl;
}
bool CheckSHT(int a) {
	int sum = 0;
	for (int i = 1; i <= a / 2; i++) {
		if (a % i == 0)
			sum += i;
	}
	if (sum == a) return true;
	return false;
}
void XuatSHT(int a) {
	if (CheckSHT(a) == true) cout << "5. So " << a << " la so hoan thien";
	else cout << "5. So " << a << " Khong phai so hoan thien";
}