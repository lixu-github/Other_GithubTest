#include<stdio.h>

int main(){
	int arr[] = {0,1,2,3,4,5,6,7,8,9};
	int c,i,type;
	while((c = getchar())!=EOF){
	c = c - '0';	
	type = 0;
	for(i=0;i<10;i++){
		if(c == arr[i]){
			type = 1;
			break;
		}
	}
	if(type>0)
		printf("v = arr[%d]\n",i);
	else
		printf("v = NIL\n");
	}
	return 0;
}

	
