#include<iostream>
#include<conio.h>
using namespace std;
struct BSTNode
{
    int data;
    BSTNode *left,*right;
};
BSTNode *createnode();
BSTNode *AVLTree(BSTNode *);
int getbalance(BSTNode *);
BSTNode *rightrotate(BSTNode *);
BSTNode *leftrotate(BSTNode *);
BSTNode *Insert(BSTNode *,int);
BSTNode *Delete(BSTNode *,int);
void Levelorder(BSTNode *);
void printgivenlevel(BSTNode *t,int);
void Preorder(BSTNode *);
void Inorder(BSTNode *);
void Postorder(BSTNode *);
BSTNode *Findmax(BSTNode *);
BSTNode *Findmin(BSTNode *);
BSTNode *Searchvalue(BSTNode *,int);
int Findheight(BSTNode *);
int Max(int,int);
BSTNode *createnode()
{
    BSTNode *n;
    n=new BSTNode;
    return n;
}
BSTNode *AVLTree(BSTNode *root)
{
    int balancefactor;
    if(root==NULL)
        return root;
    balancefactor=getbalance(root);
    if((balancefactor>1)&&(getbalance(root->left)>=0))   //LL case of Rotation.
    {
        return(rightrotate(root));
    }
    else if((balancefactor>1)&&(getbalance(root->left)<0))   //LR case of Rotation.
    {
        root->left=leftrotate(root->left);
        return(rightrotate(root));
    }
    else if((balancefactor<-1)&&(getbalance(root->right)<=0))  //RR case of Rotation.
    {
        return(leftrotate(root));
    }
    else if((balancefactor<-1)&&(getbalance(root->right)>0))   //RL case of Rotation.
    {
        root->right=rightrotate(root->right);
        return(leftrotate(root));
    }
    return root;
}
int getbalance(BSTNode *root)
{
    int lefthieght,righthieght;
    lefthieght=Findheight(root->left);
    righthieght=Findheight(root->right);
    return(lefthieght-righthieght);
}
BSTNode *rightrotate(BSTNode *a)
{
    BSTNode *b,*c;
    b=a->left;
    c=b->right;
    b->right=a;
    a->left=c;
    return b;
}
BSTNode *leftrotate(BSTNode *a)
{
    BSTNode *b,*c;
    b=a->right;
    c=b->left;
    b->left=a;
    a->right=c;
    return b;
}
BSTNode *Insert(BSTNode *root,int item)         //Insert values in tree.
{
    BSTNode *temp;
    temp=createnode();
    temp->data=item;
    temp->left=NULL;
    temp->right=NULL;
    if(root==NULL)
        root=temp;
    else if(item<root->data)
        root->left=Insert(root->left,item);
    else if(item>root->data)
        root->right=Insert(root->right,item);
    root=AVLTree(root);
    return root;
}
BSTNode *Delete(BSTNode *root,int item)         //Delete values in tree.
{
    BSTNode *temp;
    if(root==NULL)
        cout<<item<<" is not in the tree."<<endl;
    else if(item<root->data)
        root->left=Delete(root->left,item);
    else if(item>root->data)
        root->right=Delete(root->right,item);
    else if(item==root->data)
    {
        if((root->left==NULL)&&(root->right==NULL))     //for delete leaf node.
        {
            cout<<"Deleted value is: "<<root->data<<endl;
            delete root;
            root=NULL;
        }
        else if(root->left==NULL)                   //Delete node when left pointer is NULL.
        {
            temp=root;
            root=root->right;
            cout<<"Deleted value is: "<<temp->data<<endl;
            delete temp;
        }
        else if(root->right==NULL)                  //Delete node when right pointer is NULL.
        {
            temp=root;
            root=root->left;
            cout<<"Deleted value is: "<<temp->data<<endl;
            delete temp;
        }
        else if((root->left!=NULL)&&(root->right!=NULL))    //for delete middle node.
        {
            temp=Findmax(root->left);  //Findmin(root->right);
            cout<<"Deleted value is: "<<root->data<<endl;
            root->data=temp->data;
            delete temp;
            root->left=Delete(root->left,root->data);
        }
    }
    root=AVLTree(root);
    return root;
}
void Levelorder(BSTNode *root)                  //level by level values print.
{
    int h,i;
    h=Findheight(root);
    for(i=1; i<=h; i++)
        printgivenlevel(root,i);
}
void printgivenlevel(BSTNode *root,int level)
{
    if(root==NULL)
        return;
    else if(level==1)
        cout<<root->data<<" ";
    else if(level>1)
    {
        printgivenlevel(root->left,level-1);
        printgivenlevel(root->right,level-1);
        cout<<endl;
    }
}
void Preorder(BSTNode *root)                    //root value is print first and then left and then right.
{
    if(root!=NULL)
    {
        cout<<root->data<<" ";
        Preorder(root->left);
        Preorder(root->right);
    }
}
void Inorder(BSTNode *root)                     //left value is print first and then root value and then right.
{
    if(root!=NULL)
    {
        Inorder(root->left);
        cout<<root->data<<" ";
        Inorder(root->right);
    }
}
void Postorder(BSTNode *root)                   //left value is print first and then right value print and then root value.
{
    if(root!=NULL)
    {
        Postorder(root->left);
        Postorder(root->right);
        cout<<root->data<<" ";
    }
}
BSTNode *Findmax(BSTNode *root)                  //for find greatest value in tree.
{
    if(root==NULL)
    {
         cout<<"Tree is empty."<<endl;
         return root;
    }
    else if(root->right==NULL)
        return root;
    return(Findmax(root->right));
}
BSTNode *Findmin(BSTNode *root)                  //for find smallest value in tree.
{
    if(root==NULL)
    {
        cout<<"Tree is empty."<<endl;
        return root;
    }
    else if(root->left==NULL)
        return root;
    return(Findmin(root->left));
}
BSTNode *Searchvalue(BSTNode *root,int item)    //search value in tree. either value exist in tree or not.
{
    if(root==NULL)
    {
        return root;
    }
    else if(item<root->data)
        return(Searchvalue(root->left,item));
    else if(item>root->data)
        return(Searchvalue(root->right,item));
    else if(item==root->data)
        return root;
}
int Findheight(BSTNode *root)                   //find height   or  level=height-1.
{
    int leftheight,rightheight;
    if(root==NULL)
        return 0;
    leftheight=Findheight(root->left);
    rightheight=Findheight(root->right);
    return(Max(leftheight,rightheight)+1);
}
int Max(int a,int b)
{
    return((a>b)?a:b);
}
int main()
{
    BSTNode *root=NULL,*temp;
    int item,choice;
    while(1)
    {
        system("cls");
        cout<<"1. Insert data in AVL tree"<<endl;
        cout<<"2. Delete data in AVL tree"<<endl;
        cout<<"3. Level order traversing:"<<endl;
        cout<<"4. pre-order traversing:"<<endl;
        cout<<"5. In-order traversing:"<<endl;
        cout<<"6. Post-order traversing:"<<endl;
        cout<<"7. Greatest value in tree"<<endl;
        cout<<"8. Smallest value in tree"<<endl;
        cout<<"9. Search value in tree"<<endl;
        cout<<"10. Height of tree"<<endl;
        cout<<"11. Exit"<<endl;
        cout<<"Enter your choice:";
        cin>>choice;
        switch(choice)
        {
        case 1:
            cout<<"Enter value for insert:";
            cin>>item;
            root=Insert(root,item);
            getch();
            break;
        case 2:
            if(root==NULL)
                cout<<"Tree is empty."<<endl;
            else
            {
                cout<<"All elements are:";
                Inorder(root);
                cout<<endl<<"Which value you want to delete:";
                cin>>item;
                root=Delete(root,item);
            }
            getch();
            break;
        case 3:
            if(root==NULL)
                cout<<"Tree is empty.";
            else
                Levelorder(root);
            getch();
            break;
        case 4:
            if(root==NULL)
                cout<<"Tree is empty.";
            else
                Preorder(root);
            getch();
            break;
        case 5:
            if(root==NULL)
                cout<<"Tree is empty.";
            else
                Inorder(root);
            getch();
            break;
        case 6:
            if(root==NULL)
                cout<<"Tree is empty.";
            else
                Postorder(root);
            getch();
            break;
        case 7:
            temp=Findmax(root);
            if(temp!=NULL)
            {
                cout<<"Greatest value is "<<temp->data;
                delete temp;
            }
            getch();
            break;
        case 8:
            temp=Findmin(root);
            if(temp!=NULL)
            {
                cout<<"Smallest value is "<<temp->data;
                delete temp;
            }
            getch();
            break;
        case 9:
            if(root==NULL)
                cout<<"Tree is empty.";
            else
            {
                cout<<"Which value you want to search:";
                cin>>item;
                temp=Searchvalue(root,item);
                if(item==temp->data)
                    cout<<"Element found.";
                else
                    cout<<"Element not found.";
            }
            getch();
            break;
            getch();
        case 10:
            item=Findheight(root);
            cout<<"Level of tree is "<<item-1<<endl;
            cout<<"Height of tree is "<<item<<endl;
            getch();
            break;
        case 11:
            exit(1);
            break;
        default:
            cout<<"Invalid Number.";
            getch();
        }
    }
    getch();
}
