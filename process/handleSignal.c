#include <stdio.h>
#include <signal.h> // signal()
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

static void printSigset(sigset_t *set); // print signal

