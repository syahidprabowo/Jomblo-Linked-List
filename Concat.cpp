void concat(List L1, List L2, List *L3){
	*L3 = L1;
	address P = First(*L3);
	
	while(Next(P)!=NULL){
		P = Next(P);
	}
	Next(P) = First(L2);
}

infotype sumGanjil(List L){
	address P = First(L);
	infotype sum = 0;
	
	while(P!=Nil){
		if(Info(P)%2==1){
			sum = sum + Info(P);
		}
		P = Next(P);
	}
	
	return sum;
}
