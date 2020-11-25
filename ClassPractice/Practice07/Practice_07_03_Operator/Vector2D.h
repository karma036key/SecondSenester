#ifndef VECTOR_2D_H
#define VECTOR_2D_H

// �K�v�ȉ��Z�q�̃I�[�o�[���[�h��

// �񎟌��x�N�g���N���X
class Vector2D
{
public:
	Vector2D();
	Vector2D(float x_, float y_);

	float GetX() const { return m_x; }
	float GetY() const { return m_y; }

	// �x�N�g���̒��������߂�
	float GetLength()const;


		// - �̃I�y���[�^�[�I�[�o�[���[�h
	Vector2D& operator=(const Vector2D& vec);
		// += �̃I�y���[�^�[�I�[�o�[���[�h
	Vector2D operator+=(const Vector2D& vec);
		// + �̃I�y���[�^�[�I�[�o�[���[�h
	Vector2D operator+(const Vector2D& vec);
		// + �̃I�y���[�^�[�I�[�o�[���[�h(m_x,m_y �ɓ����l�𑫂�)
	Vector2D operator+(float vec);

		// > �̃I�y���[�^�[�I�[�o�[���[�h
	bool operator>(const Vector2D& vec);

private:
	float m_x;
	float m_y;
};

#endif
