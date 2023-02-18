#include<stdio.h>

float tbc(int ary[], int n){
	int t=0;
	for(int i=0; i<n; i++){
		t = t+ary[i];
		}
	float tb = float(t)/n;
	return tb;
	}
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
	float tb=tbc(ary, n);
	printf("Averarge= %f\n", tb);
}
