#include <windows.h>
#include <iostream>

using namespace std;

int main(){
	
	CONTEXT ctx = {0};
	HANDLE handle = {022576000};
	
ctx.ContextFlags = CONTEXT_ALL;
cout<<GetThreadContext(handle, &ctx);

	
}
