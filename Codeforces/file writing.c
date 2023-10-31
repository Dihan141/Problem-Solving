#include<string.h>
#include<stdio.h>

struct Info
{
    char *name;
    char *address;
    char *salary;
    char *bloodGrp;
};


int main()
{
    FILE *fp, *fp1;

    char name[50];
    char *infos[4];
    char c;

    fp = fopen("E://file handling//dihan.txt", "r");
    fp1 = fopen("E://file handling//output.txt", "w");;

    if(fp == NULL)
        printf("File is not open.");
    else
    {
        while((c = fgetc(fp)) != EOF)
        {
            struct Info p;
            fscanf(fp, "%[^\n]", name);
            char *token = strtok(name, ",");

            int i = 0;
            while(token != NULL)
            {
                infos[i++] = token;
                token = strtok(NULL, ",");
            }        

            p.name = infos[0];
            p.address = infos[1];
            p.salary = infos[2];
            p.bloodGrp = infos[3];

            fprintf(fp1, "%s,%s,%s,%s\n", p.name, p.address, p.salary, p.bloodGrp);   
        }
        fclose(fp);
        fclose(fp1);
        printf("\nFile closed now.");
    }
    return 0;
}