#include <stdio.h>
#include <omp.h>
#include <stdlib.h>

int main(int argc, char** argv) {
	
	int x = 100;
	//omp_set_num_threads(4);
	
	#pragma omp parallel
	{
		x = omp_get_thread_num();

		if(x != omp_get_thread_num()){
			printf("Sou a thread %d, meu valor de x é %d\n", omp_get_thread_num(), x);	
		}
	}
	
	return 0;
}

/*
// bash code
while true
do
./exec
done
*/