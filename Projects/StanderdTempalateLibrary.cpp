//This program contains generic code for all types of linked list as

/*1.Singly linked list
  2.Singly circular linked list
  3.Doubly linked list
  4.Doubly circular linked list
  5.Stack
  6.Queue*/


  #include<string.h>
  #include<malloc.h>
  #include<iostream>
  #include<stdio.h>

  using namespace std;

  #define TRUE 1
  #define FALSE 0

  /////////////////
  //New data types
  /////////////////
  typedef int BOOL;
  typedef unsigned char BYTE;

  ///////////////////////////////////////
  //This is generic linked list of type T
  ///////////////////////////////////////

  template<typename T>
  struct GEN_LIST
  {

      T Data;
      GEN_LIST*pNext;
  };
  ///////////////////////////////////////////////
  //This is generic doubly linked list of type T
  ///////////////////////////////////////////////
  template<typename T>
  struct GEN_DLIST
  {
      T Data;
      GEN_DLIST *pNext, *pPrev;
  };
//////////////////////////
//This is generic stack
//////////////////////////
template<typename T>
struct nodeStack
{
    T data;
    struct nodeStack *Next;
};
/////////////////////////
// This is generic QUEUE
/////////////////////////
template<typename T>
struct nodeQueue
{
    T data;
    struct nodeQueue *Next;
};
///////////////////////////////////////////////////
//Class name    : Queue
//Description   : This class represents Queue
///////////////////////////////////////////////////
template<class T>
class Queue
{
private:
    struct nodeQueue<T> *Head;
    struct nodeQueue<T> *Tail;
public:
    Queue();
    void Enqueue(T);
    T Dequeue();
    void DisplayQueue();
};
///////////////////////////////////////////////
//Class name    : Stack
//Description   : This class represents Stack
//////////////////////////////////////////////
template<class T>
class Stack
{
private:
    struct nodeStack<T> *Head;

public:
    Stack();
    void Push(T);
    int Pop();
    void Display();
};
////////////////////////
//END OF A STACK CLASS
////////////////////////

///////////////////////////////////////////////////////////////////
//Class name    : Singly_linkedList
//Description   : This class represents singly linear linked list
///////////////////////////////////////////////////////////////////

template<class T>
class Singly_linkedList
{
  public:
      GEN_LIST<T> *pHead;  //Pointing at start of linked list
      GEN_LIST<T> *pTail; //Pointing at end of linked list

      Singly_linkedList();

      ~Singly_linkedList();

    BOOL AddToGenListFirst(T *pNodeData);

    void DisplayGenList();

    BOOL AddToGenListLast(T *pNodeData);

    BOOL FreeGenList();

    int CountGenListNode();

    int SearchFirstOccurance(T data);

    int SearchAllOccurance(T data);

    BOOL InsertAtPosition(int pos, T *pNodeData);

    BOOL DeleteFromGenListFirst();

    BOOL DeleteAtPosition(int pos);

    BOOL DeleteFromGenListLast();

    BOOL ReverseList();
};

/////////////////////////////////////////////////////////////////
// Class Name   : Doubly_linkedList
// Description  : This class represents doubly linear linked list
//////////////////////////////////////////////////////////////////

template<class T>
class Doubly_linkedList
{
  public:
  GEN_DLIST<T> *pHead;  //Pointing at start of linked list
  GEN_DLIST<T> *pTail;  //Pointing at end of linked list

  Doubly_linkedList();

  ~Doubly_linkedList();

  BOOL AddToGenListFirst(T *pNodeData);

  void DisplayGenList();

  BOOL AddToGenListLast(T *pNodeData);

  int CountGenListNode();

  BOOL FreeGenList();

  int SearchFirstOccurance(T Data);

  int SearchAllOccurance(T Data);

  BOOL InsertAtPosition(int pos, T *pNodeData);

  BOOL DeleteFromGenListFirst();

  BOOL DeleteAtPosition(int pos);

  BOOL DeleteFromGenListLast();

  BOOL DisplayGenListReverse();
};


///////////////////////////////////////////////////////////////////////////
// Class Name   : Singly_linkedList_Circular
// Description  : This class represents Singly Circular linear linked list
/////////////////////////////////////////////////////////////////////////////

template<class T>
class Singly_linkedList_Circular
{
  public:
  GEN_LIST<T> *pHead;  //Pointing at start of linked list
  GEN_LIST<T> *pTail;  //Pointing at end of linked list

  Singly_linkedList_Circular();

  ~Singly_linkedList_Circular();

  BOOL AddToGenListFirst(T *pNodeData);

  void DisplayGenList();

  BOOL AddToGenListLast(T *pNodeData);

  BOOL FreeGenList();

  int CountGenListNode();

  int SearchFirstOccurance(T Data);

  int SearchAllOccurance(T Data);

  BOOL InsertAtPosition(int pos, T *pNodeData);

  BOOL DeleteFromGenListFirst();

  BOOL DeleteAtPosition(int pos);

  BOOL DeleteFromGenListLast();

  BOOL ReverseList();
};


////////////////////////////////////////////////////////////////////////////
// Class Name   : Doubly_linkedList_Circular
// Description  : This class represents doubly linear Circular linked list
/////////////////////////////////////////////////////////////////////////////

template<class T>
class Doubly_linkedList_Circular
{
  public:
  GEN_DLIST<T> *pHead;  //Pointing at start of linked list
  GEN_DLIST<T> *pTail;  //Pointing at end of linked list

  Doubly_linkedList_Circular();

  ~Doubly_linkedList_Circular();

  BOOL AddToGenListFirst(T *pNodeData);

  void DisplayGenList();

  BOOL AddToGenListLast(T *pNodeData);

  int CountGenListNode();

  BOOL FreeGenList();

  int SearchFirstOccurance(T Data);

  int SearchAllOccurance(T Data);

  BOOL InsertAtPosition(int pos, T *pNodeData);

  BOOL DeleteFromGenListFirst();

  BOOL DeleteAtPosition(int pos);

  BOOL DeleteFromGenListLast();

  BOOL DisplayGenListReverse();

};

template<typename T>
Queue<T>::Queue()
{
    Head=NULL;
    Tail=NULL;
}

template<typename T>
void Queue<T>::Enqueue(T no)
{
    struct nodeQueue<T> *newN=NULL;

    newN=(struct nodeQueue<T> *)malloc(sizeof(struct nodeQueue<T>));
    newN->data=no;
    newN->Next=NULL;

    if((Head==NULL)&&(Tail==NULL))
    {
        Head=newN;
        Tail=newN;
    }
    else
    {
        Tail->Next=newN;
        Tail=Tail->Next;
    }
}

template<typename T>
T Queue<T>::Dequeue()   //Delete node
{
 if((Head==NULL)&&(Tail==NULL))
 {
     return -1;
 }
 if(Head==Tail)
 {
     T temp;
     temp=Head->data;
     free(Head);
     Head=NULL;
     Tail=NULL;
     return temp;
 }
 else
 {
     T temp;
     temp=Head->data;
     struct nodeQueue<T> *ptr=NULL;
     ptr=Head;
     Head=Head->Next;
     free(ptr);
 }
}


template<typename T>
void Queue<T>::DisplayQueue()
{
    struct nodeQueue<T> *temp=Head;

    while(temp!=NULL)
    {
        cout<<temp->data;
        temp=temp->Next;
    }
}

///////////////////////////////////////////////////////////
//  Function name   :   Stack
//  Function Date   :   25/11/2019
//  Function Author :   Kaustubh Wadagavi
//  Parameters      :   NONE
//  Description     :   This is constructor of class Stack
//  Returns         : NONE
////////////////////////////////////////////////////////////

template<typename T>
Stack<T>::Stack()
    {
        Head=NULL;

    }

////////////////////////////////////////////////////////////
//  Function name   :   Push
//  Function Date   :   25/11/2019
//  Function Author :   Kaustubh Wadagavi
//  Parameters      :   T no
//  Description     :   This is function push data in stack
//  Returns         :   void
/////////////////////////////////////////////////////////////

template<typename T>
void Stack<T>::Push(T no)
{
    struct nodeStack<T> *newN=NULL;
    newN=new struct nodeStack<T>;

    newN->Next=NULL;
    newN->data=no;

    if(Head==NULL)
    {
        Head=newN;
    }
    newN->Next=Head;
    Head=newN;
}
///////////////////////////////////////////////////////////////////
//  Function name   :   Pop
//  Function Date   :   25/11/2019
//  Function Author :   Kaustubh Wadagavi
//  Parameters      :   NONE
//  Description     :   This is function removes data from stack
//  Returns         :   int
//                      Display number of elements to be removed
//////////////////////////////////////////////////////////////////
template<typename T>
int Stack<T>:: Pop()
{
    if(Head==NULL)
    {
        cout<<"Stack is empty";
        return 0;
    }
    T no=Head->data;
    struct nodeStack<T> *temp=Head;
    Head=Head->Next;
    delete temp;
    return no;
}


///////////////////////////////////////////////////////////////////////
//  Function name   :   Singly_linkedList
//  Function Date   :   25/11/2019
//  Function Author :   Kaustubh Wadagavi
//  Parameters      :   NONE
//  Description     :   This is constructor of class Singly_linkedList
//  Returns         : NONE
//////////////////////////////////////////////////////////////////////


