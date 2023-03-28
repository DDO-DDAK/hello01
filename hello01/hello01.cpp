#include <iostream>
#include<string>
using namespace std;

int main()
{
	char name[12];
	int num;

	cout << "이름: ";
	cin.getline(name, 12);

	cout << "학번: ";
	cin >> num;

	cout << "반갑습니다." << name << "님\n" << endl;
	cout << "학점 입력을 시작합니다.\n" << endl;
	cout << "================= SWING 31 ================" << endl;

	double a;
	double b;
	double c;
	double d;

	cout << "C프로그래밍(3학점): ";
	cin >> a;
	cout << "컴퓨터및정보보호개론(3학점): ";
	cin >> b;
	cout << "소프트웨어개발실무영어1(1학점): ";
	cin >> c;
	cout << "대학고급영어(2학점): ";
	cin >> d;

	cout << "======================================================" << endl;

	double avg = (a*3 + b*3 + c*1 + d*2) / 9;
	cout << name <<"("<< num<<")" << "님의 전체 학점은 " << (double)avg << "입니다." << endl;

	return 0;
}