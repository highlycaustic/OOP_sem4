#pragma once


/// @brief ������� ����� �������������� �����, ����� ���� pos_x, pos_y - ����������.
class Shape {
public:

	// ����������
	float pos_x;
	float pos_y;

	// �����������, ��������� �������� 0.0
	Shape(float _pos_x = 0.0, float _pos_y = 0.0);

	// ����� �����������
	void move(float d_x, float d_y);

	// ����������� ������ ��� ��������
	virtual float perimeter() const;
	virtual float area() const;

};

/// @brief �������� ����� Shape. ����� ���������, ����� ���� side - ����� �������.
class Square : public Shape {
private:

	// ����� ������
	float side;

public:

	// �����������, ��������� �������� 1.0
	Square(float _side = 1.0);

	// ��������������� ������� ���������� ��������� � �������
	float perimeter() const override;
	float area() const override;

	// ������ ����� �������
	void setSide(float _side);

	// ������ ����� �������
	float getSide();

};

/// @brief �������� ����� Shape. ����� ����������, ����� ���� radius - ������ ����������.
class Circle : public Shape {
private:

	// ������ ����������
	float radius;

public:

	// �����������, ��������� �������� 1.0
	Circle(float _radius = 1.0);

	// ��������������� ������� ���������� ����� � ������� ����������
	float perimeter() const override;
	float area() const override;

	// ������ �������
	void setRadius(float _radius);

	// ������ �������
	float getRadius();

};