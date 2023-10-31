#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    for(int i=1; i<=t; i++)
    {
        int cities, roads, src, dest, roadcost, home;
        cin>>cities>>roads;

        vector<int> area[cities];
        int res[cities];
        int cost[cities][cities];
        memset(cost, 0, sizeof(cost));

        for(int i=0; i<=cities; i++)
        {
            res[i] = INT_MAX;
        }

        for(int i=0; i<roads; i++)
        {
            cin>>src>>dest>>roadcost;

            if(cost[src][dest])
            {
                cost[src][dest] = min(cost[src][dest], roadcost);
                cost[dest][src] = cost[src][dest];
            }
            else
            {
                area[src].push_back(dest);
                area[dest].push_back(src);
                cost[src][dest] = roadcost;
                cost[dest][src] = roadcost;
            }
        }
        cin>>home;

        res[home] = 0;
        queue<int> cityque;
        cityque.push(home);

        bool hasVisited[cities];
        for(int i=0; i<cities; i++)
            hasVisited[i] = false;

        hasVisited[home] = true;

        while(!cityque.empty())
        {
            int start = cityque.front();
            cityque.pop();

            for(int i=0; i<area[start].size(); i++)
            {
                int current = area[start][i];

                if(!hasVisited[current])
                {
                    int maxCost = max(res[start], cost[start][current]);

                    if(res[current] > maxCost)
                    {
                        res[current] = maxCost;
                        cityque.push(current);
                    }
                }
            }
        }

        cout<<"Case "<<t<<":"<<endl;
        for(int i=0; i<cities; i++)
        {
            if(res[i] == INT_MAX)
                cout<<"Impossible"<<endl;
            else
                cout<<res[i]<<endl;
        }
        }

    return 0;
}