#include<bits/stdc++.h>

using namespace std;

long H, W;
vector < string > S;

int dir_x[4] = {0, 1, 0, -1};
int dir_y[4] = {1, 0, -1, 0};

vector<vector<bool> > visited;
vector<vector<long> > dist;

int bfs(long sx, long sy, long tx, long ty){
    queue<long> q;
    q.push(sx*W+sy);
    while(!q.empty()){
        long p = q.front();
        q.pop();

        long x = p/W;
        long y = p%W;
        //cout<<x<<" "<<y<<endl;
        //cout<<x<<" "<<y<<endl;
        for(int idx=0; idx<4; ++idx){
            if(x+dir_x[idx] >=0 && x+dir_x[idx]<H && y+dir_y[idx] >=0 && y+dir_y[idx]<W){
                if(visited[x+dir_x[idx]][y+dir_y[idx]] == false && S[x+dir_x[idx]][y+dir_y[idx]] == '.'){
                    visited[x+dir_x[idx]][y+dir_y[idx]] = true;
                    dist[x+dir_x[idx]][y+dir_y[idx]] = dist[x][y] + 1;
                    if(x+dir_x[idx]==tx && y+dir_y[idx] == ty){
                        return 0;
                    }
                    
                    //cout<<dist[x+dir_x[idx]][y+dir_y[idx]]<<endl;
                    q.push((x+dir_x[idx])*W+(y+dir_y[idx]));
                }
            }
        }
    }
    return 0;
}

int main(){
    cin>>H>>W;
    S.resize(H);
    for(int i=0; i<H; ++i){
        cin>>S[i];
    }

    long ans = 0;
    for(int i=0; i<H; ++i){
        for(int j=0; j<W; ++j){
            long sx = i;
            long sy = j;
            if(S[sx][sy] == '#'){
                continue;
            }
            //cout<<"s"<<sx<<" "<<sy<<endl;
            for(int k=0; k<H; ++k){
                for(int l=0; l<W; ++l){
                    long tx = k;
                    long ty = l;
                    if(S[tx][ty] == '#'){
                        continue;
                    }
                    if(sx == tx && sy == ty){
                        continue;
                    }
                    //cout<<"t"<<tx<<" "<<ty<<endl;
                    visited = vector<vector<bool> >(H, vector<bool>(W, false));
                    dist = vector<vector<long> >(H, vector<long>(W, 10000000));
                    visited[sx][sy] = true;
                    dist[sx][sy] = 0;
                    bfs(sx, sy, tx, ty);
                    ans = max(ans, dist[tx][ty]);
                    //cout<<ans<<endl;
                    
                }
            }
            
        }
    }
    cout<<ans<<endl;

    return 0;
}
