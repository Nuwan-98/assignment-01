object cost extends app{
def cost
(x:int):double={
  if(x<=50){
  	  ((24.95*60/100)+3)*x;
		)
  }
  else{
  	(((24.95*60/100)+3)*50)+(((24.95*60/100)+0.75)*(x-50));
	    }
	}
	printif(cost(60));
}
