#pragma once

/*
	������ � ��������� ��� ���������� ���������� ������������
*/

/// <summary>
/// ��������� ����� ������� �� ����������� x1, y1 ������ ����� � ����������� x2, y2 ������ �����.
/// </summary>
/// <param name="x1">���������� x ������ �������.</param>
/// <param name="y1">���������� y ������ �������.</param>
/// <param name="x2">���������� x ����� �������.</param>
/// <param name="y2">���������� y ����� �������.</param>
/// <returns>����� ������� � float.</returns>
float triangleSideLength(int x1, int y1, int x2, int y2);

/// <summary>
/// ��������� �������� ������������ �� ���� ��� ��������.
/// </summary>
/// <param name="sideA">������� A.</param>
/// <param name="sideB">������� B.</param>
/// <param name="sideC">������� C.</param>
/// <returns>�������� ������������ � float.</returns>
float trianglePerimeter(float sideA, float sideB, float sideC);

/// <summary>
/// ��������� ������� ������������ �� ���� ��� ��������.
/// </summary>
/// <param name="sideA">������� A.</param>
/// <param name="sideB">������� B.</param>
/// <param name="sideC">������� C.</param>
/// <returns>������� ������������ � float.</returns>
float triangleArea(float sideA, float sideB, float sideC);