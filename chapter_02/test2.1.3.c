#include<stdio.h>

int main(){
	int arr[] = {0,1,2,3,4,5,6,7,8,9};
	int c,left,right,center,type;
	while((c = getchar())!=EOF){
	c = c - '0';
	left = 0;
	right = 9;
	type = 0;
	while((center=(left+right)/2)>=left && center<=right){
		if(c<arr[center])
			right = center-1;
		else if(c>arr[center])
			left = center+1;
		else{
			type = 1;
			break;
		}
	}
	if(type>0)
		printf("v = arr[%d]\n",center);
	else
		printf("v = NIL\n");
	}
	return 0;
}

	
