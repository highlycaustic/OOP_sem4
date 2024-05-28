#pragma once
#include <iostream>

/// @brief ����� �����������. ����� ���� sideA, sideB, sideC - ����� ������ ������������,
/// @brief perimeter - �������� ������������, area - ������� ������������.
class Triangle {
private:

	// ������� ������������
	float sideA;
	float sideB;
	float sideC;

	// �������� � ������� ������������
	float perimeter;
	float area;

	void setPerimeter(float _sideA, float _sideB, float _sideC); // ������ ���������

	void setArea(float _sideA, float _sideB, float _sideC); // ������ �������

public:

	// ����������� ���������������� ���������� �� ���������, ���� �� ������ ����
	Triangle(float _sideA = 1.0, float _sideB = 1.0, float _sideC = 1.0);

	// ����� �������� ������������
	bool isValid(float _sideA, float _sideB, float _sideC);

	// ������� ������ ������������
	void setSideA(float _sideA);
	void setSideB(float _sideB);
	void setSideC(float _sideC);

	// ������� ������ ������������
	float getSideA() const;
	float getSideB() const;
	float getSideC() const;

	// ������� ��������� � �������
	float getPerimeter() const;
	float getArea() const;

};