#include "myvector.h"
int main() 
{
	int a[10], b[10], num = 0, c = 1, length;	//num����vec����ӵ����ݣ�length���޸�size
	for (int i = 0; i < 10; i++)
	{
		a[i] = i;
		b[i] = 2 * i;
	}
	MyVector<int> vec1(10, a);
	MyVector<int> vec2(10, b);
	while (c) {
		cout << endl << "��ǰvectorΪ:vec1=" << vec1 << ", vec2=" << vec2 << endl << "��ѡ����Բ���:";
		cout << endl << "1. ���Թ�ϵ�����==";
		cout << endl << "2. ��ȡvec1��vec2��ά��";
		cout << endl << "3. ��vec1���������";
		cout << endl << "4. ��vec2���������";
		cout << endl << "5. ���Ը�ֵ���������vec2��ֵ��vec1";
		cout << endl << "6. �޸�vec1ά��";
		cout << endl << "7. �޸�vec2ά��";
		cout << endl << "8. ����Խ��";
		cout << endl << "0. �˳�";
		cout << endl << "ѡ���� (0~8):";
		cin >> c;
		switch (c) {
		case 1:
			cout << "vec1Ϊ��";
			cout << vec1 << endl;
			cout << "vec2Ϊ��";
			cout << vec2 << endl;
			if (vec1 == vec2)
				cout << "vec1��vec2��ȡ�" << endl;
			else
				cout << "vec1��vec2����ȡ�" << endl;
			break;
		case 2:
			cout << "vec1����Ϊ��";
			cout << vec1.size() << endl;
			cout << "vec2����Ϊ��";
			cout << vec2.size() << endl;
			break;
		case 3:
			cout << "����������Ҫ��ӵ�����";
			cin >> num;
			vec1.push_back(num);
			break;
		case 4:
			cout << "����������Ҫ��ӵ�����";
			cin >> num;
			vec2.push_back(num);
			break;
		case 5:
			vec1 = vec2;
			break;
		case 6:
			cout << "������vec1�޸ĺ�Ĵ�С:";
			cin >> length;
			vec1.resize(length);
			break;
		case 7:
			cout << "������vec2�޸ĺ�Ĵ�С:";
			cin >> length;
			vec2.resize(length);
			break;
		case 8:
			cout << "����a[length+1]";
			cout << vec1[11];
			break;
		default:
			break;
		}
	}
	system("pause");
	
	return 0;
}