#include<iostream>

using namespace std;


    int main()
    {
        int a = 100;        //  int�^�̕ϐ�
        double b = 123.4;   //  double�^�̕ϐ�
        float c = 123.4f;   //  float�^�̕ϐ�(���l�̌���f����)
        char d = 'a';       //  char�^�̕ϐ�
        printf("a�̒l��%d�A�傫����%dbyte�A�A�h���X��0x%X\n", a, sizeof(a), (unsigned int)&a);
        printf("b�̒l��%f�A�傫����%dbyte�A�A�h���X��0x%X\n", b, sizeof(b), (unsigned int)&b);
        printf("c�̒l��%f�A�傫����%dbyte�A�A�h���X��0x%X\n", c, sizeof(c), (unsigned int)&c);
        printf("d�̒l��%c�A�傫����%dbyte�A�A�h���X��0x%X\n", d, sizeof(d), (unsigned int)&d);

        /*******************************************
        sizeof���Z�q�̎g�p���@
        sizeof(int)	   �� int�^�̃T�C�Y���擾
        sizeof(a)	   �� �ϐ�a�̃T�C�Y���擾
        *********************************************/

	system("pause>0");

}