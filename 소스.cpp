#include<iostream>
#include<algorithm>
#include<iterator>//비긴을 쓰려면 이거 선언해야한다. 
using namespace std;
int sumArray(int a[],int size);
int sumArray2(int *p, int size);

int main() {
	int a[5] = { 10,20,30,40,50 };
	int b[5] = { 100,27,83,14,55 };
	cout<<begin(b);//리턴타입->인트 주소를 찍는다!!!!!
	sort(begin(b), end(b));
	for (int i : b)
	{
		cout << i << " ";//정렬된 b를 찍는다. 
	}
	int size = sizeof(a) / sizeof(a[0]);

	int *p = a;//배열의 시작주소를 넘김
	//cout << p << endl;//주소
	//cout << &a << endl;//주소 두개가 같다. 
 	//cout << *p << endl;//역참조 1을 찍는다.
	for (int i = 0; i < size; i++)
	{
		//cout << *p << endl;
		//cout << *p + i << endl;//값에다가 진짜 1을 더하겠다.!!라는 소리임 그러므로 11,12,13,14 이렇게 찍힌다. 
		//cout << *(p + i) << endl;//10 20 30 40 50 이렇게 찍는다. 
		//p++;
	}
	int sum1 = sumArray(&a[0], size);//v프로토타입을 바꿀 필요없다. 
	cout << sum1 << endl;
	int *q = a;
	cout << a[1] << endl;//20을 찍는다
	cout << *(q+1) << endl;//20을 찍는다
	cout << *p + 1 << endl;//11을 찍는다
	cout << p[1] << endl;//20을 찍는다. ?왜지;
	cout << *(a + 1) << endl;//20을 찍는다. 
	//배열과 포인터는 100프로 같은 용도로 쓸 수 있다. 배열은 첨자로 접근하고 포인터는 역참조로 내용에 접근한다. 배열과 포인터는 같은 방식으로 접근을해도 상관 x
	

//	p = p + 1;//4만큼이 늘어난다.ㄷ다음위치로 이동하겠다는 의미 
	//cout << p << endl;
	//cout << *p << endl;//2를 찍는다. 
	int sum = sumArray(a,size);//변수의 이름을 넘겨도된다.
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
		total += *(a + i);//두개 같은거임 

	}
	return total;
}
int sumArray2(int *p, int size)
{
	int total = 0;
	for (int i = 0; i < size; i++)
	{
		total +=*(p+i);//==p[i]도 가능

	}
	return total;
}
//함수에서 포인터를 전달하면 방법 4가지가 있다
/*
	
*/