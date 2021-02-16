#include <stdio.h>
int main(){
	int x;
	int y;
	int h=0;
	int i;
	int p;
	int dizi[y];
	int a=0;
	int id;
	printf("Sirayla Aralarinda Bosluk Birakarak Kucuk ve Buyuk Sayiyi Giriniz: ");
	scanf("%d %d",&x,&y);
	printf("x=%d y=%d\n",x,y);
	for(i=x;i<y+1;i++){
		h = i/2 ;
		while(i%h!=0 && h>=2){
			h--;
		}
		if(h==1){
			p = 2*i + 1;
			h = p/2 ;
			while(p%h!=0 && h>=2){
				h--;
			}
			if(h==1){
				dizi[a] =i;
				a += 1;
			}
		}	
	}
		printf("Araliktaki Germian Sayilari : ");
	for(id=0; id<a-1; id++){
		printf("%d-",dizi[id]);
	}
	printf("%d",dizi[a-1]);
return 0;
}
