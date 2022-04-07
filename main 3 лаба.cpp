#include <iostream>
#include <iomanip>
#include <limits>
#include <bitset>
using namespace std;

void print16(void* p)
{
    std::bitset<16> signed_bitset(*reinterpret_cast<short *>(p));
    //std::bitset<16> unsigned_bitset(*reinterpret_cast<unsigned short *>(p));
    cout<<setfill(' ');
    cout<<setw(16) << "binary" << "|"<<
          setw(4) << "hex" << "|"<<
          setw(11) << "un decimal" << "|"<<
          setw(11) << "decimal" << endl;
    cout<<setfill(' ');
    cout<<setw(16) << signed_bitset << "|"<<
          setw(4) << hex<<(*(reinterpret_cast<unsigned short *>(p)))<< "|"<<
          setw(11) << dec<<*(reinterpret_cast<unsigned short *>(p))<< "|"<<
          setw(11) << dec<<*(reinterpret_cast<short *>(p))<< endl;

}

void print32(void* p)
{
    std::bitset<32> signed_bitset(*reinterpret_cast<int *>(p));
    //std::bitset<32> unsigned_bitset(*reinterpret_cast<unsigned int *>(p));
    cout<<setfill(' ');
    cout<<setw(32) << "binary" << "|"<<
          setw(8) << "hex" << "|"<<
          setw(11) << "un decimal" << "|"<<
          setw(11) << "decimal" << "|"<<
          setw(9) << "float" << "|"<<
          setw(9) << "exponent" << endl;
    cout<<setfill(' ');
    cout<<setw(32) << signed_bitset << "|"<<
          setw(8) << hex << (*(reinterpret_cast<unsigned int *>(p)))<< "|"<<
          setw(11) << dec << *(reinterpret_cast<unsigned int *>(p))<< "|"<<
          setw(11) << dec << *(reinterpret_cast<int *>(p)) << "|"<<
          setw(9) << dec << setprecision(4) << fixed << (*reinterpret_cast<float *>(p)) << "|"<<
          setw(9) << dec << setprecision(4) << scientific << *(reinterpret_cast<float *>(p)) << endl;
}

void expansion_from_16_to_32(void* p)
{
    short sign_short=*(reinterpret_cast<short *>(p));
    int sign_int =static_cast <int> (sign_short);
    print16(&sign_short);
    print32(&sign_int);
    cout<<endl;
    unsigned short unsign_short=*(reinterpret_cast<unsigned short *>(p));
    unsigned int unsign_int = static_cast <int>(unsign_short);
    print16(&unsign_short);
    print32(&unsign_int);
}

void exercise_2()
{
    cout<<"Exercise 2"<<endl;
    short m=986;
    cout<<"For 986:"<<endl;
    expansion_from_16_to_32(&m);
    unsigned n = -126;
    cout<<"For -126:"<<endl;
    expansion_from_16_to_32(&n);
}

void exercise_3()
{
    short m = 986;
    short n = -126;
    unsigned short m_uns = 986;
    unsigned short n_uns = -126;
    cout << "For m:" << endl;
    cout << "Initial m:" << endl;
    print16(&m);

    cout << "Signed m*2:" << endl;
    short m2 = m*2;
    print16(&m2);

    cout << "Unsigned m*2:" << endl;
    unsigned short m3 = m_uns*2;
    print16(&m3);

    cout << "Signed m/2:" << endl;
    short m4 = m/2;
    print16(&m4);

    cout << "Unsigned m/2:" << endl;
    unsigned short m5 = m_uns/2;
    print16(&m5);

    cout << "m mod 16:" << endl;
    unsigned short m6 = m_uns%16;
    print16(&m6);

    cout << "Rounding down:" << endl;
    unsigned short m7 = m_uns-m6;
    print16(&m7);

    // n

    cout << endl << "For n:" << endl;

    cout << "Initial n:" << endl;
    print16(&n);

    cout << "Signed m*2:" << endl;
    short n2 = n*2;
    print16(&n2);

    cout << "Unsigned m*2:" << endl;
    unsigned short n3 = n_uns*2;
    print16(&n3);

    cout << "Signed m/2:" << endl;
    short n4 = n/2;
    print16(&n4);

    cout << "Unsigned m/2:" << endl;
    unsigned short n5 = n_uns/2;
    print16(&n5);

    cout << "m mod 16:" << endl;
    unsigned short n6 = n_uns%16;
    print16(&n6);

    cout << "Rounding down:" << endl;
    unsigned short n7 = n_uns-m6;
    print16(&n7);
}

