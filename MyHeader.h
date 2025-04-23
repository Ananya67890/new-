//palindrome
int palindrome(int number)
{
	int reversed =0, original=number;
	while(number >0){
		reversed=reversed*10+(number%10);
		number/=10;
	}

	return original == reversed ;

}


//perfect
int isPerfect(int n)
{
	int i,sum=0;
	for(i=1;i<n;i++){
		if(n%i==0){
			sum+=i;
		}
	}
	return(sum==n)
}


//SimpleInterest
float calculateSimpleInterest(int p,int r,int t){
	return(p*r*t)/100
}



