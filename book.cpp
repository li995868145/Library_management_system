//图书类中函数的实现
#include "book.h"

//设置书名
void Book::setName(const string& name)
{
    this->name = name;
}
//获取书名
string& Book::getName()
{
    return name;
}
//设置编号
void Book::setNum(int num)
{
    this->num = num;
}
//获取编号
int Book::getNum()
{
    return num;
}
//设置状态
void Book::setFlag(bool flag)
{
    this->flag = flag;
}
//获取状态
bool Book::getFlag()
{
    return flag;
}

Book& Book::operator=(const Book& book){
	this->num = book.num;
	this->name = book.name;
	this->flag = book.flag;
}
