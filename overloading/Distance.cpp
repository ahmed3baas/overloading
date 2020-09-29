#include "Distance.h"

void Distance::setM(int a)
{
	m = a;
}

void Distance::setCm(int b)
{
	cm = b;
}

int Distance::getM()
{
	return m;
}

int Distance::getCm()
{
	return cm;
}

void Distance::add(int a)
{
	m += a;
}

void Distance::add(int a, int b)
{
	m += a;
	cm += b;
}

Distance Distance::operator+(Distance d2)
{
	Distance res;
	res.m = m + d2.m;
	res.cm = cm + d2.cm;
	if (res.cm >= 100)
	{
		res.m++;
		res.cm -= 100;
	}
	return res;
}

Distance Distance::operator++()
{
	m++;
	Distance res = Distance(m,cm);
	return res;
}

Distance Distance::operator++(int)
{
	Distance res = Distance(m, cm);
	m++;
	return res;
}

Distance::Distance()
{
}

Distance::Distance(int a, int b)
{
	m = a;
	cm = b;
}
