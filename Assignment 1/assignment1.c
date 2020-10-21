
#include <stdio.h>
#include <limits.h>
int main()
{

    system("color f0");
   short int A;
   unsigned short int F;
   unsigned int G;
   int a;
   long int L;
   unsigned long int M;
   long long int N;
   unsigned long long int K;
   signed char C;
   unsigned char b;
   float c;
   double d;
   long double e;


   printf("Storage size for short int data type:%d \n",sizeof(A));
   printf("Storage size for unsigned short int data type:%d \n",sizeof(F));
   printf("Storage size for unsigned int data type:%d \n",sizeof(G));
   printf("Storage size for int data type:%d \n",sizeof(a));
   printf("Storage size for  long int data type:%d \n",sizeof(L));
   printf("Storage size for unsigned long int data type:%d \n",sizeof(M));
   printf("Storage size for long long int data type:%d \n",sizeof(N));
   printf("Storage size for unsigned long long int data type:%d \n",sizeof(K));
   printf("Storage size for signed char data type:%d \n",sizeof(C));
   printf("Storage size for char data type:%d \n",sizeof(b));
   printf("Storage size for float data type:%d \n",sizeof(c));
   printf("Storage size for double data type:%d\n",sizeof(d));
   printf("Storage size for long double data type:%d \n",sizeof(e));
   return 0;
}