template<typename T>
Singly_linkedList<T>::Singly_linkedList()
{
    pHead=NULL;
    pTail=NULL;
}

/////////////////////////////////////////////////////////////////////
//  Function name   :   ~Singly_linkedList
//  Function Date   :   25/11/2019
//  Function Author :   Kaustubh Wadagavi
//  Parameters      :   NONE
//  Description     :   This is constructor of class Singly_linkedList
//  Returns         : NONE
//////////////////////////////////////////////////////////////////////

template<typename T>
Singly_linkedList<T>::~Singly_linkedList()
{
    GEN_LIST<T> *pTemp;
    GEN_LIST<T> *pNavigate;

    if(NULL!=pHead)
    {
        pNavigate=pHead;
        while(NULL!=pNavigate)
        {
            pTemp=pNavigate->pNext;
            free(pNavigate);
            pNavigate=pTemp;
        }
    }
}

////////////////////////////////////////////////////////////////////////////
//  Function name   :   AddToGenListFirst
//  Function Date   :   25/11/2019
//  Function Author :   Kaustubh Wadagavi
//  Parameters      :   [IN] T *NodeData Holds the entry which is to be added
//  Description     :   This function adds node to Singly linear linkedList
//  Returns         :   BOOLEAN
//                      If the function succeeds, the return value is TRUE
//                      If the function fails, the return value is FALSE
/////////////////////////////////////////////////////////////////////////////


template<typename T>
BOOL Singly_linkedList<T> :: AddToGenListFirst(T *pNodeData)
{
    GEN_LIST<T> *pNewNode;

    if(NULL==pNodeData)
    {
        return FALSE;
    }
//
//Allocate a new node.
//
pNewNode=(GEN_LIST<T> *)malloc(sizeof(GEN_LIST<T>));
if(NULL==pNewNode)
    {
        return FALSE;
    }
//
//Fill the node with data
//
memset(pNewNode,0,sizeof(GEN_LIST<T>));
pNewNode->pNext=NULL;
pNewNode->Data=*pNodeData;

//
//Prepend
//
if(NULL==pHead)
{

    pHead=pNewNode;
    pTail=pNewNode;
}
else
{
    pNewNode->pNext=pHead;
    pHead=pNewNode;
}
return TRUE;
}

////////////////////////////////////////////////////////////////////
//  Function name   :   DisplayGenList
//  Function Date   :   26/11/2019
//  Function Author :   Kaustubh Wadagavi
//  Parameters      :   NONE
//  Description     :   This function display Singly linear linkedList
//  Returns         :   void
//
//////////////////////////////////////////////////////////////////////

template<typename T>
void Singly_linkedList<T>::DisplayGenList()
{
    GEN_LIST<T> *pTempNode;
    pTempNode=pHead;

    while(NULL!=pTempNode)
    {
        cout<<pTempNode->Data<<"->";
        pTempNode=pTempNode->pNext;
    }
}

////////////////////////////////////////////////////////////////////////////
//  Function name   :   AddToGenListLast
//  Function Date   :   26/11/2019
//  Function Author :   Kaustubh Wadagavi
//  Parameters      :   [IN]GEN_LIST<T> **ppListToBeAppended.
//                      List which is to be appended to an existing list
//  Description     :   This function appends node to Singly linear linkedList
//  Returns         :   BOOLEAN
//                      If the function succeeds, the return value is TRUE
//                      If the function fails, the return value is FALSE
////////////////////////////////////////////////////////////////////////////


template<typename T>
BOOL Singly_linkedList<T>::AddToGenListLast(T *pNodeData)
{
    GEN_LIST<T> *pNewNode;
    GEN_LIST<T> *pTempNode;
    pTempNode=pHead;

    if(NULL==pNodeData)
    {

        return FALSE;
    }
    //
    //Allocate new node
    //
    pNewNode=(GEN_LIST<T> *)malloc(sizeof(GEN_LIST<T>));
    if(NULL==pNewNode)
    {
        return FALSE;
    }
    //
    //Fill the new node with data
    //
    memset(pNewNode,0,sizeof(GEN_LIST<T>));
    pNewNode->pNext=NULL;
    pNewNode->Data=*pNodeData;
    //
    //Append
    //
    if(NULL==pHead)
    {
        pHead=pNewNode;
        pTail=pNewNode;
    }
    else
    {
        pTail->pNext=pNewNode;
        pTail=pNewNode;
    }
    return TRUE;
}


/////////////////////////////////////////////////////////////////////////////
//  Function name   :   FreeGenList
//  Function Date   :   26/11/2019
//  Function Author :   Kaustubh Wadagavi
//  Parameters      :   NONE
//  Description     :   This function frees Singly linear linkedList
//  Returns         :   BOOLEAN
//                      If the function succeeds, the return value is TRUE
//                      If the function fails, the return value is FALSE
/////////////////////////////////////////////////////////////////////////////

template<typename T>
BOOL Singly_linkedList<T>::FreeGenList()
{
    GEN_LIST<T> *pTemp;
    GEN_LIST<T> *pNavigate;

    if(NULL==pHead)
    {
        return FALSE;
    }
    pNavigate=pHead;
    while(NULL!=pNavigate)
    {
        pTemp=pNavigate->pNext;
        free(pNavigate);
        pNavigate=pTemp;
    }
    return TRUE;
}

/////////////////////////////////////////////////////////////////////////////
//  Function name   :   CountGenListNode
//  Function Date   :   26/11/2019
//  Function Author :   Kaustubh Wadagavi
//  Parameters      :   NONE
//  Description     :   This function count nodes in Singly linear linkedList
//  Returns         :   int
//                      Number of nodes in generic list
//////////////////////////////////////////////////////////////////////////////

template<typename T>
int Singly_linkedList<T>::CountGenListNode()
{
    //Variable for maintaining number of nodes
    int CountNode=0;
    GEN_LIST<T> *pListHead=pHead;

    //Traverse the linked list till end
    while(NULL!=pListHead)
    {
        CountNode++;
        pListHead=pListHead->pNext;
    }
    return CountNode;
}

/////////////////////////////////////////////////////////////////////////////////////////
//  Function name   :   SearchFirstOccurance
//  Function Date   :   26/11/2019
//  Function Author :   Kaustubh Wadagavi
//  Parameters      :   [IN] GEN_LIST<T> data,
//                      Holds head data to be searched
//  Description     :   This function search particular data in Singly linear linkedList
//                      and return the position at which data is found
//  Returns         :   int
//                      Position at which data is found in generic list
//////////////////////////////////////////////////////////////////////////////////////////

template<typename T>
int Singly_linkedList<T>::SearchFirstOccurance(T data)
{
    int CountNode=0;
    GEN_LIST<T> *pListHead=pHead;

    //Traverse the linked list till end
    while(pListHead!=NULL)
    {
        ++CountNode;
        //If data matches with the input value
        if(memcmp(&(pListHead->Data),&data,sizeof(data))==0)
        {
            //Break the loop as we get the first occurance
            return CountNode;
        }
        pListHead=pListHead->pNext;
    }
    return -1;
}

////////////////////////////////////////////////////////////////////////////////////////
//  Function name   :   SearchAllOccuance
//  Function Date   :   26/11/2019
//  Function Author :   Kaustubh Wadagavi
//  Parameters      :   [IN] GEN_LIST<T> data,
//                      Holds head data to be searched
//  Description     :   This function search particular data in Singly linear linkedList
//                      and return number of occurances of the data
//  Returns         :   int
//                      Number of times data is found in generic list
/////////////////////////////////////////////////////////////////////////////////////////


template<typename T>
int Singly_linkedList<T>::SearchAllOccurance(T data)
{
    int CountNode=0;
    GEN_LIST<T> *pListHead=pHead;

    //Traverse the linked list till end
    while(pListHead!=NULL)
    {
        //If data matches with the input value
        if(memcmp(&(pListHead->Data),&data,sizeof(data))==0)
        {
            ++CountNode;
        }
        pListHead=pListHead->pNext;
    }
    return CountNode;
}


//////////////////////////////////////////////////////////////////////////////////////////////////
//  Function name   :   InsertAtPosition
//  Function Date   :   26/11/2019
//  Function Author :   Kaustubh Wadagavi
//  Parameters      :   [IN] int pos
//                      Holds the position
//                      [IN] T *pNodeData
//                      Holds the entry which is to be added
//  Description     :   This function adds node at specific position in SinglyLinear Linked List
//                      and return number of occurances of the data
//  Returns         :   BOOLEAN
//                      If the function succeeds, the return value is TRUE
//                      If the function fails, the return value is FALSE
///////////////////////////////////////////////////////////////////////////////////////////////////

