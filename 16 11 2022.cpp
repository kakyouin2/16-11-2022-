#include <iostream>
#include <ctime>
using namespace std;
double rectP(double x1, double y1, double x2, double y2){
	return x1 + x2 + y1 + y2;
}
double rectS(double x1, double y1, double x2, double y2) {
	return x1 * y2;
}


double triangleP(double a) {
	return 3 * a;
}
double triangleS(double a) {
	return a * a * sqrt(3) / 4;
}

double aMean(double x,double y ) {
	return (x + y) / 2;
	 
}
double gMean(double x, double y) {
	return sqrt(x * y) / 2;

}
double powerA4(double a) {

	return a * a * a * a;
}
double powerA2(double a) {

	return a * a ;
}
double powerA3(double a) {

	return a * a * a;
}
int main() {
	srand(time(nullptr));
	setlocale(LC_ALL, "russian");



	//Proc1.Описать функцию PowerA3(A),
	//	вычисляющую третью степень числа A и возвращающую ее(параметр вещественный).
	//	С помощью этой функции найти третьи степени пяти случайных чисел.
	/*for (int i = 0; i < 5; i++) {
		double x = rand() % 11;
	
		double x3 = powerA3(x);
		cout << "x=" << x << "x^3=" << x3 << endl;
	}*/
	//Proc2.
	//	Описать 2 функции powerA2(А), powerA4(A),
	//	вычисляющию вторую и четвертую степень числа A и возвращающию эти степени(параметры являются вещественными).
	//	С помощью этих функций найти вторую и четвертую степень пяти случайных чисел

/*	for (int i = 0; i < 5; i++) {
		double x = rand() % 11;

		double x2 = powerA2(x);
		cout <<  " x= " << x<< "  " << " x^2= " << x2 << endl << endl;
	}
	cout << endl << endl;
	for (int i = 0; i < 5; i++) {
		double x = rand() % 11;

		double x4 = powerA4(x);
		cout << " x= " << x << "  " << " x^4= " << x4 << endl << endl;
	}*/
	//Proc3.
	//	Описать 2 функции aMean(X, Y), gMean(X, Y),
	//	вычисляющие среднее арифметическое aMean = (X + Y) / 2 и
	//	среднее геометрическое gMean = √ X·Y двух положительных чисел X и Y(X и Y — входные параметры вещественного типа).
	//	С помощью этих функций найти среднее арифметическое и среднее геометрическое для 10 пар случайных чисел.
/*
	for (int i = 0; i < 10; i++) {
		double x1 = rand() % 101 *0.1;
		double y1 = rand() % 101 * 0.1;


		cout << " x= " << x1 << "  y = " << y1 << " sr arifm = " << aMean(x1, y1) << "      " << "ar geom = " << gMean(x1, y1) << endl;
	}*/
	/*Proc4
		.Описать 2 функции triangleP(a) и triangleS(a), 
		вычисляющие по стороне a равностороннего треугольника его периметр P = 3·a и площадь S = a 2 · √ 3 / 4 
		(параметры являются вещественными).
		С помощью этих функций найти периметры и площади трех равносторонних треугольников с данными сторонами
		(стороны ввестиклавиатуры).*/
	/*double a;
	for (int i = 1; i < 5; i++) {
		cout << "Введите сторону треугольника ";
		cin >> a;
		cout << " P = " << triangleP(a) << " S = " << triangleS(a) << endl;

	}
	*/
	/*Proc5.
		Описать 2 функции rectP(x1, y1, x2, y2) и rectS(x1, y1, x2, y2),
		вычисляющие периметр P и площадь S прямоугольника со сторонами, параллельными осям координат, по координатам(x1, y1),
		(x2, y2) его противоположных вершин.
		С помощью этих функций найти периметры и площади трех прямоугольников с данными противоположными вершинами.*/
	 double x1, x2 , y1, y2;
	 for (int i = 1; i < 3; i++) {         
		
		 cout << " введите х1 (1 сторону)"; cin >> x1;
			   
			 cout << " введите x2 (2 сторону)";cin >> x2;

		 cout << " введите y1 (3 сторону)";cin >> y1;

		    
		 cout << " введите y2 (4 сторону)";   cin >> y2;
	
		 cout << "  периметр  = " << rectP(x1, y1, x2, y2) << " площадь = " << rectS(x1, y1, x2, y2) << endl;


	 }
}