//this program is for calculating two matrix multiplications
#include <stdio.h>

int main () {
	int I,J,K, RowA,ColA,ColB;
	int MatrikA[100][100], MatrikB[100][100], MatrikC[100][100];
	
	//masukkan ORDO dari MATRIKS
	printf("How Many Rows in (A)?"); scanf("%d", &RowA); 
	printf("How Many Columns in (A)?"); scanf("%d", &ColA);
	printf("\n");
	printf("How Many Columns in (B)?"); scanf("%d", &ColB);
	printf("\n");


	//MATRIX A
	printf("Insert Value for MATRIX A: \n"); 
	for(I=0; I<RowA; I++){
		for(J=0; J<ColA; J++){
			printf("A(%3d, %3d) ?", I+1, J+1);
			scanf("%d", &MatrikA[I][J]);
		}
		printf("\n");
	}
	//MATRIX B
	printf("Insert Value for MATRIX B: \n");
	for(J=0; J<ColA; J++) {
		for(K=0; K<ColB; K++){
			printf("B(%3d, %3d) ?", J+1, K+1);
			scanf("%d", &MatrikB[J][K]);
		}
	printf("\n");
	}
	//CALCULATING AxB = C
	for(I=0; I<RowA; I++){
		for(K=0; K<ColB; K++){
			MatrikC[I][K] = 0;
			for(J=0; J<ColA; J++)
				MatrikC[I][K] += MatrikA[I][J] * MatrikB[J][K];	
		}
	}

	//RESULT
	printf("Hasil perkalian matriks \n");
	printf("\n");
	for(I=0; I<RowA; I++){
		for(K=0; K<ColB; K++) printf("%7d", MatrikC[I][K]);
		printf("\n");
	}
	printf("\n");
	return 0;
}
