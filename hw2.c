// Create a program to test the new scheduler and also getpinfo
#include "types.h"
#include "stat.h"
#include "user.h"



int main(void) {
    printf(1, "HW2 - Scheduler\n");
    //int num_calls = getsyscallinfo();
    //printf(1, "System calls: %d\n", num_calls);
    int rc, i;
    struct pstat ps;
    rc = getpinfo(&ps);
    if (rc < 0) {
        printf(1, "Warning: getpinfo() returned - 1\n");
    }
    printf(1, "PID\tTicks (high)\tTicks (Low)\n");
    for (i = 0; i < NPROC; ++i) {
        if (ps.inuse[i]) {
            printf(1, "%d\t%d\t%d\n", ps.pid[i], ps.hticks[i], ps.lticks[i]);
        }
    }

    exit();
}
