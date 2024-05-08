#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	double hm = 0.1 * hl;
	double H = hg + hl + hm + Hs;
	double hl = D * L / d * pow(V, 2) / 19, 6;
	double Q = Q / 3600.0;
	double V = 1.27 * Q / pow(d, 2);
	double N = 9.8 * Q * H / k;
	cout << "k = " << k <<endl;
    cout << "V = " << V <<endl;
	cout << "t = " << t << endl;
	cout << "Hg = " << Hg << endl;
	cout << "Hs = " << Hs <<endl;
	cout << "D = " << D << endl;
	cout << "L = " << L <<endl;
	cout << "d = " << d << endl;
	cout << "hl = " << hl << endl;
	cout << "hm = " << hm <<endl;
	cout << "Q = " << Q << endl;
	cout << "N = " << N << endl;



}


