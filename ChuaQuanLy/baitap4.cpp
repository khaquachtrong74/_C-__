#include<iostream>
//#include "function.cpp"
using namespace std;

struct node{
	node* left;
	node* right;
	int info;
	node(int data, node* l = nullptr, node* r = nullptr){
		info = data;
		left = l;
		right = r;
	}
};
struct binaryTree{
	node*root;
	binaryTree(){
		root = nullptr;
	}
	bool isEmpty(){
		return root == nullptr;
	}
	void addNode(int data){
		if(isEmpty()){
			root = new node(data);
		}
		else{
			node* tmp = root;
			node* pre = nullptr;
			while(tmp != nullptr){
				pre = tmp;
				if(tmp->info < data){
					tmp = tmp->right;
				}
				else if(tmp->info > data){
					tmp = tmp->left;
					
				}
				else{
					return; //don't need to add node
				}
			}
			if(pre->info < data){
				pre->right = new node(data);
			}
			else{
				pre->left = new node(data);
			}

		}
	}
	void NLR(node* r){
		if(r!=nullptr){
		cout<<r->info<<" ";
		NLR(r->left);
		NLR(r->right);
		}
	}
	void find(int x){
		if(isEmpty())
			return;
		node* tmp = root;
		while(tmp != nullptr){
			if(tmp->info < x){
				tmp = tmp->right;
				continue;
			}
			if(tmp->info > x){
				tmp = tmp->left;
				continue;
			}
			if(tmp->info == x){
				cout<<"find it";
				return;
			}
		}
		cout<<"Khong tim thay"<<endl;
	}
	//delete Node
	node* deleteNode(node* r, int data){
		if(r == nullptr){
			return nullptr;
		}
		else if(r->info < data)
			r->right = deleteNode(r->right, data);
		else if(r->info > data)
			r->left = deleteNode(r->left, data);
		else{
			//case 1:
			if(r->left == nullptr && r->right == nullptr)
			{	delete r;
				return nullptr;
			}
			//case 2:
			if(r->left == nullptr){
				node* tmp = r;
				r = r->right;
				delete tmp;
			}
			else if(r->right == nullptr){
				node* tmp = r;
				r = r->left;
				delete tmp;
			}
			// case 3:
			else{
				node *tmp = r->right;
				while(tmp->left != nullptr){
					tmp = tmp->left;
				}
				r->info = tmp->info;
				r->right = deleteNode(r->right, tmp->info);
			}
			
		}
		return r;
	}
};
int main(){
	binaryTree a;
	a.addNode(5);
	a.addNode(7);
	a.addNode(4);
	a.deleteNode(a.root, 5);
	
	
	a.NLR(a.root);
}

