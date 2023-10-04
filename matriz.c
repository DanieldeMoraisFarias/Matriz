#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int tamanho;
int i;
int j;
int var;
const int tamLin=5;
const int tamCol=5;

void dimensionarMatriz(int linhas,int colunas){
	tamanho=linhas*colunas;
}
void zerarMatriz(int *mat){
	for(i=0;i<tamanho;i++){
		mat[i]=0;
	}
}
void imprimirMatriz(int *mat){
	for(i=0;i<tamLin;i++){
		for(j=0;j<tamCol;j++){
			printf("%d ",buscarElemento(mat,i,j));
		}
		printf("\n");
	}
	
}
void adicionar(int *mat,int linha,int coluna, int valor){
	var=linha*tamLin+coluna;
	mat[var]=valor;
}
void remover(int *mat,int linha,int coluna){
	var=linha*tamLin+coluna;
	mat[var]=0;	
}

void imprimirValor(int *mat,int linha,int coluna){
	var=linha*tamLin+coluna;
	printf("%d",mat[var]);
}

int buscarElemento(int *mat,int linha,int coluna){
	var=linha*tamLin+coluna;
	return mat[var];
}

void main(){	
	dimensionarMatriz(tamLin,tamCol);
	int mat[tamanho];
	zerarMatriz(mat);
	adicionar(mat,1,1,5);
	adicionar(mat,2,2,5);
	adicionar(mat,2,3,8);
//	adicionar(mat,2,1,3);
//	buscarElemento(mat,1,1);
//	remover(mat,2,1);
	imprimirMatriz(mat);
//	imprimirValor(mat,2,1);
}
