#include<iostream>

using namespace std;


    int main()
    {
        int a = 100;        
        double b = 123.4;  
        float c = 123.4f;
        char d = 'a'; 
    
        cout << "a   " << a << "  size   " << sizeof(a) << "  address   " << &a << endl;
        cout << "b   " << b << "  size   " << sizeof(b) << "  address   " << &b << endl;
        cout << "c   " << c << "  size   " << sizeof(c) << "  address   " << &c << endl;
        cout << "d   " << d << "  size   " << sizeof(d) << "  address   " << (void *) &d << endl;


        /*******************************************
        sizeof���Z�q�̎g�p���@
        sizeof(int)	   �� int�^�̃T�C�Y���擾
        sizeof(a)	   �� �ϐ�a�̃T�C�Y���擾
        *********************************************/

	system("pause>0");

}