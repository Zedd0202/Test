#include<iostream>
#include<cmath>
#include <cstdlib>
#include <iomanip>
#include <ctime>
#include <random>
#define TRUE 1
#define FALSE 0
using namespace std;
void useGlobal(void);
void useLocal();
void useStatic();
int fact(int n);
int fact2(int n);
void staticArray();
void autoArray();
void swap1(int *a, int *b);

void swap1(int &a, int &b);
int add(int x, int y, int z=0);
int x = 10;
#define COL 3
const int ROW = 2;

void printA(int n[2][3]);
void printArray2(array< array<int, COL>, ROW> m);
//int x = 1;// ¿¸ø™ ∫Øºˆ
class AAA
{
public:
    static int cnt;
    int x;
public:
    AAA()
    {
        cnt++;
    }
    void setX(int x)
    {
        this->x = x;
    }
    int getX()
    {
        return x;
    }
};
int AAA::cnt = 0;
template <typename T>
T max(T n1, T n2, T n3)
{
    T m = n1;
    if (m < n2)
    {
        m = n2;
    }
    if (m < n3)
    {
        m = n3;
    }
    return m;
}
double test(double x)
{
    return x * x;
}
int test(int x)
{
    return x * x;
}
int rollDice();
int main()
{
    int a1 = 10;
    if (TRUE)
    {
        cout << "111" << endl;
    }
    else
    {
        cout << "222" << endl;
    }
    
    bool b1 = true;
    bool b2 = false;
    int a = 1;
    
    b2 = b2 + 10;
    a = a + b2;
    cout << boolalpha << a << endl;
    cout << b1 << endl;
    cout << b2 << endl;
    cout << boolalpha << b1 << endl;
    cout << boolalpha << b2 << endl;
    
    
    
    
    
    
    
    srand((unsigned int)time(0));
    int rnd = rand();
    cout << rnd << endl;
    
    int f1, f2, f3, f4, f5, f6;
    f1 = f2 = f3 = f4 = f5 = f6 = 0;
    
    for (int i = 1; i <= 6000000; i++)
    {
        int a = rand() % 6 + 1;
        switch (a)
        {
            case 1:
                f1++;
                break;
            case 2:
                f2++;
                break;
            case 3:
                f3++;
                break;
            case 4:
                f4++;
                break;
            case 5:
                f5++;
                break;
            case 6:
                f6++;
                break;
        }
    }
    
    cout << "Face" << setw(13) << "Frequency" << endl;
    cout << setw(4) << "1" << setw(13) << f1 << endl;
    cout << setw(4) << "2" << setw(13) << f2 << endl;
    cout << setw(4) << "3" << setw(13) << f3 << endl;
    cout << setw(4) << "4" << setw(13) << f4 << endl;
    cout << setw(4) << "5" << setw(13) << f5 << endl;
    cout << setw(4) << "6" << setw(13) << f6 << endl;
    
    
    
    
    
    
    
    int myPoint = 0;
    
    enum Status { CONTINUE, WON, LOST };
    enum Days {MON, TUE, WEN};
    srand(static_cast<unsigned int>(time(0)));
    Status state = CONTINUE;
    cout << state + MON << endl;
    
    int sum = rollDice();
    
    switch (sum)
    {
        case 7:
        case 11:
            state = WON;
            break;
        case 2:
        case 3:
        case 12:
            state = LOST;
            break;
        default:
            state = CONTINUE;
            myPoint = sum;
            cout << "≥ª ∆˜¿Œ∆Æ : " << myPoint << endl;
            break;
    }
    
    while (state == CONTINUE)
    {
        sum = rollDice();
        if (sum == myPoint)
        {
            state = WON;
        }
        else if (sum == 7)
        {
            state = LOST;
        }
    }
    
    if (state == WON)
    {
        cout << "Player Wins" << endl;
    }
    else
    {
        cout << "Player Loses" << endl;
    }
    
    //srand(static_cast<unsigned int>(time(0)));
    default_random_engine engine(static_cast<unsigned int>(time(0)));
    uniform_int_distribution<unsigned int> randomInt(1, 6);
    
    for (int i = 1; i <= 7; i++)
    {
        cout << setw(10) << randomInt(engine);
        if (i % 5 == 0)
            cout << endl;
    }
    
    
    cout <<"1 : " <<  x << endl;
    int x = 5;		// ¡ˆø™ ∫Øºˆ
    cout << "2 : " << x << endl;
    {
        int x = 7;
        cout << "4 : " << x << endl;
    }
    useLocal();
    useStatic();
    useGlobal();
    
    cout << "x = " << ::x++ << endl;
    cout << "======================" << endl;
    useLocal();
    useStatic();
    useGlobal();
    cout << "======================" << endl;
    useLocal();
    useStatic();
    useGlobal();
    
//    int a = 10;
//    int &b = a;
//    
//    int x = 10;
//    int y = 20;
//    cout << "ºˆ«‡¿¸ x = " << x << ", y = " << y << endl;
//    swap1(x, y);
//    cout << "ºˆ«‡»ƒ x = " << x << ", y = " << y << endl;
    
    int x = 20;
    {
        int x = 30;
        cout << x << endl;
        cout << ::x << endl;
    }
    //cout << add() << endl;
    //cout << add(10) << endl;
    cout << add(10, 20) << endl;
    cout << add(10, 20, 30) << endl;
    
    
    
    cout << test(7) << endl;
    cout << test(7.7) << endl;
    cout << test(7.5f) << endl;
 
    
    
    cout << max(10, 50, 20) << endl;
    cout << max(100.5, 50.4, 21.0) << endl;
    cout << max('f', 'k', 'z') << endl;
    
    
    
    
    cout << sizeof(bool) << endl;
    cout << sizeof(char) << endl;
    cout << sizeof(long int) << endl;
    cout << sizeof(long long int) << endl;
    
    for (int i = 0; i <= 10; i++)
    {
        cout << setw(3) << i << "!" << setw(15) << fact(i) << endl;
    }
    
    for (int i = 0; i <= 10; i++)
    {
        cout << setw(3) << i << "!" << setw(15) << fact2(i) << endl;
    }
    
    
    
    
    
    
    
    default_random_engine engine(static_cast<unsigned int>(time(0)));
    uniform_int_distribution<unsigned int> randomInt(1, 6);
    
    const int size = 7;
    array<int, size> freq = {0};
    
    for (int i = 1; i <= 20; i++)
    {
        unsigned int n = randomInt(engine);
        freq[n]++;
        //freq[randomInt(engine)]++;
    }
    
    for (int i = 1; i < freq.size(); i++)
    {
        cout <<setw(4) << i << " : " << setw(10) << freq[i] << endl;
    }
    
    
    
    
    
    
    
    
    
    
    
    
    cout << "1 : " << endl;
    staticArray();
    autoArray();
    cout << "2 : " << endl;
    staticArray();
    autoArray();
    
    
    
    
    array<int, 5> n = {1,2,3,4,5};
    for (int a : n)
    {
        cout << a << endl;
    }
    
    for (int &ra : n)
    {
        ra *= 2;
    }
    
    for (int i = 0; i < n.size(); i++)
    {
        n[i] = n[i] * 2;
    }
    
    
    
    
    cout << AAA::cnt << endl;
    AAA a;
    AAA a1;
    AAA a2;
    cout << AAA::cnt << endl;
    
    
    
    
    
    int a[2][3] = { { 1, 2, 3 },
        { 4, 5, 6 } };
    cout << a << endl;
    array< array<int, COL>, ROW> array1 = { 10, 20, 30,
        40, 50, 60 };
    cout << array1.size() << endl;
    cout << array1[0].size() << endl;
    
    
    printA(a);
    cout << "===============================" << endl;
    printArray2(array1);
    
    
    
    
    
    
    
    
    
    int a = 10;
    int x = 100;
    int *p = nullptr;
    p = &a;					// *p ∆˜¿Œ≈Õ ∫Øºˆ
    int &b = a;
    cout << a << endl;
    cout << &a << endl;
    cout << *p << endl;		// *p ø™¬¸¡∂
    cout << p << endl;
    cout << &p << endl;
    
    p = &x;
    cout << *p << endl;		// *p ø™¬¸¡∂
    cout << p << endl;
    cout << &p << endl;
    
    
    
    
    int a = 10;
    int b = 20;
    cout <<"1 : " <<  a << ", " << b << endl;
    swap1(&a, &b);
    cout <<"4 : " <<  a << ", " << b << endl;
}


