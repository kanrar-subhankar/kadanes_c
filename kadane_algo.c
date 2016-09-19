#include <stdio.h>

int main()
{
    int n,a[1000000],i,sum=0,temp1=0,temp2=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    		scanf("%d",&a[i]);
    for(i=0;i<n;i++){
    	temp1+=a[i];
    	if(temp1<0)
    		temp1=0;
    	if(temp2<temp1)
    		temp2=temp1;
    }
    printf("%d",temp2);
    return 0;
}

