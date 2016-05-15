#pragma once
#include <string>
#include <vector>
#include <fstream>
#include "Employee.h"
using namespace std;
/**
class Unit
����� - ������ �����������

uname - �������� �������������

bsal - �������� �� �������������

vector<Employee*> vec - ������ �����������

������ ������:

void ucalc();
@n������ ���������� ����� �� �������������

void rewstat();
@n���������� �� ����������� �����������

void mulstat();
@n���������� �� ����������� � ������������ ���������� ������
*/
class Unit
{
	string uname;
	int bsal;
	vector<Employee*> vec;
public:
	Unit(string un, int b);
	~Unit();

	void ucalc();
	void rewstat();
	void mulstat();
	friend class VUnit;
};

