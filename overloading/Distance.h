#pragma once
class Distance
{
private:
	int m, cm;

public:
	void setM(int a);
	void setCm(int b);
	int getM();
	int getCm();

	void add(int a);
	void  add(int a, int b);

	Distance operator +(Distance d2);
	Distance operator ++();
	Distance operator ++(int);

	Distance();
	Distance(int a, int b);
};

