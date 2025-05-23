//print fibonacci numbers up to n ;
#include<stdio.h>
void fibonacci( int num){
    
    int first=0;
    int second = 1;
   int temp;

   for(int i=0;i<=num;i++){
      printf(" %d ", first);
      temp = first + second;
      first = second;
      second = temp;
    }
    // printf("\n");
    
  
}
int main(){
  int num;
  printf("Enter the number of terms: ");
  scanf("%d", &num);

  fibonacci(num);
}