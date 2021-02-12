#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> dist;
const int dx[4]={0,0,-1,1};
const int dy[4]={1,-1,0,0};

int main(){
  int height,width; cin >> height >> width;
  int sx,sy;
  int gx,gy;
  vector<string> field(height);
  for(int h=0;h<height;h++) cin >> field[h];
  
  int ans=0;
  for(int sx=0;sx<height;sx++){
    for(int sy=0;sy<width;sy++){
      if(field[sx][sy]=='#') continue;

      int count=0;
      vector<vector<int>> dist(height,vector<int>(width,-1));
      vector<vector<int>> prev_x(height,vector<int>(width,-1));
      vector<vector<int>> prev_y(height,vector<int>(width,-1));
      queue<pair<int,int>> que;
      
      dist[sx][sy]=0;
      que.push(make_pair(sx,sy));
      int x,y;
      while(!que.empty()){
        const auto current=que.front();
        x=current.first;
        y=current.second;
        que.pop();

        for(int direction=0;direction<4;direction++){
          int next_x=x+dx[direction];
          int next_y=y+dy[direction];
          if(next_x<0||next_x>=height||next_y<0||next_y>=width) continue;
          if(field[next_x][next_y]=='#') continue;

          if(dist[next_x][next_y]==-1){
            que.push(make_pair(next_x,next_y));
            dist[next_x][next_y]=dist[x][y]+1;
            prev_x[next_x][next_y]=x;
            prev_y[next_x][next_y]=y;
          }
        }
      }  
      while(x!=-1&&y!=-1){
        count++;
        field[x][y]='o';
        int px=prev_x[x][y];
        int py=prev_y[x][y];
        x=px,y=py;
      }
      ans=max(ans,count);
    }
  }
  cout << ans-1 <<endl;
}