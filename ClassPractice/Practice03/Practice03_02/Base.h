#ifndef BASE_H
#define BASE_H

// ���N���X�@(�e�N���X ��)
class Base
{
public:
	Base();
	virtual ~Base();	// �K�� virtual ���I�I

	virtual void Exec() = 0;	//�������z�֐��i�t����ƒ��ۃN���X�ɂȂ�j.h �Ɏ��ԂȂ�
	virtual void Draw() = 0;	// �s��  Base* base = new Base();
public:
	// 
	// virtual => ���z�֐���
	virtual bool CheckHit(int x, int y, int width, int height);

	void SetHp(int hp);
	void SetPos(float x, float y);
	void SetMoveSpeed(float speed);


	int GetHp();
	float GetPosX();
	float GetPosY();
	float GetMoveSpeed();

private:
	int m_Hp;
	float m_PosX;
	float m_PosY;
	float m_MoveSpeed;

	int m_width;  //
	int m_height; //
};


#endif // BASE_H
