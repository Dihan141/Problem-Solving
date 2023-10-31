#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    FILE *fp, *fp1;
    char s[10000];
    char s1[10000];
    char *info[3];
    char *info1[5];
    char id[20], gpa[20], sem[20];
    scanf("%s%s%s", &id, &gpa, &sem);

    fp = fopen("E://files//grades.txt", "r");
    fp1 = fopen("E://files//studentInfo.txt", "r");

    
        int flg = 0;
        int flg1 = 0;

        while(fgets(s1, 10000, fp1))
        {
            char *token = strtok(s1, ";");

            int i=0;
            while(token != NULL)
            {
                info1[i++] = token;
                token = strtok(NULL, ";");
            }

            if(strcmp(info1[0], id) == 0)
                flg1 = 1;
        }
        
        if(flg1 == 1)
        {
            while(fgets(s, 10000, fp))
            {
                char *token = strtok(s, ";");

                int i=0;
                while(token != NULL)
                {
                    info[i++] = token;
                    token = strtok(NULL, ";");
                }

                if(atof(gpa) < 2.50 || atof(gpa) > 4.00)
                {
                    flg = 1;
                    printf("CGPA not in limit!");
                    break;
                }
                if(atoi(info[2]) == atoi(sem))
                {
                    flg = 1;
                    printf("Semester already exists!");
                    break;
                }
            }
        }
        else
        {
            flg = 1;
            printf("Student doesn't exist!");
        }

        fclose(fp);
        fclose(fp1);
        if(flg == 0)
        {
            fp = fopen("E://files//grades.txt", "a");

            if(fp == NULL)
                printf("File not found");
            else
            {
                fprintf(fp, "%s,%s,%s\n", id, gpa, sem);
                fclose(fp);
            }    
        }
    
    return 0;
}