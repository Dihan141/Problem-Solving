#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int RandomNum()
{
    return rand()%2;
}

int main()
{
    srand(time(0));

    int numberOfVertices;
    int sumOfDegrees = 0;
    scanf("%d", &numberOfVertices);

    int graph[numberOfVertices][numberOfVertices];

    for(int i=0; i<numberOfVertices; i++)
    {
        for(int j=0; j<numberOfVertices; j++)
        {
            graph[i][j] = RandomNum();
        }
    }

    for(int i=0; i<numberOfVertices; i++)
    {
        for(int j=0; j<numberOfVertices; j++)
        {
            if(i == j)
                graph[i][j] = 0;
            else if(graph[i][j] == 1)
                graph[j][i] = 1;
            else
                graph[j][i] = 0;
        }
    }

    for(int i=0; i<numberOfVertices; i++)
    {
        for(int j=0; j<numberOfVertices; j++)
        {
            if(graph[i][j] == 1)
                sumOfDegrees++;
        }
    }

    for(int i=0; i<numberOfVertices; i++)
    {
        for(int j=0; j<numberOfVertices; j++)
        {
            printf("%d ", graph[i][j]);
        }
        printf("\n");
    }

    for(int i=0; i<numberOfVertices; i++)
    {
        int degreeCount = 0;
        for(int j=0; j<numberOfVertices; j++)
        {
            if(graph[i][j] == 1)
                degreeCount++;
        }
        printf("Vertex %d has degree of: %d\n", i, degreeCount);
    }
    
    printf("Number of edges: %d\n", sumOfDegrees/2);
    printf("Sum of degrees: %d\n", sumOfDegrees);
    return 0;
}