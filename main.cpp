//主函数文件
#include "bookData.h"
#include <iostream>
using namespace std;

void mainPage(BookData& tempData)
{
    cout << "      图书管理系统" << endl;
    cout << "------------------------------" << endl;
    cout << " [1] 增加图书";
    cout << "    [2] 查找图书" << endl;
    cout << " [3] 删除图书";
    cout << "    [4] 列出图书" << endl;
    cout << " [5] 清空图书";
    cout << "    [0] 退出" << endl;
    cout << "------------------------------" << endl;
    cout << "请输入：" << endl;
    int choose = 0;
    cin >> choose;
    switch(choose)
    {
        case 1:tempData.addBook();break;
        case 2:tempData.findBook();break;
        case 3:tempData.delBook();break;
        case 4:tempData.listBook();break;
        case 5:tempData.clear();break;
        case 0:cout << "谢谢使用" << endl;
               return;
        default:cout << "输入错误" << endl;
    }
}

int main()
{
    BookData tempData;
    while(1)
    {
        mainPage(tempData);
    }
    return 0;
}
