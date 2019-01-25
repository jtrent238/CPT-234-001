#include <stdio.h>

int main()
{
    double hostWritesBit = 0.0;
    double hostWritesByte = 0.0;
    double hostWritesKiB = 0.0;
    double hostWritesMiB = 0.0;
    double hostWritesGiB = 0.0;
    double hostWritesTiB = 0.0;
    
    printf("Enter the total host Read/Writes in GiB for your hard drive: ");
    scanf("%lf", &hostWritesGiB);
    
    hostWritesBit = hostWritesByte * 1024;
    hostWritesByte = hostWritesKiB * 1024;
    hostWritesKiB = hostWritesMiB * 1024;
    hostWritesMiB = hostWritesGiB * 1024;
    hostWritesTiB = hostWritesGiB / 1024;
    
    
    printf("Your hard drive has had" "\n");
    printf("    " "%.2lf Bits." "\n", hostWritesBit);
    printf("    " "%.2lf Bytes." "\n", hostWritesByte);
    printf("    " "%.2lf Kilobytes." "\n", hostWritesKiB);
    printf("    " "%.2lf Megabytes." "\n", hostWritesMiB);
    printf("    " "%.2lf Gigabytes." "\n", hostWritesGiB);
    printf("    " "%.2lf Terabytes." "\n", hostWritesTiB);
    printf("data read/written to it in its life time!" "\n");
    
    printf("\n"); //blank line
    
    printf("NOTE: Kilobytes and below may end up being zero because it is to high of a number.");
    
    return 0;
}

