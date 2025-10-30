#include<stdio.h>
int main(){
	int a,b ;
	scanf("%d%d",&a,&b);
	if(a>b){
	
	printf("max:%d",a);
	printf("min: %d",b);
}
	else if (b>a){
	
	printf("max:%d",b);
	printf("min : %d",a);
}
	else
	printf("equal");
	return 0;
}

