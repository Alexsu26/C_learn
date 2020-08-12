#include <stdio.h>
#include <string.h>
#include <stdlib.h>

size_t myStrlen(const char* s)
{
    int cnt = 0;
    int idx = 0;
    while(s[idx] != '\0')
    {
        idx++;
        cnt++;
    }
    return cnt;
}

int mycmp(const char *s1,const char* s2)
{
    int idx = 0;
    while( s1[idx] == s2[idx] && s1[idx] != '0')
    {
        // if( s1[idx] != s2[idx])
        // {
        //     break;
        // }
        // else if( s1[idx] =='\0')
        // {
        //     break;
        // }
        idx++;
    }
    return s1[idx]-s2[idx];
}

char* mycpy(char* dst,const char* src)
{
    int idx = 0;
    while ( src[idx] )
    {
        dst[idx] = src[idx];
        idx++;
    }
    dst[idx] = '\0';
    //指针表达
    char* ret = dst;
    while(*src)
    {
        *dst++ = *src++;
        //dst++;
        //src++;
    }
    *dst = '\0';
    return dst;
}

int main(int argc, char const *argv[])
{
    //strlen:字符串长度
    char line[] = "Hello";
    printf("strlen=%d\n",myStrlen(line));
    printf("sizeof=%d\n",sizeof(line));

    //strcmp:比较两个字符串：
//0：s1 == s2;  1:s1>s2;    -1:s1<s2
    char s1[] = "abc";
    char s2[] = "aea";
    printf("%d\n",'a'-'A');
    printf("strcmp=%d\n",strcmp(s1,s2));
    printf("mycmp=%d\n",mycmp(s1,s2));

    //strcpy:拷贝字符串
    
    //字符串中找字符:strchr从左开始\strrchr从右开始
    char s3[] = "Hello";
    char *p = strchr(s3,'l');
    char *t = (char*)malloc(strlen(p)+1);
    strcpy(t,p);
    printf("%s\n",strchr(p+1,'l'));
    printf("%s\n",t);
    free(t);

    //字符串中寻找字符串strstr\strcasestr(忽略大小写)
    
    return 0;
}
