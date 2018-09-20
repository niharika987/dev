#include<iostream>
#include <vector>

 
using namespace std;
int n;
int sum=0;
int sol[10][10];
 
int maze1(int maze[][10], int x, int y, int sol[][10],vector<vector<bool> > v,int n);
 
int Safe(int maze[][10], int x, int y,int n)
{
    
    if(x >= 0 && x < n && y >= 0 && y < n && (maze[x][y] == 0))
        return 1;
    else 
	    return -1;    
}
int maze1(int maze[][10], int x, int y, int sol[][10],vector<vector<bool> > v,int n)
{
 
    if(x == n-1 && y == n-1)
    {
        return 1;
    }
    
    v[x][y] = true; 
    int sum = 0;
    
    if(Safe(maze, x, y,n) == 1)
    {
	    if(Safe(maze, x+1, y,n) == 1 ){
		
		if (v[x+1][y] == false){   
      			 sum +=  maze1(maze, x+1, y, sol,v,n);
		}
 	   }
 	   
        
 	   if(Safe(maze, x, y-1,n) == 1){
		if (v[x][y-1] == false ){
       			 sum += maze1(maze, x, y-1, sol,v,n);
		}
   	   }
           
	   if(Safe(maze, x-1, y,n) == 1 ){
		if (v[x-1][y] == false){
	 	       sum += maze1(maze, x-1, y, sol,v,n);
		}
     
	    }      
   	   if(Safe(maze, x, y+1,n) == 1 ){
		if (v[x][y+1] == false){
        		sum += maze1(maze, x, y+1, sol,v,n);
		}
   	    }    
    }
    return sum ;
}
int main()
{
    int maze[10][10],t,i,j,sum=0;
      n = 0;
      cin >> n;
      for(i=0;i<n;i++){
          for(j=0;j<n;j++){
              cin >> maze[i][j];
          }
      }
      
      for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                    sol[i][j]=0;
            }
   	 }
  //boolean 2d vector initialised to false
   
  	vector<vector<bool> > v(n,vector<bool> (n,false)); 
  	/*
  	......
	  */
	cout <<maze1(maze,0,0,sol,v,n) << endl;
    return 0;
}  

