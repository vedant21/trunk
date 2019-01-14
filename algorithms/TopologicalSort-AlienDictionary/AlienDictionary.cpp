#include <iostream>
#include <list>
#include <stack>
using namespace std;


class Graph{
    int v;
    list<int> *adjacent;
    void topoLogicalSortUtil(int v,bool vistited[], stack<int> &stack);
    public :
        Graph(int v);
        void addEdge(int v,int w);
        void topoLogicalSort();
};

Graph::Graph(int v){
    this->v=v;
    this->adjacent=new list<int>[v];
}

void Graph::addEdge(int v,int w){
    this->adjacent[v].push_back(w);
}
void Graph::topoLogicalSortUtil(int v,bool vistited[],stack<int> &stack){
    vistited[v]=true;
    list<int>::iterator i;
    for(i=this->adjacent[v].begin();i!=this->adjacent[v].end();i++){
        if(!vistited[*i])
            topoLogicalSortUtil(*i,vistited,stack);
    }
    stack.push(v);
}
void Graph::topoLogicalSort(){
    stack<int> stack;
    bool *vistited=new bool[this->v];
    for(int i=0;i<this->v;i++){
        vistited[i]=false;
    }
    for(int i=0;i<this->v;i++){
        if(!vistited[i])
            topoLogicalSortUtil(i ,vistited,stack);
    }
    
    while(!stack.empty()){
        std::cout << (char)('a'+stack.top()) << " ";
        stack.pop() ;
    }
}

void buildGraph(string words[],int numWords,int numAlpha){
    Graph g(numAlpha);
    for(int i=0;i<numWords-1;i++){
        string word1=words[i];
        string word2=words[i+1];    
        for(int j=0;j<min(word1.length(),word2.length());j++){
            
            if(word1[j]!=word2[j]){
                g.addEdge(word1[j]-'a',word2[j]-'a');
                break;
            }
        }
    }
    g.topoLogicalSort();
}
int main() {
    string words[] = {"baa", "abcd", "abca", "cab", "cad"}; 
    buildGraph(words, 5, 4); 
	return 0;
}
