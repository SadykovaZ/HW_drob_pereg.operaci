#include "drob.h"
void main()
{
	setlocale(LC_ALL, "Rus");
	drob a(3, 2);
	drob b(2, 3);
	drob c;
	int choice;
	cout << "Выберите операцию:\n";
	cout << "1)+\n2)-\n3)*\n4)/\n5)+=\n6)-=\n7)*=\n8)/=\n9)>\n10)>=\n11)<\n12)<=\n13)==\n14)!=" << endl;
	cin >> choice;
	switch (choice)
	{
	case 1:
		cout << "Опреация сложение:" << endl;
		c = a + b;
		c.print();
		break;
	case 2:
		cout << "Операция вычитания:" << endl;
		c = a - b;
		c.print();
		break;
	case 3:
		cout << "Операция умножения: " << endl;
		c = a * b;
		c.print();
		break;
	case 4:
		cout << "Операция деление: " << endl;
		c = a / b;
		c.print();
		break;
	case 5:
		cout << "Операция +=" << endl;
		a += b;
		a.print();
		break;
	case 6:
		cout << "Операция -=" << endl;
		a -= b;
		a.print();
		break;
	case 7:
		cout << "Операция +=" << endl;
		a += b;
		a.print();
		break;
	case 8:
		cout << "Операция /=" << endl;
		a /= b;
		a.print();
		break;
	case 9:
		cout << "Операция >" << endl;
		if (a > b)
			cout << true;		
		break;
	case 10:
		cout << "Операция >=" << endl;
		if (a >= b)
			cout << true;
		break;
	case 11:
		cout << "Операция <" << endl;
		if (a < b)
			cout << true;
		else
			cout << false;
		break;
	case 12:
		cout << "Операция <=" << endl;
		if (a <= b)
			cout << true;
		else
			cout << false;
		break;
	case 13:
		cout << "Операция ==" << endl;
		if (a == b)
			cout << true;
		else
			cout << false;
		break;
	case 14:
		cout << "Операция !=" << endl;
		if (a != b)
			cout << true;
		else
			cout << false;
		break;
	}
	system("pause");
}