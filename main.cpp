#include<iostream>
#include <stdio.h>
#define _NO_CRT_STDIO_INLINE 
using namespace std;

    int main()
    {
        int a = 100;        
        double b = 123.4;  
        float c = 123.4f;
        char d = 'a'; 
    
        cout << "a   " << a << "  size   " << sizeof(a) << "  address   "  << &a << endl;
        cout << "b   " << b << "  size   " << sizeof(b) << "  address   "  << &b << endl;
        cout << "c   " << c << "  size   " << sizeof(c) << "  address   "  << &c << endl;
        cout << "d   " << d << "  size   " << sizeof(d) << "  address   "  << (void *) &d << endl;
        cout << endl;

        cout << "a   " << a << "  size   " << sizeof(a) << "  address   " << hex << &a << endl;
        cout << "b   " << b << "  size   " << sizeof(b) << "  address   " << hex << &b << endl;
        cout << "c   " << c << "  size   " << sizeof(c) << "  address   " << hex << &c << endl;
        cout << "d   " << d << "  size   " << sizeof(d) << "  address   " << hex << (void*)&d << endl;
        cout << endl;

        printf( "%d\t%d\t0x%x\n", a, sizeof(a),  &a);
        printf( "%f\t%d\t0x%x\n", b, sizeof(b), &b);
        printf( "%f\t%d\t0x%x\n" , c, sizeof(c), &c);
        printf( "%s\t%d\t0x%x\n", d, sizeof(d), (void *)&d);

        

	system("pause>0");

}