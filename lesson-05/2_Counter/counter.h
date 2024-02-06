#ifndef COUNTER_H
#define COUNTER_H

class Counter
{
private:
	int m_num;

public:
	Counter();
	Counter(int num);

	int increaseByOne();
	int decreaseByOne();

	void print() const;

	void setNum(int num);
};

#endif