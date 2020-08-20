#include<stdio.h>
#include<math.h>
int main(){
	
	double a,b,c,d;
	
	scanf("%lf %lf %lf",&a,&b,&c);
	d=(b*b-4*a*c);
	
	if(d>0){
		double root1=(-b+sqrt(d))/(2*a),root2=(-b-sqrt(d))/(2*a);;
		printf("identical rootts :\n%lf %lf",root1,root2);
	}
	if(d==0){
		double root=(-b)/(2*a);
		printf("same roots:\n%d",root);
	}
	else{
		double real=-b/(2*a);
		double img= sqrt(-d)/(2*a);
		printf("imaginary roots: \n%lf+%lf and %lf-%lf",real,img,real,img );
	}	
}
