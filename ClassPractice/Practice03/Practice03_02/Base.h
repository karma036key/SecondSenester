#ifndef BASE_H
#define BASE_H

// 基底クラス　(親クラス 等)
class Base
{
public:
	Base();
	virtual ~Base();	// 必ず virtual を！！

	virtual void Exec() = 0;	//純粋仮想関数（付けると抽象クラスになる）.h に実態なし
	virtual void Draw() = 0;	// 不可  Base* base = new Base();
public:
	// 
	// virtual => 仮想関数化
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
