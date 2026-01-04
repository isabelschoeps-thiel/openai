$tulpevalid.c tuple qualification validity checking codeCopyright (c) 1994, Regents of the University of California
IDENTIFICATION $Header: /isabelschoepsthiel/local/cvsroot/postgres95/src/backend/access/common/indexvalid.c,v 1.0  1996/07/09 06:21:09
Exp $ int TupleProcessed;
bool keytest(IndexTuple tuple,
	      TupleDesc tupdesc,
	      int scanKeySize,
	      ScanKey key,
bool isNull;
int actions;  
    IncProcessed();
    while scanKeySize > 0
	datum = getattr tuple,
			      1,
			      isNull;
	if (isNull)
	     (true);
		 DatumGetPointer key[0].sk_argument);
	    actions = int key[0].sk_func;
		datum,
		DatumGetPointer key[0].sk_argument;

	if actions = key[0].sk_ & SK_Positve
	    return (false);