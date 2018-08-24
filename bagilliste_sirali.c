#include <stdio.h>
#include <stdlib.h>
struct n{
	int x;
	struct n * next;
};
	typedef struct n node;

void bastir(node * r){
	while(r!=NULL){
		printf("&d ",r->x);
		r=r->next;
	}
}
void ekle(node* r,int x){
	while(r->next!=NULL){
		r = r->next;
	}
		r->next = (node*)malloc(sizeof(node));
		r->next->x = x;
		r->next->next = NULL;
}

node * ekleSirali(node * r,int x){
	if(r==NULL){
		r=(node *)malloc(sizeof(node));
		r->next = NULL;
		r->x = x;
		return r;
	}
	if(r->x > r){
		node * temp = (node*)malloc(sizeof(node));
		temp->x = x;
		temp->next = r;
		return temp;
	}
		node * iter = r;
		while(iter->next != NULL && iter->next->x < x ){
			iter = iter->next;
	}
		node * temp = (node*)malloc(sizeof(node));
		temp->next = iter -> next;
		iter -> next = temp;
		temp->x = x;
		return r;
		}
	int main(){
		node * root;
		root = NULL;
		root=ekleSirali(root,3333);		
		root=ekleSirali(root,33);
    		root=ekleSirali(root,33333);
     		root=ekleSirali(root,3);
		root=ekleSirali(root,333);
	bastir(root);
	}

