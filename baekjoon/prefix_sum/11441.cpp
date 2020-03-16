#include <stdio.h>
#include <iostream>

using namespace std;

int save[100010];

int main(int argc, char const *argv[])
{
	int N; scanf("%d",&N);
	for (int i=0;i<N;i++){
		scanf("%d",&save[i+1]);
		save[i+1]+=save[i];
	}
	int M; scanf("%d",&M);

	while(M--){
		int left,right; scanf("%d %d",&left,&right);
		printf("%d\n",save[right]-save[left-1]);
	}
	return 0;
}
