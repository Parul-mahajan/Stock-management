#include <bits/stdc++.h>
using namespace std;

class stockManagement{
  public:

  struct ShareInfo{
    int number;
    double unitPrice;
  };

  double profit=0;
  int totalShareCount=0;
  deque<ShareInfo> shareQueue;

  void buyShare(int shareBaught,float unitPriceBaught){
    ShareInfo shareInfo = ShareInfo();
    shareInfo.number=shareBaught;
    shareInfo.unitPrice=unitPriceBaught;
    shareQueue.push_back(shareInfo);
    totalShareCount += shareBaught;
  }

  void sellShare(int sharetosell,float unitPriceToSell){
    if(sharetosell>totalShareCount){
      cout<<"Not avalable";
      return;
    }

    while(sharetosell>0){
      ShareInfo shareInfo = shareQueue.front();
      shareQueue.pop_front();
      int shareInThisBatch = min( sharetosell , shareInfo.number);
      profit += shareInThisBatch*unitPriceToSell-shareInThisBatch*shareInfo.unitPrice;
      if(shareInThisBatch<shareInfo.number){
        shareInfo.number -= shareInThisBatch;
        shareQueue.push_front(shareInfo);
      }
      sharetosell -= shareInThisBatch;
    }
    totalShareCount -= sharetosell;
    cout<<"Shares Sold"<<endl;

  }

};

int main(){
   int choice, sh,price;
   stockManagement s;
   cout<<"\t\tStock Market application";
   cout<<endl;
   cout << "\t\t MAIN MENU";
   cout<<endl;
   cout << "\t\t1.BUY"<<endl;
   cout<<"\t\t2.SELL"<<endl;
   cout<<"\t\t3.TOTAL CAPITAL GAIN SO FAR" <<endl;
  cout<<"\t\t4.QUIT"<<endl;
  cout<<endl;
  while(1){
   cout << "\n\t\tEnter Your Choice : ";
   cin>>choice;
   switch(choice){
     case 1:
       cout<<"Enter number of share you want to buy";
       cin>>sh;
       cout<<"Enter price";
       cin>>price;
       s.buyShare(sh,price);
       break;
     case 2:
       cout<<"Enter number of share you want to sell";
       cin>>sh;
       cout<<"Enter price";
       cin>>price;
       s.sellShare(sh,price);
       break;
     case 3:
       cout<<"Total capital gain so far";
       cout<<s.profit;
       break;
     case 4:
       exit(0);
       break;

   }
  }
}



/*
class LinkedList{

  struct Node{
    T val;
    Node *next;
    Node *prev;
  }

  Node *head;
  Node *tail;


  void addNode_back(int x){
    if(head==NULL){
        head = new Node();
        head->val = x;
        tail = head;
    }
    else{
        tail->next = new Node();
        tail->next->val = x;
        tail->next->prev = tail;
        tail = tail->next;
    }
  }


}


    3    ->  4
  head   <-
            tail

int main(){


}







              ->   ->
   head-> 3      4     5 (->tail)
              <-   <-



struct Node{
  int val;
  Node* left;
  Node* right;
}




                      1

                  2         3

              4      5    6    7



void preOrderTraversal(Node *currNode){

  if(currNode==NULL){
    return;
  }

   cout<<currNode->val;

  preOrderTraversal(currNode->left);

  preOrderTraversal(currNode->right);



}

*/
