class prime{
public static void main(String args[]){
int n=10;
int c=0;
for(int i=2;i*i<=n;i++){
 if(n%i==0){
if(c==0){
	System.out.print(" "+i);
	c=1;
	}
	if(c==1){
	c=0;
	}
}
   

}
}
}