template<typename T>
BOOL Singly_linkedList<T>::InsertAtPosition(int pos, T *pNodeData)
{
    int i=1;

    GEN_LIST<T> *temp=NULL;
    GEN_LIST<T> *pNewNode=NULL;

    //If linked list is empty
    if(pHead==NULL)
    {
        return FALSE;
    }
    else if(pos==1)
    {
        AddToGenListFirst(pNodeData);
    }
    else if(pos==(CountGenListNode())+1)
    {
        AddToGenListLast(pNodeData);
    }
    else if(pos>CountGenListNode())
    {
        return FALSE;
    }
    else
    {
        temp=pHead;
        pNewNode=(GEN_LIST<T> *)malloc(sizeof(GEN_LIST<T>));
        if(NULL==pNewNode)
        {
            return FALSE;
        }
        //
        //Fill the node with data
        //
        memset(pNewNode,0,sizeof(GEN_LIST<T>));
        pNewNode->pNext=NULL;
        pNewNode->Data=*pNodeData;

        while(i<pos-1)
        {
            temp=temp->pNext;
            ++i;
        }
        pNewNode->pNext=temp->pNext;
        temp->pNext=pNewNode;
    }
    return TRUE;
}

////////////////////////////////////////////////////////////////////////////////////////
//  Function name   :   DeleteFromGenListFirst
//  Function Date   :   26/11/2019
//  Function Author :   Kaustubh Wadagavi
//  Parameters      :   NONE
//
//  Description     :   This function removes first node from Singly linear list list
//  Returns         :   BOOLEAN
//                      If the function succeeds, the return value is TRUE
//                      If the function fails, the return value is FALSE
////////////////////////////////////////////////////////////////////////////////////////

template<typename T>
BOOL Singly_linkedList<T>::DeleteFromGenListFirst()
{
    GEN_LIST<T> *temp;

    temp=pHead;

    //If linked list is empty
    if(pHead==NULL)
    {
        return FALSE;
    }
    else
    {
        pHead=temp->pNext;
        free(temp);
    }
    return TRUE;
}

/////////////////////////////////////////////////////////////////////////////////////////
//  Function name   :   DeleteFromGenListLast
//  Function Date   :   26/11/2019
//  Function Author :   Kaustubh Wadagavi
//  Parameters      :   NONE
//
//  Description     :   This function removes last node from Singly linear list list
//  Returns         :   BOOLEAN
//                      If the function succeeds, the return value is TRUE
//                      If the function fails, the return value is FALSE
//////////////////////////////////////////////////////////////////////////////////////////

template<typename T>
BOOL Singly_linkedList<T>::DeleteFromGenListLast()
{
    GEN_LIST<T> *temp1, *temp2;
    temp1=temp2=pHead;

    //If linked list empty
    if(pHead==NULL)
    {
        return FALSE;
    }
    else
    {
        while(temp1->pNext!=NULL)
        {
            temp2=temp2->pNext;
            temp1=temp2->pNext;
        }
        temp2->pNext=NULL;
        free(temp1);
    }
    return TRUE;
}


///////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Function name   :   DeleteAtPosition
//  Function Date   :   26/11/2019
//  Function Author :   Kaustubh Wadagavi
//  Parameters      :   [IN] int pos
//                      Holds the position
//  Description     :   This function  deletes the node from specified position in Singly linear list list
//  Returns         :   BOOLEAN
//                      If the function succeeds, the return value is TRUE
//                      If the function fails, the return value is FALSE
////////////////////////////////////////////////////////////////////////////////////////////////////////////

template<typename T>
BOOL Singly_linkedList<T>::DeleteAtPosition(int pos)
{
    if(pos>(CountGenListNode()))
    {
        return FALSE;
    }
    else if(pos==1)
    {
        DeleteFromGenListFirst();
    }
    else if(pos==(CountGenListNode()))
    {
        DeleteFromGenListLast();
    }
    else
    {
        int i=0;
        GEN_LIST<T> *temp=pHead, *t;

        for(i=0;i<pos-1;i++)
        {
            t=temp;
            temp=temp->pNext;
        }
        t->pNext=temp->pNext;
        temp->pNext=NULL;
        free(temp);
    }
    return TRUE;
}

/////////////////////////////////////////////////////////////////////////////
//  Function name   :   ReverseList
//  Function Date   :   26/11/2019
//  Function Author :   Kaustubh Wadagavi
//  Parameters      :   NONE
//
//  Description     :   This function reverse the Singly linear list list
//  Returns         :   BOOLEAN
//                      If the function succeeds, the return value is TRUE
//                      If the function fails, the return value is FALSE
/////////////////////////////////////////////////////////////////////////////

