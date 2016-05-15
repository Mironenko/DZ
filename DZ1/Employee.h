#pragma once
#include <string>
#include <vector>
#include <fstream>

using namespace std;

const double r = 0.2, t = 0.3;

/**
class Employee
string name - ��� ����������

string uname - �������� �������������

int salary - �������� ����������

int trips - ��������� ������������

int tripc - ���������� ������������

double rew - ������

double tripm - ���������������

double mul - ��������� ������

vector<string> history - ������� ��������� ��������� ����������

������ ������:

void calc();
@n������ �������� ����������

void reward();
@n������������ ����������

void mult(double m);
@n��������� ��������� "m" ��� �������� ����������

void trip(int s);
@n��������� ��������� "s" ������������ ����������

void hist();
@n����������� ������� ��������� ��������� ����������

void writein(ostream& ost);
@n������ � ����

void readfrom(istream& ist);
@n������ �� �����
*/
class Employee
{
	string name, uname;
	int salary, trips, tripc;
	double rew, tripm, mul;
	vector<string> history;
public:
	Employee(string n, string u, int usal);
	~Employee();
	void calc();
	void reward();
	void mult(double m);
	void trip(int s);
	void hist();
	void readfrom(istream& ist);
	void writein(ostream& ost);
	friend class Unit;
	friend class VUnit;
};

