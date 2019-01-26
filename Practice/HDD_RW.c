#include <stdio.h>

int main()
{
    double hostReadsBit = 0.0;
    double hostReadsByte = 0.0;
    double hostReadsKiB = 0.0;
    double hostReadsMiB = 0.0;
    double hostReadsGiB = 0.0;
    double hostReadsTiB = 0.0;
    
    double hostWritesBit = 0.0;
    double hostWritesByte = 0.0;
    double hostWritesKiB = 0.0;
    double hostWritesMiB = 0.0;
    double hostWritesGiB = 0.0;
    double hostWritesTiB = 0.0;
    
    const int DATA_SIZE = 1024;
    
    printf("Enter the total host Read in GiB for your hard drive: ");
        scanf("%lf", &hostReadsGiB);
    
    printf("Enter the total host Writes in GiB for your hard drive: ");
        scanf("%lf", &hostWritesGiB);
    
    hostReadsMiB = hostReadsGiB * DATA_SIZE;
    hostReadsKiB = hostReadsMiB * DATA_SIZE;
    hostReadsByte = hostReadsKiB * DATA_SIZE;
    hostReadsBit = hostReadsByte * DATA_SIZE;
    hostReadsTiB = hostReadsGiB / DATA_SIZE;
    
    hostWritesMiB = hostWritesGiB * DATA_SIZE;
    hostWritesKiB = hostWritesMiB * DATA_SIZE;
    hostWritesByte = hostWritesKiB * DATA_SIZE;
    hostWritesBit = hostWritesByte * DATA_SIZE;
    hostWritesTiB = hostWritesGiB / DATA_SIZE;
    
    
    printf("Your hard drive has had" "\n");
    printf("    " "%.2lf Bits." "\n", hostReadsBit);
    printf("    " "%.2lf Bytes." "\n", hostReadsByte);
    printf("    " "%.2lf Kilobytes." "\n", hostReadsKiB);
    printf("    " "%.2lf Megabytes." "\n", hostReadsMiB);
    printf("    " "%.2lf Gigabytes." "\n", hostReadsGiB);
    printf("    " "%.2lf Terabytes." "\n", hostReadsTiB);
    printf("data read from it in its life time!" "\n");
    
    printf("\n"); //blank line
    
    printf("Your hard drive has had" "\n");
    printf("    " "%.2lf Bits." "\n", hostWritesBit);
    printf("    " "%.2lf Bytes." "\n", hostWritesByte);
    printf("    " "%.2lf Kilobytes." "\n", hostWritesKiB);
    printf("    " "%.2lf Megabytes." "\n", hostWritesMiB);
    printf("    " "%.2lf Gigabytes." "\n", hostWritesGiB);
    printf("    " "%.2lf Terabytes." "\n", hostWritesTiB);
    printf("data written to it in its life time!" "\n");
    
    printf("\n"); //blank line
    
    printf("Your hard drive has had" "\n");
    printf("    " "%.2lf Bits." "\n", hostReadsBit + hostWritesBit);
    printf("    " "%.2lf Bytes." "\n", hostReadsByte + hostWritesByte);
    printf("    " "%.2lf Kilobytes." "\n", hostReadsKiB + hostWritesKiB);
    printf("    " "%.2lf Megabytes." "\n", hostReadsMiB + hostWritesMiB);
    printf("    " "%.2lf Gigabytes." "\n", hostReadsGiB + hostWritesGiB);
    printf("    " "%.2lf Terabytes." "\n", hostReadsTiB + hostWritesTiB);
    printf("data Read/written to it in its life time total!" "\n");
    
    printf("\n"); //blank line
    
    return 0;
}
