#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solution(int A,int B,int N);
int Ext( int a, int b, int& x, int& y)
{
	if (b == 0) {
		x = 1;
		y = 0;
		return a;
	}
	else {
		int x1, y1;
		int gcd = Ext(b, a % b, x1, y1);
		x = y1;
		y = x1 - floor(a / b) * y1;

		return gcd;
	}
}
int main()
{
	int c, rem, mod;
	cout << "Enter the coefficient, reminder and modulus for example: - "<<endl;
	cin >> c>> rem >> mod;
	
	solution(c, rem, mod);

	return 0;
}

void solution(int A, int B, int N)
{
	A = A % N;
	B = B % N;

	int u = 0, v = 0;
	int d = Ext(A, N, u, v);

	if (B % d != 0) {
		cout <<"Solution not exists"<< endl;
		return;
	}
	int x0 = (u * (B / d)) % N;
	if (x0 < 0) {
		x0 += N;
	}
    cout<<"Answer: - ";
	for (int i = 0; i <= d - 1; i++) {
		cout << (x0 + i * (N / d)) % N << " ";
	}
	cout <<endl;
}


