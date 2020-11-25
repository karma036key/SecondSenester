#ifndef EMPLOYEE_H
#define EMPLOYEE_H

class Employee
{
public:
	enum POST
	{
		STAFF,			//平社員
		SECTION_CHIEF,	//課長
		MANAGER,		//部長
		PRESIDENT,		//社長
	};


	Employee(POST post_);

	void ShowPost();
	POST GetPost()const;

	// > をオーバーロード
	bool operator>(const Employee& emp_)const;

public:
	POST m_Post;	// 役職
	int m_Salary;	// お給料
};



#endif