template<typename T>
BOOL Singly_linkedList<T>::ReverseList()
{
    GEN_LIST<T> *prev=NULL;
    GEN_LIST<T> *current=pHead;
    GEN_LIST<T> *next=NULL;

    //If linked list is empty
    if(pHead==NULL)
    {
        return FALSE;
    }
    while(current!=NULL)
    {
        next=current->pNext;
        current->pNext=prev;
        prev=current;
        current=next;
    }
    pHead=prev;
    return TRUE;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


/////////////////////////////////////////////////////////////////////////
//  Function name   :   Doubly_linkedList
//  Function Date   :   26/11/2019
//  Function Author :   Kaustubh Wadagavi
//  Parameters      :   NONE
//
//  Description     :   This is  constructor of class Double_linkedList
//  Returns         :   NONE
//
//////////////////////////////////////////////////////////////////////////


template<typename T>
Doubly_linkedList<T>::Doubly_linkedList()
{
    pHead=NULL;
    pTail=NULL;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////
//  Function name   :   ~Doubly_linkedList
//  Function Date   :   26/11/2019
//  Function Author :   Kaustubh Wadagavi
//  Parameters      :   NONE
//
//  Description     :   This is  destructor  of class Double_linkedList
//  Returns         :   NONE
//
//////////////////////////////////////////////////////////////////////////

template<typename T>
Doubly_linkedList<T>::~Doubly_linkedList()
{
    GEN_DLIST<T> *pTemp;
    GEN_DLIST<T> *pNavigate;

    if(NULL!=pHead)
    {
        pNavigate=pHead;
        while(NULL!=pNavigate)
        {
            pTemp=pNavigate->pNext;
            free(pNavigate);
            pNavigate=pTemp;
        }
    }
}

////////////////////////////////////////////////////////////////////////////////
//  Function name   :   AddToGenListFirst
//  Function Date   :   26/11/2019
//  Function Author :   Kaustubh Wadagavi
//  Parameters      :   [IN] T *pNodeData
//                      Holds the entry to be added
//
//  Description     :   This function adds node in Doubly Linear Linked List
//                      and return number of occurances of the data
//  Returns         :   BOOLEAN
//                      If the function succeeds, the return value is TRUE
//                      If the function fails, the return value is FALSE
/////////////////////////////////////////////////////////////////////////////////

template<typename T>
BOOL Doubly_linkedList<T>::AddToGenListFirst(T *pNodeData)
{
    GEN_DLIST<T> *pNewNode=NULL;

    if(NULL==pNodeData)
    {
        return FALSE;
    }
	///////////////////
    //Allocate new node
    ///////////////////
    pNewNode=(GEN_DLIST<T> *)malloc(sizeof(GEN_DLIST<T>));
    if(NULL==pNewNode)
    {
        return FALSE;
    }
    //////////////////////////////
    //Fill the node with the data
    //////////////////////////////
    memset(pNewNode,0,sizeof(GEN_DLIST<T>));
    pNewNode->pNext=NULL;
    pNewNode->Data=*pNodeData;
    pNewNode->pPrev=NULL;
    //////////
    //Prepend
    //////////
    if(NULL!=pHead)
    {
        pHead=pNewNode;
        pTail=pNewNode;
    }
    else
    {
        pNewNode->pNext=pHead;
        (pHead)->pPrev=pNewNode;
        pHead=pNewNode;
    }
    return TRUE;
}

////////////////////////////////////////////////////////////////////////////////
//  Function name   :   AddToGenListLast
//  Function Date   :   26/11/2019
//  Function Author :   Kaustubh Wadagavi
//  Parameters      :   [IN] GEN_DLIST<T> *ppListToBeAppended
//                      List to be appended to an existing list
//
//  Description     :   This function appends node in Doubly Linear Linked List
//
//  Returns         :   BOOLEAN
//                      If the function succeeds, the return value is TRUE
//                      If the function fails, the return value is FALSE
//////////////////////////////////////////////////////////////////////////////////

template<typename T>
BOOL Doubly_linkedList<T>::AddToGenListLast(T *pNodeData)
{
    GEN_DLIST<T> *pNewNode=NULL;
    GEN_DLIST<T> *pTempNode=NULL;

    pTempNode=pHead;

    if(NULL==pNodeData)
    {
        return FALSE;
    }

    ///////////////////
    //Allocate new node
    ////////////////////
    pNewNode=(GEN_DLIST<T> *)malloc(sizeof(GEN_DLIST<T>));
    if(NULL==pNewNode)
    {
        return FALSE;
    }

    //////////////////////////
    //Fill the node with data
    ///////////////////////////
    memset(pNewNode,0,sizeof(GEN_DLIST<T>));
    pNewNode->pNext=NULL;
    pNewNode->Data=*pNodeData;
    pNewNode->pPrev=NULL;
    //////////////
    //Append
    /////////////
    if(NULL==pHead)
    {
        pHead=pNewNode;
        pTail=pNewNode;
    }
    else
    {
        pNewNode->pPrev=pTail;
        pTail->pNext=pNewNode;
        pTail=pNewNode;
    }
    return TRUE;
}

//////////////////////////////////////////////////////////////////////////////
//  Function name   :   FreeGenList
//  Function Date   :   26/11/2019
//  Function Author :   Kaustubh Wadagavi
//  Parameters      :   NONE
//  Description     :   This function frees node in Doubly Linear Linked List
//
//  Returns         :   BOOLEAN
//                      If the function succeeds, the return value is TRUE
//                      If the function fails, the return value is FALSE
////////////////////////////////////////////////////////////////////////////////

template<typename T>
BOOL Doubly_linkedList<T>::FreeGenList()
{
    GEN_DLIST<T> *pTemp;
    GEN_DLIST<T> *pNavigate;

    if(NULL==pHead)
    {
        return FALSE;
    }
    pNavigate=pHead;
    while(NULL!=pNavigate)
    {
        pTemp=pNavigate->pNext;
        free(pNavigate);
        pNavigate=pTemp;
    }
    return TRUE;
}

///////////////////////////////////////////////////////////////////////////
//  Function name   :   DisplayGenList
//  Function Date   :   26/11/2019
//  Function Author :   Kaustubh Wadagavi
//  Parameters      :   [IN] GEN_DLIST<T> *pListHead
//                      Holds head pointer of list
//
//  Description     :   This function displays Doubly Linear Linked List
//
//  Returns         :   void
//
//////////////////////////////////////////////////////////////////////////


template<typename T>
void Doubly_linkedList<T>::DisplayGenList()
{
    GEN_DLIST<T> *pTempNode=pHead;

    while(NULL!=pTempNode)
    {
        cout<<pTempNode->Data<<"<==>";
        pTempNode=pTempNode->pNext;
    }
}

///////////////////////////////////////////////////////////////////////////////
//  Function name   :   CountGenListNode
//  Function Date   :   26/11/2019
//  Function Author :   Kaustubh Wadagavi
//  Parameters      :   [IN] GEN_DLIST<T> *pListHead
//                      Holds head pointer of list
//
//  Description     :   This function counts nodes in Doubly Linear Linked List
//
//  Returns         :   int
//                      Number of nodes in generic list
//
////////////////////////////////////////////////////////////////////////////////

template<typename T>
int Doubly_linkedList<T>::CountGenListNode()
{
    //Variable for maintaining number of nodes
    int CountNode=0;
    GEN_DLIST<T> *pTempNode=pHead;

    //Traverse the linked list till end
    while(NULL!=pTempNode)
    {
        CountNode++;
        pTempNode=pTempNode->pNext;
    }
    return CountNode;
}


///////////////////////////////////////////////////////////////////////////////////////
//  Function name   :   SearchFirstOccurance
//  Function Date   :   26/11/2019
//  Function Author :   Kaustubh Wadagavi
//  Parameters      :   [IN] GEN_DLIST<T> data
//                      Holds head data to be searched
//
//  Description     :   This function search perticular data in Doubly Linear Linked List
//                      and return the position at which data is found
//
//  Returns         :   int
//                      Position at which data is found in generic list
//////////////////////////////////////////////////////////////////////////////////////////

template<typename T>
int Doubly_linkedList<T>::SearchFirstOccurance(T data)
{
    int CountNode=0;

    GEN_DLIST<T> *pTempNode=pHead;

    //Traverse the linked list till end
    while(pTempNode!=NULL)
    {
        ++CountNode;

        //If data matches with input value
        if(memcmp(&(pTempNode->Data),&data,sizeof(data))==0)
        {
            //Break the loop as we get the first occurance
            return CountNode;
        }
        pTempNode=pTempNode->pNext;
    }
    return -1;
}

//////////////////////////////////////////////////////////////////////////////////////////////
//  Function name   :   SearchAllOccurance
//  Function Date   :   26/11/2019
//  Function Author :   Kaustubh Wadagavi
//  Parameters      :   [IN] GEN_DLIST<T>  data
//                      Holds head data to be search
//
//  Description     :   This function  search perticular data in  Doubly Linear Linked List
//                      and returns number of occurances of that data
//  Returns         :   int
//                      Number of times data is found in generic list
///////////////////////////////////////////////////////////////////////////////////////////////

template<typename T>
int Doubly_linkedList<T>::SearchAllOccurance(T data)
{
    int CountNode=0;
    GEN_DLIST<T> *pTempNode=pHead;

    //Traverse the linked list till end
    while(pTempNode!=NULL)
    {
        //If data matches with the input value
        if(memcmp(&(pTempNode->Data),&data,sizeof(data))==0)
        {
            ++CountNode;
        }
        pTempNode=pTempNode->pNext;
    }
    return CountNode;
}


/////////////////////////////////////////////////////////////////////////////////////////////////////
//  Function name   :   InsetAtPosition
//  Function Date   :   26/11/2019
//  Function Author :   Kaustubh Wadagavi
//  Parameters      :   [IN] int pos
//                      Holds the position
//                      [IN] T *pNodeData
//                      Holds the entry which is to be added
//
//  Description     :   This function adds node at specified position in Doubly Linear Linked List
//
//  Returns         :   BOOLEAN
//                      If the function succeeds, the return value is TRUE
//                      If the function fails, the return value is FALSE
/////////////////////////////////////////////////////////////////////////////////////////////////////


template<typename T>
BOOL Doubly_linkedList<T>::InsertAtPosition(int pos, T* pNodeData)
{
    int i=1;

    GEN_DLIST<T> *temp=NULL;
    GEN_DLIST<T> *pNewNode=NULL;

    //If linked list is empty
    if(pHead==NULL)
    {
        return FALSE;
    }
    else if(pos==1)
    {
        AddToGenListFirst(pNodeData)   ;
    }
    else if(pos==(CountGenListNode())+1)
    {
        AddToGenListLast(pNodeData);
    }
    else if(pos>CountGenListNode())
    {
        return FALSE;
    }
    else
    {

        temp=pHead;
        pNewNode=(GEN_DLIST<T>*)malloc(sizeof(GEN_DLIST<T>));
        if(NULL==pNewNode)
        {
            return FALSE;
        }
        //
        //Fill the data with data
        //
        memset(pNewNode,0,sizeof(GEN_DLIST<T>));
        pNewNode->pNext=NULL;
        pNewNode->Data=*pNodeData;
        pNewNode->pPrev=NULL;

        while(i<pos-1)
        {
            temp=temp->pNext;
            ++i;
        }
        pNewNode->pNext=temp->pNext;
        temp->pNext->pPrev=pNewNode;
        temp->pNext=pNewNode;
        pNewNode->pPrev=temp;
    }
    return TRUE;
}


////////////////////////////////////////////////////////////////////////////////////////
//  Function name   :   DeleteFromGenListFirst
//  Function Date   :   26/11/2019
//  Function Author :   Kaustubh Wadagavi
//  Parameters      :   NONE
//  Description     :   This function removes first node from  Doubly Linear Linked List
//
//  Returns         :   BOOLEAN
//                      If the function succeeds, the return value is TRUE
//                      If the function fails, the return value is FALSE
///////////////////////////////////////////////////////////////////////////////////////


template<typename T>
BOOL Doubly_linkedList<T>::DeleteFromGenListFirst()
{
    GEN_DLIST<T> *temp=NULL;\
    temp=pHead;
	//////////////////////////
    //If linked list is empty
	//////////////////////////
    if(pHead==NULL)
    {
        return FALSE;
    }
    else
    {
        pHead=temp->pNext;
        pHead->pPrev=NULL;
        free(temp);
    }
    return TRUE;
}

/////////////////////////////////////////////////////////////////////////////////////////
//  Function name   :   DeleteFromGenListLast
//  Function Date   :   26/11/2019
//  Function Author :   Kaustubh Wadagavi
//  Parameters      :   NONE
//  Description     :   This function removes last node from Doubly Linear Linked List
//
//  Returns         :   BOOLEAN
//                      If the function succeeds, the return value is TRUE
//                      If the function fails, the return value is FALSE
////////////////////////////////////////////////////////////////////////////////////////////


template<typename T>
BOOL Doubly_linkedList<T>::DeleteFromGenListLast()
{
    GEN_DLIST<T> *temp1,*temp2;
    temp1=temp2=pHead;
	//////////////////////////
    //If linked list is empty
	///////////////////////////
    if(pHead==NULL)
    {
        return FALSE;
    }
    else
    {
        while(temp1->pNext!=NULL)
        {
            temp2=temp2->pNext;
            temp1=temp2->pNext;
        }
        temp2->pNext=NULL;
        free(temp1);
    }
    return TRUE;
}


////////////////////////////////////////////////////////////////////////////////////////////////////
//  Function name   :   DeleteAtPosition
//  Function Date   :   26/11/2019
//  Function Author :   Kaustubh Wadagavi
//  Parameters      :   int pos
//                      Holds the position
//  Description     :   This function delete node from specified position  Doubly Linear Linked List
//
//  Returns         :   BOOLEAN
//                      If the function succeeds, the return value is TRUE
//                      If the function fails, the return value is FALSE
/////////////////////////////////////////////////////////////////////////////////////////////////////

template<typename T>
BOOL Doubly_linkedList<T>::DeleteAtPosition(int pos)
{
    if(pos>(CountGenListNode()))
    {
        return FALSE;
    }
    else if(pos==1)
    {
        DeleteFromGenListFirst();
    }
    else if(pos==(CountGenListNode()))
    {
        DeleteFromGenListLast();
    }
    else
    {
        int i=0;
        GEN_DLIST<T> *temp=pHead, *t;

        for(i=0; i<pos-1;i++)
        {
            t=temp;
            temp=temp->pNext;
        }
        t->pNext=temp->pNext;
        temp->pNext->pPrev=t;
        free(temp);
    }
    return TRUE;
}


/////////////////////////////////////////////////////////////////////////////////
//  Function name   :   DisplayGenListReverse
//  Function Date   :   26/11/2019
//  Function Author :   Kaustubh Wadagavi
//  Parameters      :   NONE
//  Description     :   Function which display the Doubly Linear List in reverse
//
//  Returns         :   BOOLEAN
//                      If the function succeeds, the return value is TRUE
//                      If the function fails, the return value is FALSE
//////////////////////////////////////////////////////////////////////////////////

template<typename T>
BOOL Doubly_linkedList<T>::DisplayGenListReverse()
{
    GEN_DLIST<T> *temp=pTail;

    if(pHead==NULL)
    {
        return TRUE;
    }
    else
    {
        while(temp!=NULL)
        {
            printf("|%d|<=>",temp->Data);
            temp=temp->pPrev;
        }
    }
    return FALSE;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////////
//  Function name   :   Singly_linkedList_Circular
//  Function Date   :   26/11/2019
//  Function Author :   Kaustubh Wadagavi
//  Parameters      :   NONE
//  Description     :   This is constructor of class Singly_linkedList_Circular
//
//  Returns         :   NONE
//////////////////////////////////////////////////////////////////////////////////


template<typename T>
Singly_linkedList_Circular<T>::Singly_linkedList_Circular()
{
    pHead=NULL;
    pTail=NULL;
}


//////////////////////////////////////////////////////////////////////////////////
//  Function name   :   ~Singly_linkedList_Circular
//  Function Date   :   26/11/2019
//  Function Author :   Kaustubh Wadagavi
//  Parameters      :   NONE
//  Description     :   This is destructor of class Singly_linkedList_Circular
//
//  Returns         :   NONE
////////////////////////////////////////////////////////////////////////////////


template<typename T>

Singly_linkedList_Circular<T>::~Singly_linkedList_Circular()
{/*
    GEN_LIST<T> *pTemp;
    GEN_LIST<T> *pNavigate;

    if(NULL!=pHead)
    {
        pNavigate=pHead;
        while(NULL!=pNavigate)
        {
            pTemp=pNavigate->pNext;
            free(pNavigate);
            pNavigate=pTemp;
        }
    }
    */
}

///////////////////////////////////////////////////////////////////////////////
//  Function name   :   AddToGenListFirst
//  Function Date   :   26/11/2019
//  Function Author :   Kaustubh Wadagavi
//  Parameters      :   [IN]T *pNodeData
//                      Holds the entry which is to be added
//
//  Description     :   This function adds node to Singly Circular Linked List
//
//  Returns         :   BOOLEAN
//                      If the function succeeds, the return value is TRUE
//                      If the function fails, the return value is FALSE
/////////////////////////////////////////////////////////////////////////////////

template<typename T>
BOOL Singly_linkedList_Circular<T>::AddToGenListFirst(T *pNodeData)
{
    GEN_LIST<T> *pNewNode;
    if(NULL==pNewNode)
    {
        return FALSE;
    }
    ////////////////////
    //Allocate new node.
    ///////////////////
    pNewNode=(GEN_LIST<T> *)malloc(sizeof(GEN_LIST<T>));
    if(NULL==pNewNode)
    {
        return FALSE;
    }
    ///////////////////////////
    // Fill the node with data
    ////////////////////////////
    memset(pNewNode,0,sizeof(GEN_LIST<T>));
    pNewNode->pNext=NULL;
    pNewNode->Data=*pNodeData;
    //
    //Prepend
    //
    if((NULL==pHead) && (pTail==NULL))
    {
        pHead=pNewNode;
        pTail=pNewNode;
        pTail->pNext=pHead;
    }
    else
    {
        pNewNode->pNext=pHead;
        pHead=pNewNode;
        pTail->pNext=pNewNode;
    }
    return TRUE;
}

////////////////////////////////////////////////////////////////////////////////
//  Function name   :   DisplayGenList
//  Function Date   :   26/11/2019
//  Function Author :   Kaustubh Wadagavi
//  Parameters      :   NONE
//  Description     :   Function which display the Singly Circular Linked List
//
//  Returns         :   void
///////////////////////////////////////////////////////////////////////////////


template<typename T>
void Singly_linkedList_Circular<T>::DisplayGenList()
{
    GEN_LIST<T> *pTempNode;
    pTempNode=pHead;

    do
    {
        cout<<pTempNode->Data<<"->";
        pTempNode=pTempNode->pNext;
    }while(pTempNode!=pTail->pNext);
}


//////////////////////////////////////////////////////////////////////////////
//  Function name   :   AddToGenListLast
//  Function Date   :   26/11/2019
//  Function Author :   Kaustubh Wadagavi
//  Parameters      :   [IN]GEN_LIST<T>  **ppListToBeAppended
//                      List which is to be appended to an existing list
//
//  Description     :   This function appends in Singly Circular Linked List
//
//  Returns         :   BOOLEAN
//                      If the function succeeds, the return value is TRUE
//                      If the function fails, the return value is FALSE
///////////////////////////////////////////////////////////////////////////////


template<typename T>
BOOL Singly_linkedList_Circular<T>::AddToGenListLast(T *pNodeData)
{
    GEN_LIST<T> *pNewNode;
    GEN_LIST<T> *pTempNode;
    pTempNode=pHead;

    if(NULL==pNodeData)
    {
        return FALSE;
    }
    ////////////////////
    //Allocate new node
    ////////////////////
    pNewNode=(GEN_LIST<T> *)malloc(sizeof(GEN_LIST<T>));
    if(NULL==pNewNode)
    {
        return FALSE;
    }
    ///////////////////////////
    //Fill the node with data
    /////////////////////////////
    memset(pNewNode,0,sizeof(GEN_LIST<T>));
    pNewNode->pNext=NULL;
    pNewNode->Data=*pNodeData;
    ///////////
    //Append
    //////////
    if(NULL==pHead && pTail==NULL)
    {
        pHead=pNewNode;
        pTail=pNewNode;
        pTail->pNext=pHead;
    }
    else
    {
        pTail->pNext=pNewNode;
        pTail=pNewNode;
        pTail->pNext=pHead;
    }
    return TRUE;
}

///////////////////////////////////////////////////////////////////////////
//  Function name   :   FreeGenList
//  Function Date   :   26/11/2019
//  Function Author :   Kaustubh Wadagavi
//  Parameters      :   NONE
//
//  Description     :   This function frees Singly Circular Linked List
//
//  Returns         :   BOOLEAN
//                      If the function succeeds, the return value is TRUE
//                      If the function fails, the return value is FALSE
////////////////////////////////////////////////////////////////////////////


template<typename T>
BOOL Singly_linkedList_Circular<T>::FreeGenList()
{
    GEN_LIST<T> *pTemp;
    GEN_LIST<T> *pNavigate;

    if(NULL==pHead)
    {
        return FALSE;
    }
    pNavigate=pHead;
    while(NULL!=pNavigate)
    {
        pTemp=pNavigate->pNext;
        free(pNavigate);
        pNavigate=pTemp;
    }
    return TRUE;

}


//////////////////////////////////////////////////////////////////////////////////
//  Function name   :   CountGenListNode
//  Function Date   :   26/11/2019
//  Function Author :   Kaustubh Wadagavi
//  Parameters      :   NONE
//
//  Description     :   This function counts nodes in Singly Circular Linked List
//
//  Returns         :   int
//                      Number of nodes in generic list
/////////////////////////////////////////////////////////////////////////////////


template<typename T>
int Singly_linkedList_Circular<T>::CountGenListNode()
{
    //Variable for maintaining number of nodes
    int CountNode=0;
    GEN_LIST<T> *pTempNode;
    pTempNode=pHead;
    do
    {
        CountNode++;
        pTempNode =pTempNode->pNext;
    }while(pTempNode!=pTail->pNext);

    return CountNode;
}


/////////////////////////////////////////////////////////////////////////////////////////////
//  Function name   :   SearchFirstOccurance
//  Function Date   :   26/11/2019
//  Function Author :   Kaustubh Wadagavi
//  Parameters      :   [IN]GEN_LIST<T> data
//                      Holds head data to be search
//
//  Description     :   This function search perticular data in Singly Circular Linked List
//                      and return the position at which data is found
//
//  Returns         :   int
//                      Position at which data is found in generic list
//
//////////////////////////////////////////////////////////////////////////////////////////////


template<typename T>
int Singly_linkedList_Circular<T>::SearchFirstOccurance(T data)
{
    int CountNode=0;
    GEN_LIST<T> *pListHead=pHead;

    //  Traverse the linked list till end

    do
    {
        CountNode++;
        if(memcmp(&(pListHead->Data), &data,sizeof(data))==0)
        {
            //Break the loop as we get the first occurance
            return CountNode;
        }
        pListHead=pListHead->pNext;
    }while(pListHead!=pTail->pNext);
    return -1;
}



////////////////////////////////////////////////////////////////////////////////////////////
//  Function name   :   SearchAllOccurance
//  Function Date   :   26/11/2019
//  Function Author :   Kaustubh Wadagavi
//  Parameters      :   [IN]GEN_LIST<T> data.
//                      Holds head data to be searched
//
//  Description     :   This function search perticular data in Singly Circular Linked List
//
//  Returns         :   int
//                      Number of times the data is found in generic list
//////////////////////////////////////////////////////////////////////////////////////////////


template<typename T>
int Singly_linkedList_Circular<T>::SearchAllOccurance(T data)
{
    int CountNode=0;
    GEN_LIST<T> *pListHead=pHead;

    //Traverse the linked list till end
    do
    {
        if(memcmp(&(pListHead->Data),&data,sizeof(data))==0)
        {
            CountNode++;
        }
        pListHead=pListHead->pNext;
    }while(pListHead!=pTail->pNext);
    return CountNode;
}



///////////////////////////////////////////////////////////////////////////////////////////////////
//  Function name   :   InsertAtPosition
//  Function Date   :   26/11/2019
//  Function Author :   Kaustubh Wadagavi
//  Parameters      :   [IN]int pos
//                      Holds the position
//                      [IN] T *pNodeData
//                      Holds the entry which is to be added
//  Description     :   This function adds node at specified position in Singly 
//						Circular  Linked List
//	Returns         :   BOOLEAN
//                      If the function succeeds, the return value is TRUE
//                      If the function fails, the return value is FALSE
/////////////////////////////////////////////////////////////////////////////////////////////////////

template<typename T>
BOOL Singly_linkedList_Circular<T>::InsertAtPosition(int pos, T* pNodeData)
{
    int i=1;

    GEN_LIST<T> *temp=NULL;
    GEN_LIST<T> *pNewNode=NULL;
	//////////////////////////
    //If linked list is empty
	//////////////////////////
    if(pHead==NULL)
    {
        return FALSE;
    }
    else if(pos==1)
    {
        AddToGenListFirst(pNodeData);
    }
    else if(pos==(CountGenListNode())+1)
    {
        AddToGenListLast(pNodeData);
    }
    else if(pos>CountGenListNode())
    {
        return FALSE;
    }
    else
    {
        temp=pHead;
        pNewNode=(GEN_LIST<T> *)malloc(sizeof(GEN_LIST<T>));
        if(NULL==pNewNode)
        {
            return FALSE;
        }
        ///////////////////////////
        //Fill the node with data
        ///////////////////////////
        memset(pNewNode,0,sizeof(GEN_LIST<T>));
        pNewNode->pNext=NULL;
        pNewNode->Data=*pNodeData;

        while(i<pos-1)
        {
            temp=temp->pNext;
            ++i;
        }
        pNewNode->pNext=temp->pNext;
        temp->pNext=pNewNode;
    }
    return TRUE;
}

/////////////////////////////////////////////////////////////////////////////////////////////
//  Function name   :   DeleteFromGenListFirst
//  Function Date   :   26/11/2019
//  Function Author :   Kaustubh Wadagavi
//  Parameters      :   NONE
//  Description     :   This function removes first node from  Singly Circular  Linked List
//
//  Returns         :   BOOLEAN
//                      If the function succeeds, the return value is TRUE
//                      If the function fails, the return value is FALSE
//////////////////////////////////////////////////////////////////////////////////////////////

template<typename T>
BOOL Singly_linkedList_Circular<T>::DeleteFromGenListFirst()
{
    GEN_LIST<T> *temp;
    temp=pHead;

    if(pHead==NULL)
    {
        return FALSE;
    }
    else
    {
        pHead=temp->pNext;
        free(temp);
    }
    return TRUE;
}

///////////////////////////////////////////////////////////////////////////////////////////
//  Function name   :   DeleteFromGenListLast
//  Function Date   :   26/11/2019
//  Function Author :   Kaustubh Wadagavi
//  Parameters      :   NONE
//  Description     :   This function removes last node from Singly Circular  Linked List
//
//  Returns         :   BOOLEAN
//                      If the function succeeds, the return value is TRUE
//                      If the function fails, the return value is FALSE
/////////////////////////////////////////////////////////////////////////////////////////////

template<typename T>
BOOL Singly_linkedList_Circular<T>::DeleteFromGenListLast()
{
    GEN_LIST<T> *temp1,*temp2;
    temp1=pHead;
    temp2=pTail;
	///////////////////////////
    //If linked list is empty
	///////////////////////////
    if(pHead==NULL && pTail==NULL)
    {
        return FALSE;
    }
    else
    {
        while(temp1->pNext!=temp2)
        {
            temp1=temp1->pNext;
        }
        free(temp2);
        pTail=temp1;
        temp1->pNext=pHead;

    }
    return TRUE;
}


////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Function name   :   DeleteAtPosition
//  Function Date   :   26/11/2019
//  Function Author :   Kaustubh Wadagavi
//  Parameters      :   [IN]int pos
//                      Holds the position
//
//  Description     :   This function deletes node from specified position in Singly Circular  Linked List
//
//  Returns         :   BOOLEAN
//                      If the function succeeds, the return value is TRUE
//                      If the function fails, the return value is FALSE
/////////////////////////////////////////////////////////////////////////////////////////////////////////////


template<typename T>
BOOL Singly_linkedList_Circular<T>::DeleteAtPosition(int pos)
{
    if(pos>(CountGenListNode()))
    {
        return FALSE;
    }
    else if(pos==1)
    {
        DeleteFromGenListFirst();
    }
    else if(pos==(CountGenListNode()))
    {
        DeleteFromGenListLast();
    }
    else
    {
        int i=0;
        GEN_LIST<T> *temp=pHead, *t;

        for(i=0;i<pos-1;i++)
        {
            t=temp;
            temp=temp->pNext;
        }
        t->pNext=temp->pNext;
        temp->pNext=NULL;
        free(temp);
    }
    return TRUE;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////
//  Function name   :   Doubly_linkedList_Circular
//  Function Date   :   26/11/2019
//  Function Author :   Kaustubh Wadagavi
//  Parameters      :   NONE
//  Description     :   This is constructor of class Doubly_linkedList_Circular
//
//  Returns         :   NONE
//
//////////////////////////////////////////////////////////////////////////////


template<typename T>
Doubly_linkedList_Circular<T> ::Doubly_linkedList_Circular()
{
    pHead=NULL;
    pTail=NULL;
}

////////////////////////////////////////////////////////////////////////////////
//  Function name   :   ~Doubly_linkedList_Circular
//  Function Date   :   26/11/2019
//  Function Author :   Kaustubh Wadagavi
//  Parameters      :   NONE
//  Description     :   This is destructor of class Doubly_linkedList_Circular
//
//  Returns         :   NONE
//
/////////////////////////////////////////////////////////////////////////////////

template<typename T>
Doubly_linkedList_Circular<T>::~Doubly_linkedList_Circular()
{
    GEN_DLIST<T> *pTemp;
    GEN_DLIST<T> *pNavigate;

    if(NULL==pHead)
    {
        return;
    }

    pNavigate=pHead;
    while(pNavigate!=pTail)
    {
        pTemp=pNavigate->pNext;
        free(pNavigate);
        pNavigate=pTemp;
    }
}


////////////////////////////////////////////////////////////////////////////////
//  Function name   :   AddToGenListFirst
//  Function Date   :   26/11/2019
//  Function Author :   Kaustubh Wadagavi
//  Parameters      :   [IN] T *pNodeData
//                      Holds the entry which is to be added
//
//  Description     :   This function adds node to Doubly Circular Linked List
//
//  Returns         :   BOOLEAN
//                      If the function succeeds, the return value is TRUE
//                      If the function fails, the return value is FALSE
//////////////////////////////////////////////////////////////////////////////////


template<typename T>
BOOL Doubly_linkedList_Circular<T>::AddToGenListFirst(T *pNodeData)
{
    GEN_DLIST<T> *pNewNode=NULL;

    if(NULL==pNodeData)
    {
        return FALSE;
    }
    //////////////////////
    //Allocate new node.
    //////////////////////
    pNewNode=(GEN_DLIST<T> *)malloc(sizeof(GEN_DLIST<T>));
    if(NULL==pNewNode)
    {
        return FALSE;
    }
    //////////////////////////
    //Fill the node with data
    ///////////////////////////
    memset(pNewNode,0,sizeof(GEN_DLIST<T>));
    pNewNode->pNext=NULL;
    pNewNode->Data=*pNodeData;
    pNewNode->pPrev=NULL;

    ///////////
    //Prepend
    ///////////

    if(NULL==pHead)
    {
        pHead=pNewNode;
        pTail=pNewNode;
        pTail->pNext=pNewNode;
    }
    else
    {
        pNewNode->pNext=pHead;
        (pHead)->pPrev=pNewNode;
        pHead=pNewNode;
        pTail->pNext=pHead;
    }
    return TRUE;
}


//////////////////////////////////////////////////////////////////////////////////
//  Function name   :   AddToGenListLast
//  Function Date   :   26/11/2019
//  Function Author :   Kaustubh Wadagavi
//  Parameters      :   [IN] GEN_DLIST<T> **ppListToBeAppended.
//                      List which is to be appended to an existing list
//                      [IN] T *pNodeData
//                      Holds the entry which is to be added
//  Description     :   This function appends node to Doubly Circular  Linked List
//
//  Returns         :   BOOLEAN
//                      If the function succeeds, the return value is TRUE
//                      If the function fails, the return value is FALSE
////////////////////////////////////////////////////////////////////////////////////


template<typename T>
BOOL Doubly_linkedList_Circular<T>::AddToGenListLast(T *pNodeData)
{

    GEN_DLIST<T> *pNewNode=NULL;
    GEN_DLIST<T> *pTempNode=NULL;

    pTempNode=pHead;
    if(NULL==pNodeData)
    {
        return FALSE;
    }
    ////////////////////
    //Allocate new node
    ////////////////////

    pNewNode=(GEN_DLIST<T> *)malloc(sizeof(GEN_DLIST<T>));
    if(NULL==pNewNode)
    {
        return FALSE;
    }
    ///////////////////////////
    //Fill the node with data
    //////////////////////////
    memset(pNewNode,0,sizeof(GEN_DLIST<T>));
    pNewNode->pNext=NULL;
    pNewNode->Data=*pNodeData;
    pNewNode->pPrev=NULL;

    ///////////
    //Append
    ///////////
    if(NULL==pHead)
    {
        pHead=pNewNode;
        pTail=pNewNode;
        pTail->pNext=pNewNode;
    }
    else
    {
        pNewNode->pPrev=pTail;
        pTail->pNext=pNewNode;
        pTail=pNewNode;
        pTail->pNext=pHead;
    }
    return TRUE;
}

/////////////////////////////////////////////////////////////////////////
//  Function name   :   FreeGenList
//  Function Date   :   26/11/2019
//  Function Author :   Kaustubh Wadagavi
//  Parameters      :   NONE
//  Description     :   This function frees Doubly Circular  Linked List
//
//  Returns         :   BOOLEAN
//                      If the function succeeds, the return value is TRUE
//                      If the function fails, the return value is FALSE
///////////////////////////////////////////////////////////////////////////

template<typename T>
BOOL Doubly_linkedList_Circular<T>::FreeGenList()
{
    GEN_DLIST<T> *pTemp;
    GEN_DLIST<T> *pNavigate;

    if(NULL==pHead)
    {
        return FALSE;
    }

    pNavigate=pHead;
    while(pNavigate!=pTail)
    {
        pTemp=pNavigate->pNext;
        free(pNavigate);
        pNavigate=pTemp;
    }
    return TRUE;
}


///////////////////////////////////////////////////////////////////////////
//  Function name   :   DisplayGenList
//  Function Date   :   26/11/2019
//  Function Author :   Kaustubh Wadagavi
//  Parameters      :   [IN] GN_DLIST<T> *pListHead
//                      Holds head pointer of list
//  Description     :   This function displays Doubly_linkedList_Circular
//
//  Returns         :   void
//
///////////////////////////////////////////////////////////////////////////

template<typename T>
void Doubly_linkedList_Circular<T>::DisplayGenList()
{
    GEN_DLIST<T> *pTempNode;
    pTempNode=pHead;

    do
    {
        cout<<pTempNode->Data<<"->";
        pTempNode=pTempNode->pNext;
    }while(pTempNode!=pTail->pNext);
}

//////////////////////////////////////////////////////////////////////////////
//  Function name   :   CountGenList
//  Function Date   :   26/11/2019
//  Function Author :   Kaustubh Wadagavi
//  Parameters      :   [IN] GN_DLIST<T> *ListHead
//                      Holds head pointer of list
//  Description     :   This function counts Doubly_linkedList_Circular
//
//  Returns         :   int
//                      Number of nodes in generic list
//////////////////////////////////////////////////////////////////////////////


template<typename T>
int Doubly_linkedList_Circular<T>::CountGenListNode()
{	//////////////////////////////////////////
    //Variable for maintaining number of count
	//////////////////////////////////////////
    int CountNode=0;
    GEN_DLIST<T> *pTempNode;
    pTempNode=pHead;

    do
    {
        CountNode++;
        pTempNode=pTempNode->pNext;
    }while(pTempNode!=pTail->pNext);
    return CountNode;
}

////////////////////////////////////////////////////////////////////////////////////////////
//  Function name   :   SearchFirstOccurance
//  Function Date   :   26/11/2019
//  Function Author :   Kaustubh Wadagavi
//  Parameters      :   [IN] GN_DLIST<T> data
//                      Holds data to be search
//  Description     :   This function search perticular data in Doubly_linkedList_Circular
//                      and returns the position at which found.
//  Returns         :   int
//                      Position at which data is found in generic list
////////////////////////////////////////////////////////////////////////////////////////////

template<typename T>
int Doubly_linkedList_Circular<T>::SearchFirstOccurance(T data)
{
    int CountNode=0;
    GEN_DLIST<T> *pListHead=pHead;
	//////////////////////////////////////
    //Traverse the linked list till end
	/////////////////////////////////////
    do
    {
        CountNode++;
        if(memcmp(&(pListHead->Data),&data,sizeof(data))==0)
        {
            return CountNode;
			//Break the loop as we get the first occurance
        }
        pListHead=pListHead->pNext;
    }while(pListHead!=pTail->pNext);

    return -1;
}

/////////////////////////////////////////////////////////////////////////////////////////////
//  Function name   :   SearchAllOccurance
//  Function Date   :   26/11/2019
//  Function Author :   Kaustubh Wadagavi
//  Parameters      :   [IN] GN_DLIST<T> data
//                      Holds data to be search
//  Description     :   This function search perticular data in Doubly_linkedList_Circular
//                      and returns number of occurances of that data.
//  Returns         :   int
//                      Number of times the data is found in generic list
//////////////////////////////////////////////////////////////////////////////////////////////


template<typename T>
int Doubly_linkedList_Circular<T>::SearchAllOccurance(T data)
{
    int CountNode=0;
    GEN_DLIST<T> *pListHead=pHead;

    //Traverse the linked list till end
    do
    {
        if(memcmp(&(pListHead->Data),&data,sizeof(data))==0)
        {
            CountNode++;
        }
        pListHead=pListHead->pNext;
    }while(pListHead!=pTail->pNext);
    return CountNode;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////
//  Function name   :   InsertAtPosition
//  Function Date   :   26/11/2019
//  Function Author :   Kaustubh Wadagavi
//  Parameters      :   [IN] int pos
//                      Holds the position
//                      [IN] t *pNodeData
//                      Holds the entry which is to be added
//  Description     :   This function adds node at specified position Doubly Circular  Linked List
//
//  Returns         :   BOOLEAN
//                      If the function succeeds, the return value is TRUE
//                      If the function fails, the return value is FALSE
/////////////////////////////////////////////////////////////////////////////////////////////////////


template<typename T>
BOOL Doubly_linkedList_Circular<T>::InsertAtPosition(int pos, T *pNodeData)
{
    int i=1;

    GEN_DLIST<T> *temp=NULL;
    GEN_DLIST<T> *pNewNode=NULL;
	//////////////////////////
    //if linked list is empty
	//////////////////////////
    if(pHead==NULL)
    {
        return FALSE;
    }
    else if(pos==1)
    {
        AddToGenListFirst(pNodeData);
    }
    else if(pos==(CountGenListNode())+1)
    {
        AddToGenListLast(pNodeData);
    }
    else if(pos>CountGenListNode())
    {
        return FALSE;
    }
    else
    {
        temp=pHead;
        pNewNode=(GEN_DLIST<T> *)malloc(sizeof(GEN_DLIST<T>));
        if(NULL==pNewNode)
        {
            return FALSE;
        }
        ////////////////////////////
        //Fill the node with data
        //////////////////////////////

        memset(pNewNode,0,sizeof(GEN_DLIST<T>));
        pNewNode->pNext=NULL;
        pNewNode->Data=*pNodeData;
        pNewNode->pPrev=NULL;

        while(i<pos-1)
        {
            temp=temp->pNext;
            ++i;
        }
        pNewNode->pNext=temp->pNext;
        temp->pNext->pPrev=pNewNode;
        temp->pNext=pNewNode;
        pNewNode->pPrev=temp;

    }
    return TRUE;
}



////////////////////////////////////////////////////////////////////////////////////////////
//  Function name   :   DeleteFromGenListFirst
//  Function Date   :   26/11/2019
//  Function Author :   Kaustubh Wadagavi
//  Parameters      :   NONE
//  Description     :   This function removes first node from Doubly Circular  Linked List
//
//  Returns         :   BOOLEAN
//                      If the function succeeds, the return value is TRUE
//                      If the function fails, the return value is FALSE
/////////////////////////////////////////////////////////////////////////////////////////////

template<typename T>

BOOL Doubly_linkedList_Circular<T>::DeleteFromGenListFirst()
{
    GEN_DLIST<T> *temp=NULL;
    temp=pHead;

    //If linked list is empty
    if(pHead==NULL)
    {
        return FALSE;
    }
    else
    {
        pHead=temp->pNext;
        pTail->pNext=pHead;
        pHead->pPrev=pTail;
        free(temp);
    }
    return TRUE;
}

///////////////////////////////////////////////////////////////////////////////////////////
//  Function name   :   DeleteFromGenListLast
//  Function Date   :   26/11/2019
//  Function Author :   Kaustubh Wadagavi
//  Parameters      :   NONE
//  Description     :   This function removes last node from Doubly Circular  Linked List
//
//  Returns         :   BOOLEAN
//                      If the function succeeds, the return value is TRUE
//                      If the function fails, the return value is FALSE
/////////////////////////////////////////////////////////////////////////////////////////////

template<typename T>
BOOL Doubly_linkedList_Circular<T>::DeleteFromGenListLast()
{

    GEN_DLIST<T> *temp;

    //If linked list is empty
    if(pHead==NULL)
    {
        return FALSE;
    }
    else
    {

        temp=pTail;
        pTail=pTail->pPrev;
        pTail->pNext=pHead;
        free(temp);
    }
    return TRUE;
}


//////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Function name   :   DeleteAtPosition
//  Function Date   :   26/11/2019
//  Function Author :   Kaustubh Wadagavi
//  Parameters      :   [IN] int pos
//                      Hold the position
//  Description     :   This function deletes node from specified position in Doubly Circular  Linked List
//
//  Returns         :   BOOLEAN
//                      If the function succeeds, the return value is TRUE
//                      If the function fails, the return value is FALSE
///////////////////////////////////////////////////////////////////////////////////////////////////////////


template<typename T>
BOOL Doubly_linkedList_Circular<T>::DeleteAtPosition(int pos)
{
    if(pos>(CountGenListNode()))
    {
        return FALSE;
    }
    else if(pos==1)
    {
        DeleteFromGenListFirst();
    }
    else if(pos==(CountGenListNode()))
    {
        DeleteFromGenListLast();
    }
    else
    {
        int i=0;
        GEN_DLIST<T> *temp=pHead, *t;

        for(i=0;i<pos-1;i++)
        {
            t=temp;
            temp=temp->pNext;
        }
        t->pNext=temp->pNext;
        temp->pNext->pPrev=t;

        free(temp);
    }
    return TRUE;

}


////////////////////////////////////////////////////////////////////////////////
//  Function name   :   DisplayGenListReverse
//  Function Date   :   26/11/2019
//  Function Author :   Kaustubh Wadagavi
//  Parameters      :   NONE
//  Description     :   This function which display the list in reverse manner
//
//  Returns         :    void
////////////////////////////////////////////////////////////////////////////////


template<typename T>
BOOL Doubly_linkedList_Circular<T>::DisplayGenListReverse()
{
    GEN_DLIST<T> *temp=pTail;

    if(pHead==NULL)
    {
        return TRUE;
    }
    else
    {
        do
        {
            printf("|%d|<=>", temp->Data);
            temp=temp->pPrev;
        }while(temp!=pHead->pPrev);
    }
    return FALSE;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////
//  Function Name   :   Entry point function
//  Function Date   :   26/11/2019
//  Function Author :   Kaustubh Wadagavi
//  Brief Description :
//
///////////////////////////////////////////////////////////

int main()
{
    BOOL bRet;

    cout<<endl<<"------------------------------------------------------"<<endl;
    cout<<"\t\tLinear Singly Linked List";
    cout<<endl<<"------------------------------------------------------"<<endl;

    Singly_linkedList<int>sobj;
    int no=10;
    sobj.AddToGenListFirst(&no);
    no++;
    sobj.AddToGenListFirst(&no);
    no++;
    sobj.AddToGenListFirst(&no);
    no++;
    sobj.AddToGenListFirst(&no);
    no=25;

    sobj.AddToGenListLast(&no);
    sobj.DisplayGenList();

    no=11;
    cout<<endl<<"Element 11 is fount at position"<<sobj.SearchFirstOccurance(no)<<endl;

    sobj.InsertAtPosition(4,&no);
    sobj.DisplayGenList();
    printf("\n");

    sobj.DeleteFromGenListLast();
    sobj.DisplayGenList();
    printf("\n");

    sobj.DeleteAtPosition(2);
    sobj.DisplayGenList();
    printf("\n");

    sobj.ReverseList();
    sobj.DisplayGenList();
    printf("\n");

    cout<<endl<<"--------------------------------------------------------------------------------------"<<endl;
    cout<<"\t\tLinear Doubly Linked List";
    cout<<endl<<"--------------------------------------------------------------------------------------"<<endl;

    Doubly_linkedList<int>dobj;

    bRet=dobj.AddToGenListFirst(&no);
    no++;

    bRet=dobj.AddToGenListFirst(&no);
    no++;

    bRet=dobj.AddToGenListFirst(&no);
    no++;

    dobj.DisplayGenList();
    printf("\n");

    no=20;
    bRet=dobj.AddToGenListFirst(&no);
    no=30;
    bRet=dobj.AddToGenListFirst(&no);

    dobj.DisplayGenList();
    printf("\n");

    no=40;
    bRet=dobj.AddToGenListFirst(&no);
    no=50;

    bRet=dobj.AddToGenListFirst(&no);

    dobj.DisplayGenList();
    printf("\n");

    no=20;
    cout<<endl<<"Element 20 is found at position "<<dobj.SearchFirstOccurance(no)<<endl;
    no=45;
    dobj.DisplayGenList();
    printf("\n");
    dobj.InsertAtPosition(4,&no);
    dobj.DisplayGenList();
    printf("\n");

    printf("\n");
    dobj.DeleteAtPosition(4);
    dobj.DisplayGenList();
    printf("\n");

    dobj.DisplayGenListReverse();
    cout<<endl<<"--------------------------------------------------------------------------------------"<<endl;
    cout<<"\t\tCircular Singly Linked List";
    cout<<endl<<"--------------------------------------------------------------------------------------"<<endl;


    Singly_linkedList_Circular<int>scobj;

    no=25;
    scobj.AddToGenListFirst(&no);
    scobj.DisplayGenList();

    no=10;
    scobj.AddToGenListFirst(&no);
    no++;
    cout<<endl;
    scobj.DisplayGenList();

    scobj.AddToGenListFirst(&no);
    no++;

    scobj.AddToGenListFirst(&no);
    no++;
    cout<<endl;

    scobj.DisplayGenList();
    cout<<endl;

    no=25;
    scobj.AddToGenListLast(&no);
    scobj.DisplayGenList();
    no=11;
    cout<<"Element 11 is found at position"<<scobj.SearchFirstOccurance(no)<<endl;

    scobj.InsertAtPosition(4,&no);
    scobj.DisplayGenList();
    printf("\n");

    no=25;
    cout<<endl<<"Element 11 is found at position"<<scobj.SearchAllOccurance(no)<<endl;

    scobj.DeleteFromGenListFirst();
    scobj.DisplayGenList();
    printf("\n");

    cout<<endl<<"--------------------------------------------------------------------------------------"<<endl;
    cout<<"\t\tCircular Doubly Linked List";
    cout<<endl<<"--------------------------------------------------------------------------------------"<<endl;

    Doubly_linkedList_Circular<int>dcobj;

    no=95;
    dcobj.AddToGenListLast(&no);
    dcobj.DisplayGenList();

    no=25;
    dcobj.AddToGenListFirst(&no);
    dcobj.DisplayGenList();

    no=10;
    dcobj.AddToGenListFirst(&no);
    no++;
    cout<<endl;
    dcobj.DisplayGenList();

    dcobj.AddToGenListFirst(&no);
    no++;

    cout<<endl;
    dcobj.DisplayGenList();

    dcobj.AddToGenListFirst(&no);
    no++;
    dcobj.AddToGenListFirst(&no);
    no++;

    cout<<endl;
    dcobj.DisplayGenList();

    no=35;
    dcobj.AddToGenListLast(&no);
    dcobj.DisplayGenList();
    no=11;
    cout<<endl<<"Element 11 is found at position "<<dcobj.SearchFirstOccurance(no)<<endl;
    cout<<endl<<"Element 11 is found at position "<<dcobj.SearchAllOccurance(no)<<endl;

    dcobj.InsertAtPosition(4,&no);
    dcobj.DisplayGenList();
    printf("\n");

    dcobj.DeleteFromGenListFirst();
    dcobj.DisplayGenList();
    printf("\n");

    dcobj.DeleteAtPosition(2);
    dcobj.DisplayGenList();
    printf("\n");

    dcobj.DisplayGenListReverse();
	
	cout<<"QUEUE--------------------------------------------------"<<endl;
    Queue<int>iobj;
    Queue<char>cobj;

    iobj.Enqueue(22);
    iobj.Enqueue(33);
    iobj.Enqueue(44);

    cout<<iobj.Dequeue();
    iobj.DisplayQueue();

    cobj.Enqueue('p');
    cobj.Enqueue('Q');
    cobj.Enqueue('R');

    cobj.DisplayQueue();

	cout<<"Stack-------------------------------------------------"<<endl;
    Stack <int>s1;
    s1.Push(11);
    s1.Push(21);
    s1.Push(51);
    s1.Push(101);
	
	///////////////
    //s1.Display();
	///////////////
    cout<<s1.Pop()<<"\t";
    cout<<s1.Pop()<<"\t";

    return 0;
}
