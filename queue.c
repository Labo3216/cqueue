/**************************************************************/
/* Program: queue.c                                           */
/* Author: Sami Metoui samimetoui@gmail.com                   */
/* Description: queue collection fuctions                     */
/* License: GPL 3 (http://www.gnu.org/licenses/gpl.html)      */
/**************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include "node.h"
#include "list.h"
#include "queue.h"

/*****************************/
/*MAIN                       */
/*****************************/
int main()
{
 return ;
}

/************************************************/
/* Fuction push(): push element in queue        */
/* Input: integer value to push, queuen pointer */
/************************************************/

void push(t_node** p, int e)
{
    insert(p,e);
}

/*********************************************/
/* Function: pull() pull element from queue  */
/* Input: queue pointer                      */
/* Output: value or -1 if queue is empty     */
/*********************************************/

int pull(t_node** p)
{
    int e;
    t_node* ptr;
    ptr=last(*p);
    if(ptr==NULL) printf("Queue is empty!\n");
    else
    {
        e=ptr->value;
        removeNode(p,ptr);
        return e;
    }

    return -1;
}


