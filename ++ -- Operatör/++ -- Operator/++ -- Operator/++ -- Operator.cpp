// ++ -- Operator.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <stdio.h>

int main()
{
    int  sayi;
    sayi = 10;
    
    printf("Sayi: %d \n", sayi);

    printf("Sayi: %d \n", ++sayi);

    printf("Sayi: %d \n", sayi);

    printf("Sayi: %d \n", ++sayi);

    printf("Sayi: %d \n", sayi);
}

//Kısaca atadığınız değişkenin (float,double,int vs.) 
//Girilen sayı: (x)  .Değişkeninizin önüne ++ veya -- operatörlerinden herhangi birini koyarsanız;
//İlk girdiyi +1 veya -1 azaltır ve bir sonraki girdi de x+1 veya x-1 olarak gözükür.

//Eğer değişkeninizin arkasına ++ veya -- operatörlerini koyarsanız;
//İlk girdiniz değişken sayınız gözükür ve bir sonraki girdi x+1 veya x-1 olarak gözükür.
//Yukarda deneyiniz.
