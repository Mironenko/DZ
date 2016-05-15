#pragma once
#include <string>
#include "Unit.h"
using namespace std;
/**
class VUnit

vector<Unit*> v - ������ �������������

������ ������:

void create(string un, int b);
@n�������� ������������� � ������ "um" � ������� ������� b

void disband(string un);
@n��������������� ������������� "un"

void hire(string un, string en);
@n���� ���������� � ������ "en" � ������������� "un"

void findanddo(string un, string en, int com);
@n������� ������ ���������� � ������ "en" � ������������� "un" � ���������� ��������, ����������
�� �������� �������
@n 0 - ������� ����������
@n 1 - ��������� ��������
@n 2 - �������� ������
@n 3 - �������� ������� ��������� ��������� ����������

void promosion(string un, string en, string unm);
@n������� ���������� � ������ "en" �� ������������� "un" � ������������� "unm"

void emplmult(string un, string en, double m);
@n��������� ��������� ������ "m" ��� ���������� � ������ "en" � ������������� "un"

void empltrip(string un, string en, int s);
@n���� ��������� ������������ ���������� "en" �� ������������� "un"
@n 0 - �� ���
@n 1 - ��� ���������
@n2 - ��������
@n 3 - ���� ��������

void ucalc(string un);
@n������ ���������� ����� �� ������������� "un"

void rewstat(string un);
@n���������� �� ����������� ����������� ������������� "un"

void mulstat(string un);
@n���������� �� ����������� � ������������ ���������� ������ ������������� "un"

void printu();
@n������ �������� ���� �������������

void printe(string un);
@n������ ���� ���� ����������� ������������� "un"

void writein(ostream& ost);
@n������ � ����

void readfrom(istream& ist);
@n������ �� �����
*/
class VUnit
{
	vector<Unit*> v;
public:
	VUnit();
	~VUnit();

	void create(string un, int b);
	void disband(string un);
	void hire(string un, string en);
	void findanddo(string un, string en, int com);
	void promosion(string un, string en, string unm);
	void emplmult(string un, string en, double m);
	void empltrip(string un, string en, int s);
	void ucalc(string un);
	void rewstat(string un);
	void mulstat(string un);
	void printu();
	void printe(string un);
	void writein(ostream& ost);
	void readfrom(istream& ist);
};

