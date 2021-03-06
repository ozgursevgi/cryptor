#ifndef ERROR_H
#define ERROR_H

//prints the last system error in a readable form
void perr(const char *msg);
//prints socket specific errors
void perr_sock(const char *msg);
//prints the last sys error and exits with that code
void perr_exit(const char *msg);

#endif
