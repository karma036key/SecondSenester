#ifndef EMPLOYEE_H
#define EMPLOYEE_H

class Employee
{
public:
	enum POST
	{
		STAFF,			//���Ј�
		SECTION_CHIEF,	//�ے�
		MANAGER,		//����
		PRESIDENT,		//�В�
	};


	Employee(POST post_);

	void ShowPost();
	POST GetPost()const;

	// > ���I�[�o�[���[�h
	bool operator>(const Employee& emp_)const;

public:
	POST m_Post;	// ��E
	int m_Salary;	// ������
};



#endif
