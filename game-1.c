#include<stdio.h>
int main()
{
   int n;
   if(scanf("%d",&n)!= 1)return 0;
   while (n--){
   
    int a,b;
    scanf("%d %d",&a,&b);
    int arr[15];
    int min = 100;
    int ans_pos;
    int diff;
    for(int i = 1;i <= a;i++){
        scanf("%d",&arr[i]);
        if(arr[i]>b){
            diff = arr[i]-b;
        }
        else{
            diff = b-arr[i];
        }
        if(diff < min){
            min = diff;
            ans_pos = i;
        }
    }
    printf("%d\n",ans_pos);
}
    return 0;
}