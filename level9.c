#include <stdlib.h>

int main(int ac, char **av) {
	
	char buff[32];
	
	if (ac == 1) exit();

	void *a = _Znwj@plt();
	_ZN1NC2E(a, 5);
	_Znwj@plt();
	_ZN1NC2Ei();
	_ZN1N13setAnnotationEPc(buff, av[1]);
	return(0);
}

void
_ZN1NC2Ei(void *a, int b) {

	/* fonction qui pue */
}

void
_ZN1N13setAnnotationEPc(char *buff, char *a){

	size_t len = strlen(a);
	memcpy(buff, a, len);
}
 