PRINT*,"Enter values of A, B, C"
READ*, A, B, C

IF (A.EQ. 0) GO TO 100

D= B**2-4.0*A*C

IF (D.EQ.0) GO TO 200
IF (D.GT.O) GO TO 300
IF (D.LT.O) GO TO 400

200     X1= -B/ (2.0*A)
        X2= -B/ (2.0*A)
        PRINT*, "TWO EQUAL ROOTS ARE ", X1, X2
        STOP

300     X1 = (-B+SQRT (D)) / (2.0*A)
        X2 = (-B-SQRT (D)) / (2.0*A)
        PRINT*, "TWO UNEQUAL REAL ROOTS ARE ", X1, X2
        STOP

400     X1= (-B+SQRT (-D) ) / (2.0*A)
        X2=(-B-SQRT (-D)) / (2.0*A)
        PRINT*, "TWO IMAGINARY ROOTS ARE",X1, x2
        STOP

100 PRINT*, "NOT A QUADRATIC EQUATION/INVALID"
    STOP

END
