
#ifndef PROCESS_H
#define PROCESS_H

#define P_SIZE 7		//size of the processes 

/**
 * Abstraction of a process 
 */
typedef struct _process {
	int pid;		// uid
	int arrival_time;	// scheduling process - higher it is late on time line
	int priority;		/*lower priority = low nums*/
} Process;

// create process
void process_ctr(Process * p, int pid, int arrival_time, int priority);

#endif				// PROCESS_H