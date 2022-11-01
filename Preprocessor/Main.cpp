#include <iostream>

#if 3 < 10//только константы и только целочисленные константы
#define PI 3.14//создаёт какой-то объект. Не занимает места в памяти
#define MSG "Hello world!"
#endif

#define forever while (true)
#define begin {
#define end }

//#undef PI       //освобождает какое-то имя и оно ничего не значит

#define sum(a, b) (a + b) //принимает 2 числа и возвращает сумму
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

#ifdef sum //if not defind // добавляет в текст чать кода если условие истино
const int k = 10;
#else
const int k = 11;
#error "Ошибка! sum должно существовать."
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

	std::cout << __LINE__ << "\n"; // строчка кода 55
	std::cout << __LINE__ << "\n"; // строчка кода 56

	std::cout << __FILE__ << "\n"; // полный путь к файлу, где можно посмотреть в каком файле вызывается часть кода


	std::string date = __DATE__;
	std::cout << date << "\n"; // вывод даты сборки этого проекта




	//Препроцессор для своей работы использует дерективы.
	//Все дерективы препроцессоров начинаются с #

	//Константы препроцессора
	/*std::cout << "PI = " << PI << "\n";
	std::cout << MSG << "\n";

#undef PI
	//std::cout << "PI = " << PI << "\n"; // ошибка, так как PI освобождено
	*/

	//Программные конструкции
/*	n = 0;
	forever begin
		std::cout << '.';
	n++;
	if (n >= 5)
		break;
	end;

	std::cout << "\n";*/

	//Макросы
	/*std::cout << sum(1, 5.7) << "\n"; //6.7
	createarr(int, px, 5);
	px[0] = 1;
	delete[]px;

	//Двумерный массив
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