void useLocal()
{
    x++;
    int x = 10;
    cout << "5 : " << x << endl;
    x++;
    cout << "6 : " << x << endl;
}

void useStatic()
{
    static int x = 20;
    cout << "7 : " << x << endl;
    x++;
    cout << "8 : " << x << endl;
}

void useGlobal(void)
{
    cout <<"9 : " << x << endl;
    x++;
    cout << "10 : " << x << endl;
}


int rollDice()
{
    int num1 = rand() % 6 + 1;
    int num2 = rand() % 6 + 1;
    int sum = num1 + num2;
    cout << "n1 : " << num1 << ", n2 : " << num2
    << " --> «’ : " << sum << endl;
    return sum;
}
void swap1(int &a, int &b)
{
    cout << ">>ºˆ«‡¿¸ a = " << a << ", b = " << b << endl;
    int temp = a;
    a = b;
    b = temp;
    cout << ">>ºˆ«‡»ƒ a = " << a << ", b = " << b << endl;
}
int add(int x, int y, int z)
{
    int result = 0;
    result = x + y + z;
    return result;
}

int fact(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    else
    {
        return n * fact(n - 1);
    }
}

int fact2(int n)
{
    int result = 1;
    for (int i = 1; i <= n; i++)
    {
        result *= i;
    }
    return result;
}
void staticArray()
{
    static array<int, 5> arr;
    cout << "static :" << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        cout << i << " : " << arr[i] << endl;
    }
    cout << "static ºˆ¡§ :" << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        cout <<"arr[" << i <<"] = " << (arr[i]+=5) << endl;
    }
}

void autoArray()
{
    array<int, 5> arr = {1, 2, 3};
    cout << "auto :" << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        cout << i << " : " << arr[i] << endl;
    }
    cout << "auto ºˆ¡§ :" << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        cout << "arr[" << i << "] = " << (arr[i] += 5) << endl;
    }
}


void printArray2(const array< array<int, COL>, ROW> m)
{
    for (auto const &cols : m)
    {
        for (auto const &a : cols)
        {
            cout << a << "\t";
        }
        cout << endl;
    }
    /*
     for (array<int, COL> cols : m)
     {
     for (int a : cols)
     {
     cout << a << "\t";
     }
     cout << endl;
     }
     */
}
void printA(int n[2][3])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << n[i][j] << "\t";
        }
        cout << endl;
    }
}
void swap1(int *a, int *b)
{
    cout << "3 : " << *a << ", " << *b << endl;
    int temp = *a;
    *a = *b;
    *b = temp;
    cout << "4 : " << *a << ", " << *b << endl;
}
