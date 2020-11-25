#ifndef POSITION_H
#define POSITION_H

/*　テンプレートのクラス

*/

template <class T>
class Position
{
public:
	Position()
		:m_PosX(0)
		, m_PosY(0)
	{

	}

public:
	void SetPosX(T x_) { m_PosX = x_; }
	void SetPosY(T y_) { m_PosY = y_; }

	T GetPosX()const { return m_PosX; }
	T GetPosY()const { return m_PosY; }

	// + オーバーロード
	T operator+(const Position& pos_);
	// = オーバーロード
	T& operator=(const Position& pos_);
private:
	T m_PosX;
	T m_PosY;
};

// テンプレート　クラス外定義
template <class T>
T Position<T>::operator+(const Position& pos_)
{
	Position ans;
	ans.SetPosX(this->GetPosX() + pos_.GetPosX());
	ans.SetPosY(this->GetPosY() + pos_.GetPosY());

	return ans;
}

template <class T>
T& Position<T>::operator=(const Position& pos_)
{
	this->GetPosX() = pos_.GetPosX();
	this->GetPosY() = pos_.GetPosY();

	return *this;
}

#endif
