//
// Created by Admin on 03.05.2024.
//
#define STACK_SIZE 5
int queue_table[STACK_SIZE] = { 0 };
int queue_index = 0;

int isQueueEmpty(void)
{
    return (queue_index == 0) ? 1 : 0;
}

int isQueueFull(void)
{
    return (queue_index == (STACK_SIZE)) ? 1 : 0;
}

int Pop(void)
{
    if (!isQueueEmpty())
    {
        for(int i = 0; i < queue_index -1; i ++)
        {
            queue_table[i] = queue_table[i+1];
        }
        queue_index--;

    }

    return queue_table[0];
}

int Top(void)
{
    if (!isQueueEmpty())
    {
        return queue_table[0];
    }

    return queue_table[0];
}

void Push(int val)
{
    if (!isQueueFull())
    {
        queue_table[queue_index] = val;
        queue_index++;
    }
}