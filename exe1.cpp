#include<stdio.h>

main()
{
	printf("Input n: ");
	int n;
	scanf("%d", &n);
	printf("Input arr values: \n");
	int ary[n];
	for(int i=0; i<n; i++){
		scanf("%d", &ary[i]);
	}
	int chan=0;
	for(int i=0; i<n; i++){
		if(ary[i]%2==0){
			chan=ary[i];
		}
	}
	if(chan==0){
		printf("No even!\n");
	}else{
		printf("Last even is: %d\n", chan);
	}
}
