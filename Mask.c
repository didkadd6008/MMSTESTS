#include<stdio.h>
#include <stdarg.h>

int checkBit(unsigned num,unsigned *sum){
    while(num != 0){
		if(num & 1 == 1){ 
			sum++;
		}
		num=num>>1;
	}
    
}



unsigned bitsNCount(unsigned bitscnt, unsigned count, ...){
    unsigned counter;
    va_list args;
    va_start(args,count);
    for (int i = 0; i < count; i++)
    {
        unsigned sum;
      unsigned num = va_arg(args,int);
      checkBit(num,&sum);
        if (sum == bitscnt)
        {
            counter++;
        }
        
    }
    va_end(args);
    return counter;
}


int main(){
    unsigned count,bitscnt;

    scanf("%u %u",&count,&bitscnt);

    if (count > 0)
    {
       unsigned result = bitsNCount(count,bitscnt);
       printf("%u",result);
    }else{
        printf("Invalid input!");
        return 1;
    }
    
return 0;
}