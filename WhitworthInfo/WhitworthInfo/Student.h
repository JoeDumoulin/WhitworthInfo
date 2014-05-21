#ifndef STUDENT_H_
#define STUDENT_H_

#include <string>
#include "Faculty.h"
using namespace std;

class Student {
	string name;
	int ID;
	bool female;
	Faculty advisor;

	void Study();
	void DoHomework();
	bool Register(string name);
	bool ChangeAdvisor(string name);
	void Speak();
};

#endif