#include <iostream>
#include<string>
using namespace std;

int main()
{
	char name[12];
	int num;

	cout << "�̸�: ";
	cin.getline(name, 12);

	cout << "�й�: ";
	cin >> num;

	cout << "�ݰ����ϴ�." << name << "��\n" << endl;
	cout << "���� �Է��� �����մϴ�.\n" << endl;
	cout << "================= SWING 31 ================" << endl;

	double a;
	double b;
	double c;
	double d;

	cout << "C���α׷���(3����): ";
	cin >> a;
	cout << "��ǻ�͹�������ȣ����(3����): ";
	cin >> b;
	cout << "����Ʈ����߽ǹ�����1(1����): ";
	cin >> c;
	cout << "���а�޿���(2����): ";
	cin >> d;

	cout << "======================================================" << endl;

	double avg = (a*3 + b*3 + c*1 + d*2) / 9;
	cout << name <<"("<< num<<")" << "���� ��ü ������ " << (double)avg << "�Դϴ�." << endl;

	return 0;
}