#include<stdio.h>
#define MAX 300
int main(){
	int N;
	int A[N];
	int X[MAX];
	int Y[MAX];
	int i;
	int j=0;
	int sayi;
	int hata=0;
	int c=0;
	int id;
	int smtr = 0;
	int ynsm = 0;
	do{
		hata=0;
		printf("Dizi uzunlugunu giriniz: ");
		scanf("%d",&N);
		for(i=0;i<N;i++){
			printf("%d. sayiyi giriniz: ",(i+1));
			scanf("%d",&sayi);
			A[i] = sayi ;	
		}
		for(i=0;i<N;i++){
			if(A[i] <= 0){
				hata = 1;
			}
		}
		if(hata==1){
			printf("Lutfen pozitif tam sayi giriniz!!!\n");
		}	
	}
	while(hata == 1);
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			if(((2-A[j])%A[i]) == 0){
				X[c] = A[i];
				Y[c] = A[j];
				c = c + 1;
			}
		}	
	}
	printf("X = {");
	for(id=0;id<c-1;id++){
		printf("%d, ",X[id]);
	}
	printf("%d}\n",X[c-1]);
	printf("Y = {");
	for(id=0;id<c-1;id++){
		printf("%d, ",Y[id]);
	}
	printf("%d}\n",Y[c-1]);
//	yansýma ve simetrik 
	for(i=0;i<c;i++){
		if(X[i]==Y[i]){
			ynsm++;
		}
	}
	for(i=0;i<c;i++){
		for(j=0;j<c;j++){
			if(X[i]==Y[j] && Y[i]==X[j]){
				smtr++;
			}
		}
	}
	if((ynsm==N) && (smtr==c)){
		printf("Bu baginti yansima ve simetri ozelliklerini saglamaktadir.");
	}
	else if(ynsm==N){
		printf("Bu baginti yansima ozelligini saglamaktadir.\nBu baginti simetri ozelligini saglamamaktadir.");
	}
	else if(smtr==c){
		printf("Bu baginti yansima ozelligini saglamamaktadir.\nBu baginti simetri ozelligini saglamaktadir.");
	}
	else{
		printf("Bu baginti yansima ve simetri ozelliklerini saglamamaktadir.");
	}
return 0;	
}
