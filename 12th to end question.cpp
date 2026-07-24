

#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main(){
	
	
//12  palindrome  

//	int num, Reverse  , Reminder , sum = 0,Palindromcheck ; 
	
//		
//		
//	printf("Enter An Number for cheack palindrom : ");
//	scanf("%d", &num);
//    Palindromcheck = num; //get number for use after ;
//	 
//	//reverse formula 
//	while(num){ 
//		sum = sum * 10 + num % 10 ;
//		num /= 10 ;
//	}
//	printf("%d " , sum);
//	
//	//Palindrome check
//	if(sum == Palindromcheck){
//		printf("Its palindrom");
//	}else{
//		printf("its Not Palindrom");
//	}







//
////13 Armstrong Number; 
//
//int number, 
//count = 0,
//Reuse,GenNum, 
//ModNum,
//ColectNumber = 0,
//displayNum;
//
//
//
//printf("Enter Your Digit : "); 
//scanf("%d", &number);
//Reuse = number;
//displayNum = number ;
//
////getting Lenght << ; 
//while(Reuse){
//	Reuse /= 10; 
//	count++;
//}
//
//while(number){//this will do untill Number == 0 ;
//	GenNum = number % 10;// 1st round. 8 balance
//	ModNum = (int)pow(GenNum , count); //8 ^ 4 bcz of 4 digit in 1238;
//	ColectNumber += ModNum ; 
//	
//	number /= 10; // this will remove last number thats mean 123.8 this is remove (8) 
//}
//
//
//if(ColectNumber == displayNum){ 
//	printf("%d It is Armstrong Number", displayNum);
//}else{
//	printf("%d Not Armstrong Number", displayNum);
//}
//
//
//
//
//}





//
//
//   //14 Prime Number 
//   
//   int prime = true , number; 
//   printf("Enter your Number : ");
//   scanf("%d" , &number);
//    
//   for(int i = 2; i < number ; i++){
//  
//  if(number%i == 0){
//  	prime = false;
//  	break;
//  }
//
//}
//if(prime == true){
//	printf("its a prime number");
//}else{
//	printf("its not prime ");
//}
//}
//
//	



//prime number chcker for 1-100 number's ;

//int k , i, flag = true; 
//printf("    PRIME Number Check   1 To 100 \n");
//printf("-------------------------------------\n \n");
//
// for(k = 2 ; k <= 100 ; k++){
// 	flag = true;
//	 for(i = 2; i < k ; i++){
// 		
// 	       	if(k%i == 0){
//			 flag = false;
// 		
//		 	break;
//		 }
//		 
//		 }	
//		  if(flag == true){
//		 	printf(" %d = its a prime number \n", k);
//		 	printf("-------------------------------------\n ");
//		 	
//		 
//	 }
// }}



//
//////fibonacci number ; 
//int fibno = 0 , input , fnum , lnum,next; 
//fnum = 0;
//lnum = 1;
//next = 0;
// 
// printf("Enter yout Number : ");
// scanf("%d", &input);
// 
// 
//    
//    for(int i = 0 ; i <= input ; i++){
//    	next = fnum + lnum ;
//    	fnum = lnum ;
//    	lnum = next ;
//    	printf("%d,  ", fnum  );
//    	if( input == 0 || next == input ){
//    		fibno = 1 ;
//    		break;
//		}else if(next > input){
//			break;
//		}
//	
//	}
//		if(fibno == 1){
//			printf(" \n \n ");
//    		printf("%d It is an fibonocci number ",next, input);
//		}else{
//				printf(" \n \n ");
//			printf("%d it's not an a fibonacci number    ",next , input);
//		}
//	}


//17 question 

//int i,a,x; 
//x=2;
// 
// for( i=0; i<5; i++){
// 	for(a = 1 ; a < x ; a++){
// 		printf("%d" , a);
//	 }printf("\n");x++;
// }



//18th pattern question 
//
//int i,j,k = 1;;
//
//  for(i = 0 ; i < 5; i++){
//  	for(k = 0; k <= i; k++){
//  		printf("*");
//	  }printf("\n");
//  }
//}

//19th pattern question 
//
//int i,k ;
//
//for(k = 5 ; k > 0 ; k--){
//	for(i = 0 ; i < k ; i++){
//		printf("*");
//	}printf("\n");
//}
//}
//
//	


//20 th Number Guessing Question THE END ;

//int number = 25,guessNumber, count = 1 ;
// printf("What is secret number : ");
// scanf("%d", &guessNumber);
// 
//while(1){
//
//	if(guessNumber == number){
//		printf("    YOU WON ! \n ");
//		printf("your total Attempt = %d", 	count);
//		break;
//	}else if(guessNumber > number){
//		printf("your number is too high \n");
//	
//		
//	}else{
//		printf("your number is too low \n");
//	}
//		printf("RETRY : ");
//		scanf("%d", &guessNumber);
//		count++;
//}
//}



	

