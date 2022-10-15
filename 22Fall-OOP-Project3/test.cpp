#include "myvector.h"
int main() 
{
	int a[10], b[10], num = 0, c = 1, length;	//num是向vec中添加的数据，length是修改size
	for (int i = 0; i < 10; i++)
	{
		a[i] = i;
		b[i] = 2 * i;
	}
	MyVector<int> vec1(10, a);
	MyVector<int> vec2(10, b);
	while (c) {
		cout << endl << "当前vector为:vec1=" << vec1 << ", vec2=" << vec2 << endl << "请选择测试操作:";
		cout << endl << "1. 测试关系运算符==";
		cout << endl << "2. 获取vec1和vec2的维数";
		cout << endl << "3. 向vec1中添加数据";
		cout << endl << "4. 向vec2中添加数据";
		cout << endl << "5. 测试赋值运算符，将vec2赋值给vec1";
		cout << endl << "6. 修改vec1维数";
		cout << endl << "7. 修改vec2维数";
		cout << endl << "8. 测试越界";
		cout << endl << "0. 退出";
		cout << endl << "选择功能 (0~8):";
		cin >> c;
		switch (c) {
		case 1:
			cout << "vec1为：";
			cout << vec1 << endl;
			cout << "vec2为：";
			cout << vec2 << endl;
			if (vec1 == vec2)
				cout << "vec1和vec2相等。" << endl;
			else
				cout << "vec1和vec2不相等。" << endl;
			break;
		case 2:
			cout << "vec1容量为：";
			cout << vec1.size() << endl;
			cout << "vec2容量为：";
			cout << vec2.size() << endl;
			break;
		case 3:
			cout << "请输入您想要添加的数据";
			cin >> num;
			vec1.push_back(num);
			break;
		case 4:
			cout << "请输入您想要添加的数据";
			cin >> num;
			vec2.push_back(num);
			break;
		case 5:
			vec1 = vec2;
			break;
		case 6:
			cout << "请输入vec1修改后的大小:";
			cin >> length;
			vec1.resize(length);
			break;
		case 7:
			cout << "请输入vec2修改后的大小:";
			cin >> length;
			vec2.resize(length);
			break;
		case 8:
			cout << "调用a[length+1]";
			cout << vec1[11];
			break;
		default:
			break;
		}
	}
	system("pause");
	
	return 0;
}