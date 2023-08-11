PRINT*, "Enter the values of A1, B1, C1, A2, B2, C2"
READ*, A1, B1, C1, A2, B2,C2

D = A1*B2 - A2*B1
IF (D.EQ.0) GO TO 100
IF(D.NE.0)GO TO 200

200 DX=C1*B2-C2*B1
    DY=A1*C2-A2*C1
    X=DX/D
    Y=DY/D
    PRINT*,X,Y
    STOP

100 PRINT *, "Solution does not exist"
    STOP

END PROGRAM


