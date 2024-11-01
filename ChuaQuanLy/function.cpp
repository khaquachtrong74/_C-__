#include<iostream>
#include<chrono>
#include "function.h"
using namespace std;
using namespace std::chrono;
void swap(int&a, int&b){
	int tmp = a;
	a = b;
	b= tmp;
}
auto timeNow(){
	return high_resolution_clock::now();
}
auto duration(auto timeStart, auto timeEnd){
	cout<<"Time excute: ";
	return duration_cast<microseconds>(timeEnd-timeStart).count()/1000000.0;
}
void line(){
	cout<<"__________________"<<endl;
}

//functino sort for arr
void selectionSort(int arr[], int size){
	if(size <= 0)
		return;
	//position 
	int pos;
	for(int i = 0; i < size-1; i++){
		pos = i;
		for(int j = i+1; j< size; j++){
			if(arr[pos] < arr[j]){
				pos = j;
			}
		}
		if(pos != i){
			swap(arr[pos], arr[i]);
		}
	}
}
void interchangeSort(int arr[], int size){
	if(size <= 0){
		return;
	}
	for(int i = 0 ;i < size-1; i++){
		for(int j = i+1; j < size;j++){
			if(arr[i] < arr[j]){
				swap(arr[i], arr[j]);
			}
		}
	}
}
void bubbleSort(int arr[], int size){
	if(size <= 1)
		return;
	for(int i = 0; i < size-1; i++){
		int j = size - 1;
		while(j > i){
			if(arr[j] > arr[j-1]){
				swap(arr[j], arr[j-1]);
			}
			j--;
		}

	}
}
void insertionSort(int arr[], int size){
	if(size <= 0)
		return;
	int key;
	for(int i = 1; i < size; i++){
		key = arr[i];
		int j = i-1;
		while(j >= 0 && key > arr[j])
		{
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = key;
	}
}
//iter 0: pivot = 30: left= 0: right :6;
// arr[6] = 50 : arr[0] = 40
	      // 0 <= 6: arr[6] > pivot: right-- = 5
	      // swap(40,10); arr[0] = 10; arr[5] = 40
//left++ = 1; right-- = 4;
//arr[1] = 70; arr[4] = 60;
	//1 <= 4; arr[4] > pivot: right -- = 3
//swap(arr[1],arr[3]); 60, 70
//left++=2;right--=2;
//arr[left] < pivot; left++ = 3;
//left >= right: break;
//swap(arr[3],arr[2])
//return 3

int partition(int arr[], int low, int high){
	int pivot = arr[high];
	int i = low-1;
	for(int j = low; j <= high-1; j++){
		if(arr[j] <= pivot){
			i++;
			swap(arr[i],arr[j]);
		}
	}
	swap(arr[i+1], arr[high]);
	return (i+1);// 2
}

void quickSort(int arr[], int low, int high){
	if(low < high){
		int index = partition(arr, low, high);
		quickSort(arr, low, index - 1);
		quickSort(arr, index+1, high);
	}
}
void heapify(int arr[], int n, int i){
	int largest = i;
	int left = 2*i +1;
	int right = 2*i +2;
	if(left < n && arr[left] > arr[largest])
		largest = left;
	if(right < n && arr[right] > arr[largest])
		largest = right;	
	if(largest != i){
		swap(arr[i],arr[largest]);
		heapify(arr,n,largest);
	}
}
void heapSort(int arr[], int n){
	//build max heap
	for(int i = n/2 -1; i>= 0; i++){
		heapify(arr,n,i);
	}
	//sort
	for(int i = n-1; i>=0; i--){
		swap(arr[0],arr[i]);
		//heapify root element to get highest element at root again
		heapify(arr,i,0);
	}
}
struct node{
	int info;
	node*next;
	node(int data = -1,node* n = nullptr){
		next = n;
		info = data;
	}
};
//queue
struct queue{
	node* front;
	node* rear;
	int size;
	queue(){
		front = rear = nullptr;
		size = 0;
	}
	//~queue(){
	//	while(!isEmpty())
	//		dequeue();
	//}
	bool isEmpty(){
		return front == nullptr;
	}
	void enqueue(int data){
		node* newNode = new node(data);
		if(isEmpty()){
			front = rear = newNode;
		}
		else{
			rear->next = newNode;
			rear = newNode;
		}
		size++;
	}
	int dequeue(){
		if(!isEmpty()){
			node* tmp = front;
			int kq = tmp->info;
			front = front->next;
			delete tmp;
			size -=1;
			if(isEmpty())
				rear = nullptr;
			return kq;
		}
	}
	void view(){
		node* tmp = front;
		while(tmp != nullptr){
			cout<<tmp->info;
			tmp = tmp->next;
			
		}
	}
};
struct stack{
	node* top;
	int size;
	stack(){
		top = nullptr;
		size = 0;
	}
	bool isEmpty(){
		return size == 0;
	}
	void push(int data){
		if(isEmpty()){
			top = new node(data);
			size++;
		}
		else{
			node* tmp = top;
			while(tmp->next != nullptr){
				tmp = tmp->next;
			}
			tmp->next = new node(data);
			size++;
		}
	}
	int T(){
		if(isEmpty()) return 0;
		return top->info;
	}
	int pop(){
		if(!isEmpty()){
			node* tmp = top;
			node* pre = nullptr;
			while(tmp->next != nullptr){
				pre = tmp;
				tmp = tmp->next;
			}
			pre->next = nullptr;
			int x = tmp->info;
			delete tmp;
			size--;
			return x;
		}
		return -1;
	}
};
//Tao do thi
struct Graph{
	int V;// So luong dinh
	int ** adjMatrix; //ma tran ke
	bool *used;
	//Ham khoi tao
	Graph(int V){
		this->V = V;
		adjMatrix = new int* [V];
		used = new bool[V];
		for(int i = 0; i < V; i++){
			adjMatrix[i] = new int [V];
			used[i] = false;
			for(int j = 0; j < V; j++)
				adjMatrix[i][j] = 0;
		}
	}
	//Ham huy
	~Graph(){
		for(int i = 0; i < V; i++){
			delete[] adjMatrix[i];
		}
		delete[] adjMatrix;
		delete[] used;
	}
	void inputWeight(){
		for(int i = 0;i < V; i++){
			for(int j = i; j < V; j++ ){
				cin>>adjMatrix[i][j];
				adjMatrix[j][i] = adjMatrix[i][j];
			}
		}
	}
	void outputWeight(){
		for(int i = 0; i < V; i++){
			for(int j = 0; j < V; j++)
				cout<<adjMatrix[i][j]<<" ";
			cout<<endl;
		}
	}
	void BFS(int u, queue q, int x){	
		if(u == V)
			return;
		if(used[u] == false){
			q.enqueue(u);
			used[u] = true;
		}
		for(int i = 0; i < V;i++){
			if(adjMatrix[i][u] == 1 && used[i] == false){
				q.enqueue(i);
				used[i] = true;
				
			}
		}
		int kq = q.dequeue();
		cout<<kq<<"-->";
		if(x == kq){
			cout<<endl;
			cout<<"da tim thay x "<<x<<endl;
		}
		BFS(u+=1, q, x);
	}	
	void DFS(int u){
		stack stk;
		bool * visited = new bool [V];
		for(int i = 0; i < V; i++){
			visited[i] = false;
		}
		stk.push(u);
		cout<<stk.T();
		visited[u] = true;
		
		while(!stk.isEmpty()){
			int index = stk.pop();
			cout<<index;
			cout<<char(index+'A')<<" ";
			for(int i = 0; i < V; i++){
				if(adjMatrix[index][i] == 1 && !visited[i]){
					stk.push(i);
					visited[i] = true;
				}
			}
		}
		delete [] visited;
	}
};
//linked list
struct singleLinkedList{
	node* head;
	singleLinkedList(){
		head = nullptr;
	}
	//add node in to first position
	bool isEmpty(){
		return head == nullptr;
	}
	void addFirst(int info){	
		head = new node(info, head);
	}
	void addLast(int info){
		if(isEmpty()){
			addFirst(info);
			return;
		}
		node* tmp = head;
		node* pre = nullptr;
		while(tmp != nullptr){
			pre = tmp;
			tmp = tmp->next;
		}
		pre->next = new node(info);
	}
	//delete node
	void deleteFirst(){
		if(isEmpty())
			return;
		node* tmp = head;
		head = head->next;
		delete tmp;
	}
	void deleteLast(){
		if(isEmpty())
			return;
		node* tmp = head;
		node* pre = nullptr;
		while(tmp->next != nullptr){
			pre = tmp;
			tmp = tmp->next;
		}
		pre->next = nullptr;
		delete tmp;

	}
	// Goto and print
	void view(){
		if(isEmpty())
			return;
		node* tmp = head;
		while(tmp != nullptr){
			cout<<tmp->info<<"->";
			tmp = tmp->next;

		}
	}
};

//DBLL
struct noded{
	int info;
	noded* next;
	noded* prev;
	noded(int data, noded* n = nullptr, noded* pr = nullptr){
		info = data;
		next = n;
		prev = pr;
	}
};
struct doubleLinkedList{
	noded* head;
	noded* tail;
	doubleLinkedList(){
		head = nullptr;
		tail = nullptr;
	}
	bool isEmpty(){
		return head == nullptr;
	}
	void addFront(int data){
		if(isEmpty()){
			head = tail = new noded(data);
			return;
		}
		head->prev = new noded(data, head, nullptr);
		head = head->prev;
	}
	
	void addLast(int data){
		if(isEmpty()){
			addFront(data);
			return;
		}
		tail->next = new noded(data,nullptr, tail);
		tail = tail->next;
		
	}
	void delFirst(){
		if(isEmpty()){
			return;
		}
		noded* tmp = head;
		head = head->next;
		head->prev = nullptr;
		delete tmp;
	}
	void delLast(){
		if(isEmpty())
			return;
		noded* tmp = tail;
		tail = tail->prev;
		tail->next = nullptr;
		delete tmp;
	}
	void addMid(int data){
		if(isEmpty())
		{
			addFront(data-1);
			return;
		}
		noded*tmp = head;
		while(tmp != nullptr && tmp->info != data){
			tmp = tmp->next;
		}
		if(tmp!= nullptr){

			tmp = tmp->prev;
			if (tmp != nullptr)
				tmp->next = new noded(data-1, tmp->next, tmp);
			else{
				addFront(data-1);
			}
		}
		else{
			addFront(data-1);
		}
	}
	void view(){
		if(isEmpty()){
			return;
		}
		noded *tmp = head;
		while(tmp != nullptr){
			cout<<tmp->info;
			tmp=tmp->next;
		}
	}
};

