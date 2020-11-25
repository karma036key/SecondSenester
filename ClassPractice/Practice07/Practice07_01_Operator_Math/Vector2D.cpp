#include "Vector2D.h"

Vector2D::Vector2D()
	: m_x(0.0f)
	, m_y(0.0f)
{
}

Vector2D::Vector2D(float x_, float y_)
	: m_x(x_)
	, m_y(y_)
{
}

Vector2D& Vector2D::operator=(const Vector2D& vec)
{
	this->m_x = vec.m_x;
	this->m_y = vec.m_y;
	return *this;
}

// += のオペレーターオーバーロード
// 左辺値へ計算して代入を行うので、基本的には代入演算子と同じになる
Vector2D Vector2D::operator+=(const Vector2D& vec)
{
	this->m_x = vec.m_x;
	this->m_y = vec.m_y;
	return *this;
}

// + のオペレーターオーバーロード
Vector2D Vector2D::operator+(const Vector2D& vec)
{
	Vector2D ans;
	ans.m_x = this->m_x + vec.m_x;
	ans.m_y = this->m_y + vec.m_y;
	return ans;
}
