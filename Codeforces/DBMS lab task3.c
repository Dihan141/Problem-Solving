#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    FILE *fp, *fp1;
    char s[10000];
    char s1[10000];
    char *info[3], *info1[5];

    fp = fopen("E://files//grades.txt", "r");

    if(fp == NULL)
        printf("File could not be opened!");
    else
    {
        int id;
        float gpa;
        int sem;
        char name[10];

        int idinpt;
        scanf("%d", &idinpt);

        int f = 0;
        float sum = 0;
        int cnt = 0;

        fp1 = fopen("E://files//studentInfo.txt", "r");


        while(fgets(s1, 10000, fp1))
        {
            char *token = strtok(s1, ";");

            int i=0;
            while(token != NULL)
            {
                info1[i++] = token;
                token = strtok(NULL, ";");
            }

            if(atoi(info1[0]) == idinpt)
            {
                f = 1;
                strcpy(name, info1[1]);
            }
        }
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

            if(id == idinpt)
            {
                sum += gpa;
                cnt++;
            }
        }
        if(f == 0)
        {
            printf("No student found!");
        }
        else
        {
            printf("%s %f", name, sum/cnt);
        }
    }
    return 0;
}