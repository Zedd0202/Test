#include<iostream>
#include<algorithm>
#include<iterator>//����� ������ �̰� �����ؾ��Ѵ�. 
using namespace std;
int sumArray(int a[],int size);
int sumArray2(int *p, int size);

int main() {
	int a[5] = { 10,20,30,40,50 };
	int b[5] = { 100,27,83,14,55 };
	cout<<begin(b);//����Ÿ��->��Ʈ �ּҸ� ��´�!!!!!
	sort(begin(b), end(b));
	for (int i : b)
	{
		cout << i << " ";//���ĵ� b�� ��´�. 
	}
	int size = sizeof(a) / sizeof(a[0]);

	int *p = a;//�迭�� �����ּҸ� �ѱ�
	//cout << p << endl;//�ּ�
	//cout << &a << endl;//�ּ� �ΰ��� ����. 
 	//cout << *p << endl;//������ 1�� ��´�.
	for (int i = 0; i < size; i++)
	{
		//cout << *p << endl;
		//cout << *p + i << endl;//�����ٰ� ��¥ 1�� ���ϰڴ�.!!��� �Ҹ��� �׷��Ƿ� 11,12,13,14 �̷��� ������. 
		//cout << *(p + i) << endl;//10 20 30 40 50 �̷��� ��´�. 
		//p++;
	}
	int sum1 = sumArray(&a[0], size);//v������Ÿ���� �ٲ� �ʿ����. 
	cout << sum1 << endl;
	int *q = a;
	cout << a[1] << endl;//20�� ��´�
	cout << *(q+1) << endl;//20�� ��´�
	cout << *p + 1 << endl;//11�� ��´�
	cout << p[1] << endl;//20�� ��´�. ?����;
	cout << *(a + 1) << endl;//20�� ��´�. 
	//�迭�� �����ʹ� 100���� ���� �뵵�� �� �� �ִ�. �迭�� ÷�ڷ� �����ϰ� �����ʹ� �������� ���뿡 �����Ѵ�. �迭�� �����ʹ� ���� ������� �������ص� ��� x
	

//	p = p + 1;//4��ŭ�� �þ��.��������ġ�� �̵��ϰڴٴ� �ǹ� 
	//cout << p << endl;
	//cout << *p << endl;//2�� ��´�. 
	int sum = sumArray(a,size);//������ �̸��� �Ѱܵ��ȴ�.
	cout << sum << endl;
	int sum2 = sumArray2(p, size);
	cout << "sum2"<<sum2 << endl;
}
int sumArray(int a[],int size)
{
	int total = 0;
	for (int i = 0; i < size; i++)
	{
		//total += a[i];
		total += *(a + i);//�ΰ� �������� 

	}
	return total;
}
int sumArray2(int *p, int size)
{
	int total = 0;
	for (int i = 0; i < size; i++)
	{
		total +=*(p+i);//==p[i]�� ����

	}
	return total;
}
//�Լ����� �����͸� �����ϸ� ��� 4������ �ִ�
/*
	
*/