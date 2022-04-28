// Create a program to test the new scheduler and also getpinfo
#include "types.h"
#include "stat.h"
#include "user.h"
#include "pstat.h"

int main(void) {
    int i;
    struct pstat p_stat;
    printf(1, "HW2 - Scheduler and PSStat\n");
    getpinfo(&p_stat);
    printf(1, "PID\tTicks (high)\tTicks (Low)\n");
    for (i = 0; i < NPROC; ++i) {
        if (p_stat.inuse[i]) {
            printf(1, "%d\t%d\t%d\n", p_stat.pid[i], p_stat.hticks[i], p_stat.lticks[i]);
        }
    }
    exit();
}
