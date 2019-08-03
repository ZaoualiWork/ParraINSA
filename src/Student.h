#ifndef STUDENT_H_
#define STUDENT_H_

#include <string>
#include <list>

class Student {
public:
	const std::string& getName() const;
	void setName(const std::string& name);
private:
	std::string name;
};