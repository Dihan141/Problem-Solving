#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    FILE *fp;
    char s[10000];
    char *info[3];

    fp = fopen("E://files//grades.txt", "r");

    if(fp == NULL)
        printf("File could not be opened!");
    else
    {
        int id;
        float gpa;
        int sem;

        float max = 0;
        int mxid;
        while(fgets(s, 10000, fp))
        {
            char *token = strtok(s, ";");

            int i=0;
            while(token != NULL)
            {
                info[i++] = token;
                token = strtok(NULL, ";");
            }

            id = atoi(info[0]);
            gpa = atof(info[1]);
            sem = atoi(info[2]);

            if(gpa > max)
            {
                max = gpa;
                mxid = id;
            }
        }
        printf("%d\n", mxid);
    }
    return 0;
}