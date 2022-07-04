#include <stdio.h>

/*

**** Calculate PI with Nilkantha's series in C	****

**** Creator : Seyed Fazel Alavi		            ****

**** github : https://github.com/fazel87/PI	    ****

**** Email : fazel8195@gmail.com 		            ****

**** License : MIT License		                	****

*/

int main(){
	double pi = 0;
	double a = 2.0;
	for (int i = 0 ; i <= 1000 ; i+=1){
		double temp = 4.0 / (a * (a+1.0) * (a+2.0));
		if (i % 2 == 0)
			pi += temp;
		else
			pi -= temp;
		a += 2.0;
	}
	pi += 3.0;
	printf("%f\n" , pi);
    return 0;

}
