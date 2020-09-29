using namespace std;
#include <iostream>
#include "Distance.h"
int main()
{
	Distance d1, d2=Distance(10,10);
	int a, b;
	cin >> a>>b;
	d1.setM(a);
	d1.setCm(b);
	cout << d1.getM() << endl;
	cout << d1.getCm() << endl;
	d2++;
	cout << d2.getM() << endl;
	cout << d2.getCm() << endl;
	d2.add(1);
	cout << d2.getM() << endl;
	cout << d2.getCm() << endl;
}
