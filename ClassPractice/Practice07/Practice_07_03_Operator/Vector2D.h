#ifndef VECTOR_2D_H
#define VECTOR_2D_H

// 必要な演算子のオーバーロードや

// 二次元ベクトルクラス
class Vector2D
{
public:
	Vector2D();
	Vector2D(float x_, float y_);

	float GetX() const { return m_x; }
	float GetY() const { return m_y; }

	// ベクトルの長さを求める
	float GetLength()const;


		// - のオペレーターオーバーロード
	Vector2D& operator=(const Vector2D& vec);
		// += のオペレーターオーバーロード
	Vector2D operator+=(const Vector2D& vec);
		// + のオペレーターオーバーロード
	Vector2D operator+(const Vector2D& vec);
		// + のオペレーターオーバーロード(m_x,m_y に同じ値を足す)
	Vector2D operator+(float vec);

		// > のオペレーターオーバーロード
	bool operator>(const Vector2D& vec);

private:
	float m_x;
	float m_y;
};

#endif
