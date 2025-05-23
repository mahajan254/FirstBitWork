//print fibonacci numbers up to n ;
#include<stdio.h>
void fibbonacci(){
  int num;
    int first=0;
    int second = 1;
   int temp;

    printf("Enter the number of terms: ");
    scanf("%d", &num);

   

    for(int i=0;i<=num;i++){
      printf(" %d ", first);
      temp = first + second;
      first = second;
      second = temp;
    }
}
int main(){
    
  fibbonacci();

    

}