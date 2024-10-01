#include <stdio.h>


//program untuk menghitung perkalian antara dua matriks
int main () {
	int I,J,K, BarisA,KolomA,KolomB;
	int MatrikA[100][100], MatrikB[100][100], MatrikC[100][100];
	
	//masukkan ORDO dari MATRIKS
	printf("Jumlah baris MATRIKS A?"); scanf("%d", &BarisA);
	printf("Jumlah kolom MATRIKS A?"); scanf("%d", &KolomA);
	printf("\n");
	printf("Jumlah kolom MATRIKS B?"); scanf("%d", &KolomB);
	printf("\n");


	//MATRIKS A
	printf("Masukkan nilai MATRIKS A: \n");
	for(I=0; I<BarisA; I++){
		for(J=0; J<KolomA; J++){
			printf("A(%3d, %3d) ?", I+1, J+1);
			scanf("%d", &MatrikA[I][J]);
		}
		printf("\n");
	}
	//MATRIKS B	
	printf("Masukkan NILAI MATRIKS B: \n");
	for(J=0; J<KolomA; J++) {
		for(K=0; K<KolomB; K++){
			printf("B(%3d, %3d) ?", J+1, K+1);
			scanf("%d", &MatrikB[J][K]);
		}
	printf("\n");
	}
	//MENGHITUNG MATRIKS C ADALAH MATRIKS A DIKALI MATRIKS B
	for(I=0; I<BarisA; I++){
		for(K=0; K<KolomB; K++){
			MatrikC[I][K] = 0;
			for(J=0; J<KolomA; J++)
				MatrikC[I][K] += MatrikA[I][J] * MatrikB[J][K];	
		}
	}

	//HASIL
	printf("Hasil perkalian matriks \n");
	printf("\n");
	for(I=0; I<BarisA; I++){
		for(K=0; K<KolomB; K++) printf("%7d", MatrikC[I][K]);
		printf("\n");
	}
	printf("\n");
	return 0;
}
