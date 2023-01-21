#include <windows.h>
#include <bits/stdc++.h>
#pragma comment(lib, "user32.lib")

using namespace std;

int main()
{
   SYSTEM_INFO siSysInfo;
   _MEMORYSTATUSEX mem;
	
   // Copy the hardware information to the SYSTEM_INFO structure. 

   GetSystemInfo(&siSysInfo); 
   

   // Display the contents of the SYSTEM_INFO structure. 
	
   printf("Hardware information: \n");  
   printf("  OEM ID: %u\n", siSysInfo.dwOemId);
   printf("  Number of processors: %u\n", 
      siSysInfo.dwNumberOfProcessors);       
   printf("  Page size: %u\n", siSysInfo.dwPageSize); 
   printf("  Processor type: %u\n", siSysInfo.dwProcessorType); 
   printf("  Minimum application address: %lx\n", 
      siSysInfo.lpMinimumApplicationAddress); 
   printf("  Maximum application address: %lx\n", 
      siSysInfo.lpMaximumApplicationAddress); 
   printf("  Active processor mask: %u\n", 
      siSysInfo.dwActiveProcessorMask); 
      
    cout<<"Memory lenght "<<mem.dwLength<<"\n";
    cout<<"Total physical mem "<<mem.ullTotalPhys<<"\n";
    cout<<"Total virutal mem "<<mem.ullTotalVirtual<<"\n";
    cout<<"Availabe physical mem "<<mem.ullAvailPhys<<"\n";
    cout<<"Availabe virtual mem "<<mem.ullAvailVirtual<<"\n";  
}
