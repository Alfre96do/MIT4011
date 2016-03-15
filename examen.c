#include <stdio.h>
void imprimir(int arr[], int siz){
	for (int i=0; i<siz; i++) {
		printf("%d ",arr[i]);
	}
}	
void quickS(int arr[],int init,int siz){
	int cero = init, ultim = siz; 
	int ref, aux, dd;
	dd =(cero+ultim)/2;
	ref = arr[dd];
	cero = init;
	ultim = siz;
	do{
		while(cero<siz && arr[cero]<ref){
			cero++;
		}
		while(ultim > init && ref<arr[ultim]){
			ultim--;
		}
		if(cero <=ultim){
			aux = arr[ultim];
			arr[ultim]=arr[cero];
			arr[cero]=aux;
			ultim--;
			cero++;
		}
	}while(cero<=ultim);
	if(init<ultim)
		quickS(arr,init,ultim);
	if(siz>cero)
		quickS(arr,cero,siz);
}
int main(){
	int siz;
	printf("Dame el tamaño de tu arreglo:\n");
	scanf("%d", &siz);
	int arr[siz];
	printf("Introduce los valores: \n");
	for(int i = 0; i<siz;i++){
		int valor;
		scanf("%d", &valor);
		arr[i]=valor;
	}
	quickS(arr,0,siz-1);
	printf("Tus valores ordenados: \n");
	imprimir(arr, siz);
	printf("\n");
	return 0;
}


















































































































































