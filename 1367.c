#include <stdio.h>
#include <string.h>

#define MAX_PROBLEMS 26

typedef struct {
    int penalty;
    int solved;
} Problem;

int main() {
    int submissionCount;

    while (scanf("%d", &submissionCount) && submissionCount != 0) {
        Problem problems[MAX_PROBLEMS];
        for (int i = 0; i < MAX_PROBLEMS; i++) {
            problems[i].penalty = 0;
            problems[i].solved = 0;
        }

        int totalTime = 0;
        int totalSolved = 0;

        for (int i = 0; i < submissionCount; i++) {
            char problemId;
            int time;
            char verdict[10];

            scanf(" %c %d %s", &problemId, &time, verdict);

            int index = problemId - 'A';

            if (strcmp(verdict, "correct") == 0) {
                if (!problems[index].solved) {
                    problems[index].solved = 1;
                    totalSolved++;
                    totalTime += time + problems[index].penalty;
                }
            } else {
                problems[index].penalty += 20;
            }
        }

        printf("%d %d\n", totalSolved, totalTime);
    }

    return 0;
}
