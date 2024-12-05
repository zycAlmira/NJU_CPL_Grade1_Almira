#include<stdlib.h>
#include<string.h>
#include<stdio.h>
void interleaveString(char *s1,char *s2,int d1,int d2,int size)
{
    int len1=strlen(s1);
    int len2=strlen(s2);
    int temp1=0,temp2=0,tep=0;
    while (size>0)
    {
        if ((d1>=len1||len2==-1)&&size>len1)
        {
            for (int j = 0 ;j < len1; j++)
            {
                printf("%c",s1[j+temp1]);
            }
            for (int i = 0; i < len2; i++)
            {
                printf("%c",s2[i+temp2]);
            }
            break;
        }
        else if ((d1<len1||len2==-1)&&size>d1)
        {
            for (int j = 0 ;j < d1; j++)
            {
                printf("%c",s1[j+temp1]);
            }
            if (len2==-1)
            {
                break;
            }

            size-=d1;
            len1-=d1;
            temp1+=d1;
            if (d2>=len2&&size>len2)
            {
                for (int i = 0; i < len2; i++)
                {
                    printf("%c",s2[i+temp2]);
                }
                len2=-1;

            }
            else if (d2<len2&&size>d2)
            {
                for (int i = 0; i < d2; i++)
                {
                    printf("%c",s2[i+temp2]);
                }
                size-=d2;
            }
            else
            {
                for (int i = 0; i < size; i++)
                {
                    printf("%c",s2[i+temp2]);
                }
                break;
            }
            temp2+=d2;
        }

        else
        {
            for (int i = 0; i < size; i++)
            {
                printf("%c",s1[i+temp1]);
            }
            break;
        }

    }

}


int main()
{
    char *sss=(char*)malloc(2008*sizeof(char));
    char *s1=(char*)malloc(1001*sizeof(char));
    char *s2=(char*)malloc(1001*sizeof(char));

    int T=0;
    int d1=0,d2=0,size=0;
    const char delim[2]=";";
    scanf("%d",&T);
    while (T--)
    {
        scanf("%s",sss);
        s1=strtok(sss,delim);
        s2=strtok(NULL,delim);
        d1=atoi(strtok(NULL,delim));
        d2=atoi(strtok(NULL,delim));
        size=atoi(strtok(NULL,delim));
        interleaveString(s1,s2,d1,d2,size);
        printf("\0");
        printf("\n");

    }

}

