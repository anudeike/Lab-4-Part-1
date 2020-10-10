#include "process.h"

// controls the processes and get their arrival times - implemetations (and priorities)
void process_ctr(Process * p, int pid, int arrival_time, int priority)
{
	p->pid = pid;
	p->arrival_time = arrival_time;
	p->priority = priority;
}