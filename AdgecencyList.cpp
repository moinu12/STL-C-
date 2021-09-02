#include<bits/stdc++.h>
using namespace std ;
#define Max 100
vector<int>edges[Max] ;
vector<int> cost[Max] ;
int main()
{

    int numNodes,numEdges ;
    cin >> numNodes >> numEdges ;
    for( int i = 1 ; i <= numEdges ; i++ )
    {
        int x , y  ;
        cin >> x >> y ;
        edges[x].push_back(y) ;
        edges[y].push_back(x) ;
    }
    cout << edges[1].size() << endl;



    return 0 ;
}
