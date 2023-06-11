#include<iostream>

using namespace std;


    int main()
    {
        int a = 100;        //  int型の変数
        double b = 123.4;   //  double型の変数
        float c = 123.4f;   //  float型の変数(数値の後ろにfつける)
        char d = 'a';       //  char型の変数
        printf("aの値は%d、大きさは%dbyte、アドレスは0x%X\n", a, sizeof(a), (unsigned int)&a);
        printf("bの値は%f、大きさは%dbyte、アドレスは0x%X\n", b, sizeof(b), (unsigned int)&b);
        printf("cの値は%f、大きさは%dbyte、アドレスは0x%X\n", c, sizeof(c), (unsigned int)&c);
        printf("dの値は%c、大きさは%dbyte、アドレスは0x%X\n", d, sizeof(d), (unsigned int)&d);

        /*******************************************
        sizeof演算子の使用方法
        sizeof(int)	   ← int型のサイズを取得
        sizeof(a)	   ← 変数aのサイズを取得
        *********************************************/

	system("pause>0");

}