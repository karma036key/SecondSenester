#ifndef TEST_H
#define TEST_H

class Test
{
public:
	Test();
	~Test();

	void SetValue(int value_);
	int GetValue();
	void PrintValue();

	// static�����o�֐� ������(�錾)
	// staric �߂�l �֐���(����)
	static void SetStaticValue(int value_);

	// Test�N���X���g���Ă�����̂̕\��
	static void PrintCount();

public:
	int value;

	// static �����o�ϐ� ������(�錾)
	// static �^�� �ϐ���
	static int staticValue;

	static int instanceCount;
};

#endif
