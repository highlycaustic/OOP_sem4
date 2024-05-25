#pragma once

/*
	Модуль с функциями для вычисления параметров треугольника
*/

/// <summary>
/// Вычисляет длину отрезка по координатам x1, y1 первой точки и координатам x2, y2 второй точки.
/// </summary>
/// <param name="x1">Координата x начала отрезка.</param>
/// <param name="y1">Координата y начала отрезка.</param>
/// <param name="x2">Координата x конца отрезка.</param>
/// <param name="y2">Координата y конца отрезка.</param>
/// <returns>Длину отрезка в float.</returns>
float triangleSideLength(int x1, int y1, int x2, int y2);

/// <summary>
/// Вычисляет периметр треугольника по трем его сторонам.
/// </summary>
/// <param name="sideA">Сторона A.</param>
/// <param name="sideB">Сторона B.</param>
/// <param name="sideC">Сторона C.</param>
/// <returns>Периметр треугольника в float.</returns>
float trianglePerimeter(float sideA, float sideB, float sideC);

/// <summary>
/// Вычисляет площадь треугольника по трем его сторонам.
/// </summary>
/// <param name="sideA">Сторона A.</param>
/// <param name="sideB">Сторона B.</param>
/// <param name="sideC">Сторона C.</param>
/// <returns>Площадь треугольника в float.</returns>
float triangleArea(float sideA, float sideB, float sideC);