void exercise_4()
{
    short m=986;
    short n= -126;
    unsigned short m_=986;
    unsigned short n_= static_cast <int>(-126);
    cout<<"Initial data"<<endl;
    print16(&m);
    print16 (&n);
    print16(&m_);
    print16 (&n_);

    cout<<"Sign shift left by 1 bit"<<endl;
    short m1= m << 1;
    short n1= n << 1;
    print16(&m1);
    print16 (&n1);
    cout<<"Unsigned left shift by 1 bit"<<endl;
    unsigned short m2= m_ << 1;
    unsigned short n2= n_ << 1;
    print16(&m2);
    print16 (&n2);
    cout<<"Sign shift right by 1 bit"<<endl;
    short m3= m >> 1;
    short n3= n >> 1;
    print16 (&m3);
    print16 (&n3);
    cout<<"Unsigned right shift by 1 bit"<<endl;
    unsigned short m4= m_ >> 1;
    unsigned short n4= n_ >> 1;
    print16 (&m4);
    print16 (&n4);
    cout<<"X & 15"<<endl;
    short m5= m & 15;
    short n5= n & 15;
    print16(&m5);
    print16 (&n5);
    cout<<"X & -16"<<endl;
    short m6=m & (-16);
    short n6= n & (-16);
    print16(&m6);
    print16 (&n6);
}

void exercise_5()
{
    int x;
    cout << "Enter the number "<<endl;
    cin >> x;
    int D = 64;
    cout << "Rounding down: " << x - (x&(D-1)) << endl;
    cout << "Rounding up: "     << x + D - (x&(D-1)) << endl;

}

void exercise_6_increment()
{
    int m = 564;
    int n = -322;

    double a = 0;
    double b = 1;
    double c = 12233445;
    double d = 122334455;

    int zero = 0;
    unsigned int umax = UINT_MAX;
    int max = INT_MAX;
    int min = INT_MIN;

    cout << "Original numbers" << endl;
    print32(&m);
    print32(&n);
    print32(&a);
    print32(&b);
    print32(&c);
    print32(&d);
    print32(&zero);
    print32(&umax);
    print32(&max);
    print32(&min);

    cout << "Increment" << endl;
    print32(&(++m));
    print32(&(++n));
    print32(&(++a));
    print32(&(++b));
    print32(&(++c));
    print32(&(++d));
    print32(&(++zero));
    print32(&(++umax));
    print32(&(++max));
    print32(&(++min));
}

void exercise_6_decrement()
{
    int m = 564;
    int n = -322;

    double a = 0;
    double b = 1;
    double c = 12233445;
    double d = 122334455;

    int zero = 0;
    unsigned int umax = UINT_MAX;
    int max = INT_MAX;
    int min = INT_MIN;

    cout << "Original numbers" << endl;
    print32(&m);
    print32(&n);
    print32(&a);
    print32(&b);
    print32(&c);
    print32(&d);
    print32(&zero);
    print32(&umax);
    print32(&max);
    print32(&min);

    cout << "Decrement" << endl;
    print32(&(--m));
    print32(&(--n));
    print32(&(--a));
    print32(&(--b));
    print32(&(--c));
    print32(&(--d));
    print32(&(--zero));
    print32(&(--umax));
    print32(&(--max));
    print32(&(--min));
}

void menu_t()
{
    cout<<endl;
    cout<<"Enter 0 for exit"<<endl;
    cout<<"Enter 1 for exercise 2"<<endl;
    cout<<"Enter 2 for exercise 3"<<endl;
    cout<<"Enter 3 for exercise 4"<<endl;
    cout<<"Enter 4 for exercise 5"<<endl;
    cout<<"Enter 5 for exercise 6 increment"<<endl;
    cout<<"Enter 6 for exercise 6 increment"<<endl;

    cout<<endl;
}

void menu()
{
    int n;
    menu_t();
    cin>>n;
    while(n!=0)
    {
        switch (n)
        {
            case 0:
            {
                return;
            }
            case 1:
            {
                exercise_2();
                break;
            }
            case 2:
            {
                exercise_3();
                break;
            }
            case 3:
            {
                exercise_4();
                break;
            }
            case 4:
            {
                exercise_5();
                break;
            }
            case 5:
            {
                exercise_6_increment();
                break;
            }
            case 6:
            {
                exercise_6_decrement();
                break;
            }
        }
        menu_t();
        cin>>n;
    }
}
int main()
{
    menu();
    return 0;
}
