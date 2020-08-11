//鏁扮粍搴旀湁搴�,閲囩敤浜屽垎鎼滅储
#include <stdio.h>

int search(int key,int a[],int len)
{
    int ret = -1;
    int left = 0;
    int right = len-1;
    while(left <= right)
    {
        int mid = (left+right)/2;
        if(a[mid] == key)
        {
            ret = mid;
            break;
        }
        else if( a[mid] > key)
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }
    return ret;
}

int main(int argc, char const *argv[])
{
    int k;
    int a[] = {1,2,3,4,5,6,7,8,9,10};
    scanf("%d",&k);
    int loc = search(k,a,sizeof(a)/sizeof(a[0]));
    if(loc == -1)
        printf("%d涓嶅湪鏁扮粍涓璡n",k);
    else
        printf("%d鍦ㄦ暟缁勪腑鐨勭%d浣峔n",k,loc+1);
    return 0;
}
