#include <iostream>

#if 3 < 10//������ ��������� � ������ ������������� ���������
#define PI 3.14//������ �����-�� ������. �� �������� ����� � ������
#define MSG "Hello world!"
#endif

#define forever while (true)
#define begin {
#define end }

//#undef PI       //����������� �����-�� ��� � ��� ������ �� ������

#define sum(a, b) (a + b) //��������� 2 ����� � ���������� �����
#define createarr(t, n, s) t * n = new t[s]
#define createmtx(t, n, s1, s2) t ** n = new t* [s1];\
	for (int i = 0; i < s1; i++)\
		n[i] = new t[s2]

#if 1 == 2
void hi() {
	std::cout << "Hello!\n";
}
#elif 2 == 2
void hi() {
	std::cout << "Wow!\n";
}
#else
void hi() {
	std::cout << "Bye!\n";
}
#endif

#ifdef sum //if not defind // ��������� � ����� ���� ���� ���� ������� ������
const int k = 10;
#else
const int k = 11;
#error "������! sum ������ ������������."
#endif

#define print(v) std::cout << #v << " = " << v << "\n";
#define show(a, b) a ## b

int main() begin
	setlocale(LC_ALL, "Russian");
	int n = 1, m = 2;
	int xy = 10;

	std::cout << show(x, y) << "\n";

	hi();
	print(n);
	print(m);

	std::cout << __LINE__ << "\n"; // ������� ���� 55
	std::cout << __LINE__ << "\n"; // ������� ���� 56

	std::cout << __FILE__ << "\n"; // ������ ���� � �����, ��� ����� ���������� � ����� ����� ���������� ����� ����


	std::string date = __DATE__;
	std::cout << date << "\n"; // ����� ���� ������ ����� �������




	//������������ ��� ����� ������ ���������� ���������.
	//��� ��������� �������������� ���������� � #

	//��������� �������������
	/*std::cout << "PI = " << PI << "\n";
	std::cout << MSG << "\n";

#undef PI
	//std::cout << "PI = " << PI << "\n"; // ������, ��� ��� PI �����������
	*/

	//����������� �����������
/*	n = 0;
	forever begin
		std::cout << '.';
	n++;
	if (n >= 5)
		break;
	end;

	std::cout << "\n";*/

	//�������
	/*std::cout << sum(1, 5.7) << "\n"; //6.7
	createarr(int, px, 5);
	px[0] = 1;
	delete[]px;

	//��������� ������
	int** mx = new int* [10];
	for (int i = 0; i < 10, i++)
		mx[i] = new int[7];
	
	createmtx(int, mat, 5, 4);
	for (int i = 0; i < 5; i++) {
		for (int y = 0; y < 4; y++) {
			mat[i][y] = i * y + 1;
			std::cout << mat[i][y]<< '\t';
		}
		std::cout << '\n';
	}

	for (int x= 0; x < 4; x++)
		delete[]mat[x];
	delete[]mat;*/


	return 0;
end