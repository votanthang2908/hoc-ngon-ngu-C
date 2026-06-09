//viet phuong trinh nhap vao mot gia tri n va in ra man hinh boi cua 3 nho hon hoac bang n
#include<stdio.h>
#include<math.h> 
int main(){
	int n;
	printf("nhap  vao gia tri n:");
	scanf("%d",&n);
	for (int i=0; i<=n; i++){
		if (i%3==0){
			printf("boi cua 3 la:%d\n",i);
		} 
	}
} 
