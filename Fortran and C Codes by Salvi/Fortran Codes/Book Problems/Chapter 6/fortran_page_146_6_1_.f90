INTEGER A,XLAR
DIMENSION A(100)
L=1
PRINT*,"HOW MANY NUMBERS?"
READ*,N
DO  200 I=1,N
        READ*,A(I)
        IF(A(I).LE.A(L))GOTO 200
        L=I
    200 CONTINUE
    XLAR=A(L)
PRINT*,"LARGEST NUMBER IS",XLAR 

STOP
END PROGRAM