//图书类的实现
#ifndef BOOK_H
#define BOOK_H
#include <string>
using namespace std;

class Book
{
private:
    int num;//书的编号
    string name;//书名
    bool flag;//true代表存在，false代表不存在
public:
    //构造函数
    Book(){}
    //析构函数
    ~Book(){}
    //设置书名
    void setName(const string& name);
    //获取书名
    string& getName();
    //设置编号
    void setNum(int num);
    //获取编号
    int getNum();
    //设置状态
    void setFlag(bool flag);
    //获取状态
    bool getFlag();
    Book& operator = (const Book& book);
//    friend Book& operator = (Book& b1,const Book& b2);
};

#endif
