#include<stdio.h>
#include<math.h>

int isIsosceles(double a,double b,double c);
int isRightAngle(double a,double b,double c);
int isEquilateral(double a,double b,double c);

int main(){
	double a,b,c,t;
	scanf("%lf%lf%lf",&a,&b,&c);

if (a > b) { int t = a; a = b; b = t; }
if (a > c) { int t = a; a = c; c = t; }
if (b > c) { int t = b; b = c; c = t; }

if(a+b>c){
	if(isEquilateral(a,b,c)){
	printf("等边三角形");
}else if(isIsosceles(a,b,c)&&isRightAngle(a,b,c)){
	printf("等腰直角三角形");
}else if(isIsosceles(a,b,c)){
	printf("等腰三角形");
}else if(isRightAngle(a,b,c)){
	printf("直角三角形");
}else{
	printf("一般三角形");
}
}else {
	printf("不是三角形");
}
return 0;

}

int isIsosceles(double a,double b,double c){
	return (fabs(a-b) < 1e-6) || (fabs(b-c) < 1e-6) || (fabs(a-c) < 1e-6);
}

int isRightAngle(double a,double b,double c){
	return (fabs(a*a+b*b-c*c)<1e-2);
}

int isEquilateral(double a,double b,double c){
	return (fabs(a-b) <1e-6 &&fabs(b-c)<1e-6);
}
