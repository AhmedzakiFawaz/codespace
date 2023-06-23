#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{
    // Get current time and add 5 minutes to it
    time_t now = time(NULL);
    struct tm *tm_struct = localtime(&now);
    tm_struct->tm_min += 5;

    // Convert updated time back to timestamp
    now = mktime(tm_struct);

    // Execute shutdown command for Windows or Linux based on OS type
#ifdef _WIN3
    char cmd[50];
    sprintf(cmd, "shutdown /s /t %ld", (long)difftime(now, time(NULL)));
#else
   char cmd[50] = "sudo shutdown -h ";
   strftime(cmd+16,sizeof(cmd)-1,"%H:%M",localtime(&now));
#endif

   printf("Turning off computer at: %s\n", asctime(localtime(&now)));

   system(cmd); // Run the command

   return 0;
}