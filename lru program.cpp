/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*The structure of the class is as follows 
class LRUCache
{
public:
    LRUCache(int );
    int get(int );
    void set(int , int );
};*/
/*You are required to complete below methods */
/*Inititalize an LRU cache with size N */
int c,i;
unordered_map<int,int>  m;
list<int> ls;

LRUCache::LRUCache(int N)
{

     //Your code here
      c=N;
m.clear();
ls.clear();
    
}

//Sets the key x with value y in the LRU cache 
void LRUCache::set(int x, int y) 
{       
        //Your code here
        if(m.find(x)!=m.end())
        {   ls.remove(x);
            ls.push_back(x);
            m[x]=y;
            return ;
        }
        
        if(ls.size()<c)
        {
         ls.push_back(x);
         m[x]=y;
         return ;
         }
       unordered_map<int,int>::iterator it=m.find(ls.front());
         m.erase(it);
         ls.pop_front();
         ls.push_back(x);
         m[x]=y;
         
         

     
}
/*Returns the value of the key x if 
present else returns -1 */
int LRUCache::get(int x)
{
    //Your code here
    if(m.find(x)==m.end())
    return -1;
    
    ls.remove(x);
    ls.push_back(x);
    return m[x];
    
}
