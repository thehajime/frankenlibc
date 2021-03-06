#ifndef _SIGNAL_H_
#define _SIGNAL_H_

#include <sys/types.h>
#ifndef _SIGSET_T
#define _SIGSET_T
typedef uint32_t	sigset_t; /* __darwin_sigset_t */
#endif
typedef void siginfo_t;		  /* XXX */

struct sigaction {
	union {
		void (*sa_handler)(int);
		void (*sa_sigaction)(int, siginfo_t *, void *);
	} __sa_handler;
	sigset_t sa_mask;
	int sa_flags;
	void (*sa_restorer)(void);
};
#define sa_handler   __sa_handler.sa_handler
#define sa_sigaction __sa_handler.sa_sigaction

#define kill(p, s) __platform_kill(p, s)
#define sigaction(s, i, o) __platform_sigaction(s, i, o)

int kill(pid_t, int);
int sigaction(int sig, const struct sigaction *restrict act,
	      struct sigaction *restrict oact);

#define SIGABRT 6
#define SIGSEGV 11

#define SA_SIGINFO	0x0040

#define SIG_DFL  ((void (*)(int)) 0)

#endif
