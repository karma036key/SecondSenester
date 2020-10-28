#include "stdio.h"
#include "Test.h"

// static �����o�ϐ� ������(��`)
// �^�� �N���X��::�ϐ��� (= �����l)
// �� : static �����o�ϐ� �͐錾�Ǝ��̂𕪂��č��
//		���̂����̂́E�E�K���I .cpp
int Test::staticValue = 0;
int Test::instanceCount = 0;
Test::Test()
{
	value = 0;
	instanceCount++;
}

Test::~Test()
{
	value = 0;
	instanceCount--;
}

void Test::SetValue(int value_)
{
	value = value_;
}

int Test::GetValue()
{
	return value;
}

void Test::PrintValue()
{
	printf(" value	     = %d\n", value);
	printf(" staticValue = %d\n", staticValue);
}

// static�����o�֐� ������(��`)
//  �߂�l �֐���(����)
void Test::SetStaticValue(int value_)
{
	staticValue = value_;
	
	// �� : static �����o�֐��ł́A
	//	static �̃����o�[�ϐ���������ł��Ȃ�
	// value = value_	// error!
}

void Test::PrintCount()
{
	printf("Insetance Count = %d\n", instanceCount);
}
