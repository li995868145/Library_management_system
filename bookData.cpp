//图书管理类的实现
#include "bookData.h"
#include <iostream>
using namespace std;

//增加图书
void BookData::addBook()
{
    int tempNum = 0;
    Book tempBook;
    cout << "请输入图书编号：" << endl;
    cin >> tempNum;
    tempBook.setNum(tempNum);
    cout << "请输入图书名字：" << endl;
    string tempName;
    cin >> tempName;
    tempBook.setName(tempName);
    tempBook.setFlag(true);
    bookSum[top++] = tempBook;
    cout << "增加成功" << endl;
}
//查找图书
int BookData::findBook()
{
    int tempNum = 0;
    cout << "请输入编号：" << endl;
    cin >> tempNum;
    int loop = 0;
    for(loop = 0;loop<top;loop++)
    {
        if(bookSum[loop].getNum() == tempNum)
        {
           cout << bookSum[loop].getNum() << "     " << 
 				bookSum[loop].getName() << "     " << 
				bookSum[loop].getFlag() << endl;
           return loop;
        }
    }
    return loop+1;
}
//删除图书
void BookData::delBook()
{
    int findResult = findBook();
    if(findResult <= top)
    {
    	for(int i=findResult;i<top-1;i++){
	    	bookSum[i] = bookSum[i+1];
	    }
	    top -= 1;
        /*bookSum[findResult-1].setNum(0);
        bookSum[findResult-1].setName("");
        bookSum[findResult-1].setFlag(false);*/
    }
    else
    {
        cout << "没有此书" << endl;
    }
}
//列出图书
void BookData::listBook()
{
    int loop = 0,flag = 1;
    for(loop = 0;loop<top;loop++)
    {
        if(bookSum[loop].getNum() != 0)
        {
            cout << bookSum[loop].getNum() << "     " << bookSum[loop].getName() << "     " << bookSum[loop].getFlag() << endl;
            flag = 0;
        }
    }
    if(flag)
    {
        cout << "书库中已经没有书了" << endl;
    }
}
//清空图书
void BookData::clear()
{
    top = 0;
    cout << "图书已经清空了" << endl;
}
