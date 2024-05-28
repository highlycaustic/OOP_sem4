#include "trianglecalc.h"
#include "TriangleClass.h"
#include <stdexcept>

// Сеттер периметра
void Triangle::setPerimeter(float _sideA, float _sideB, float _sideC) {
	this->perimeter = trianglePerimeter(_sideA, _sideB, _sideC);
}

// Сеттер площади
void Triangle::setArea(float _sideA, float _sideB, float _sideC) {
	this->area = triangleArea(_sideA, _sideB, _sideC);
}

// Конструктор
Triangle::Triangle(float _sideA, float _sideB, float _sideC) {
	if (isValid(_sideA, _sideB, _sideC)) { // Проверка на правильность
		this->sideA = _sideA; // Если isValid возвращает true, заполнить поля сторон
		this->sideB = _sideB;
		this->sideC = _sideC;
		setPerimeter(this->sideA, this->sideB, this->sideC); // Автоматически посчитать периметр и заполнить поле
		setArea(this->sideA, this->sideB, this->sideC); // Посчитать площадь и заполнить поле
	}
}

// Проверка треугольника
bool Triangle::isValid(float _sideA, float _sideB, float _sideC) {
	if (((_sideA + _sideB) > _sideC) || ((_sideB + _sideC) > _sideA) || ((_sideC + _sideA) > _sideB)) {
		return true; // Если сумма длин двух сторон больше третьей, возвращает true
	}
	throw std::invalid_argument("Треугольник не действителен"); // Иначе выдает исключение
	return false;
}

// Сеттеры сторон
void Triangle::setSideA(float _sideA) {
	if (isValid(_sideA, this->sideB, this->sideC))
		this->sideA = _sideA;
}

void Triangle::setSideB(float _sideB) {
	if (isValid(this->sideA, _sideB, this->sideC))
		this->sideB = _sideB;
}

void Triangle::setSideC(float _sideC) {
	if (isValid(this->sideA, this->sideB, _sideC))
		this->sideC = _sideC;
}

// Геттеры сторон
float Triangle::getSideA() const { return this->sideA; }
float Triangle::getSideB() const { return this->sideB; }
float Triangle::getSideC() const { return this->sideC; }

// Геттеры периметра и площади
float Triangle::getPerimeter() const { return this->perimeter; }
float Triangle::getArea() const { return this->area; }
