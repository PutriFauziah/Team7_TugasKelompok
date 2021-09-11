#include <stdio.h>
#include <math.h>

int main()
{
    int num01, num02, sumNumbers;
    float averageNumbers, squareNumbers;
    printf("Masukkan bilangan pertama : ");
    scanf("%d", &num01);

	printf("Masukkan bilangan kedua : ");
    scanf("%d", &num02);

    if (num01 % 2 == 0) {
        printf("Harap bilangan pertama diisi dengan bilangan ganjil!");
		printf("\n\n");
       
		return main();
    }else if (num02 % 2 > 0) {
        printf("Harap bilangan kedua diisi bilangan genap!\n");
		printf("\n\n");
        
		return main();
    }else{
		 printf("========================================== \n");

		sumNumbers = num01 + num02;
		squareNumbers = pow(num01, num02);
		averageNumbers = (float)(num01 + num02) / 2;
		printf("Jumlah dua bilangan adalah = %d\n", sumNumbers);
		printf("Rata-rata dua bilangan adalah = %.1f\n", averageNumbers);
		printf("Kuadrat dari kedua bilangan adalah = %.1f\n", squareNumbers);
	}

	return 0;
}