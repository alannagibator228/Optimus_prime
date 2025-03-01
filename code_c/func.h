#ifndef FUNC_H
#define FUNC_H

#define NUM 15
#define OPT 25 
#define LAB_INIT {0, 0, NONE}

#define SUB1 6
#define SUB2 8 
#define SUB3 10
#define SUB4 15

#define FILENAME_LEN 12

typedef enum{
	NONE = 0,
	ONE = 1,
	TWO = 2,
	THREE = 3,
	FOUR = 4
}Subject;
typedef struct{
	int number;
	int option;
	Subject sub;
}Lab;

typedef struct{
	float A, B, C, D;
}Coeffs;
typedef struct{
	float a, b;
}Interval;

typedef struct{
	Coeffs coeff;
	Interval inter1;
	Interval inter2;
	float o, g, e, alpha;
}Variant;

Lab choise_lab(); 
void scan_choise(Lab* laba);

#endif
