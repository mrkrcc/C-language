#include<stdio.h>

int main(){
	
	int N;
	int i;
	int j = 0;
	int s;
	int en_kucuk;
	int en_buyuk;
	int hata = 0;
	int ebob ;
	int ekok = 1;
	printf("Sayi adedini giriniz: ");
	scanf("%d",&N);
	int A[N];
	for(i=0;i<N;i++){
		printf("%d. Sayiyi giriniz: ",(i+1));
		scanf("%d",&s);
		A[i] = s ;	
	}
	en_kucuk = A[0];
	for(i=0;i<N;i++){
		if(A[i] < en_kucuk){
			en_kucuk = A[i];
		}	
	} 
	for(i=en_kucuk;i>0;i--){
		j = 0;
		while((j<N) && (hata != 1)){	
			if(A[j]%i==0){
				j++;
				if(j==(N)){
					ebob = i;
					hata = 1;
				}
			}
			else{
				j = N;
			}
		}
	}
	en_buyuk = A[0];
	for(i=0;i<N;i++){
		if(en_buyuk < A[i]){
			en_buyuk = A[i];
		}
	}
	hata = 0;
	while(hata == 0){
		for(i=0;i<N;i++){
			if(en_buyuk%A[i] == 0){
				i++ ;
				if(i == N){
					ekok = en_buyuk;
					hata = 1;
				}
				else{
					i--;
				}
			}
			else{
				i = N;
			}
		}
		en_buyuk++ ;
	}
	printf("OBEB(");
	for(i=0;i<N-1;i++){
		printf("%d,",A[i]);
	}
	printf("%d) = %d, ",A[N-1],ebob);
	printf("OKEK(");
	for(i=0;i<N-1;i++){
		printf("%d,",A[i]);
	}
	printf("%d) = %d",A[N-1],ekok);		
return 0;	
}
