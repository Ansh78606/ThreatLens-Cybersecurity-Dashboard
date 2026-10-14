/* ThreatLens educational sample log analyzer.
 * Build: gcc -std=c11 -Wall -Wextra event_analyzer.c -o event_analyzer
 * Run: ./event_analyzer sample.log
 */
#include <stdio.h>
#include <string.h>

int main(int argc, char **argv) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <sample-log-file>\n", argv[0]);
        return 1;
    }
    FILE *file = fopen(argv[1], "r");
    if (!file) { perror("Unable to open log file"); return 1; }
    char line[512];
    unsigned total = 0, failed = 0, warning = 0, info = 0;
    while (fgets(line, sizeof line, file)) {
        ++total;
        if (strstr(line, "FAILED")) ++failed;
        else if (strstr(line, "WARNING")) ++warning;
        else if (strstr(line, "INFO")) ++info;
    }
    fclose(file);
    printf("ThreatLens sample log report\n");
    printf("----------------------------\n");
    printf("Total lines:       %u\n", total);
    printf("Failed events:     %u\n", failed);
    printf("Warnings:          %u\n", warning);
    printf("Informational:     %u\n", info);
    puts("Note: This is a simple keyword counter, not a real threat detector.");
    return 0;
}
