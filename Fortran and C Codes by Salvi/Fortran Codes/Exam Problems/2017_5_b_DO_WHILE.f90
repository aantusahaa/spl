PRINT*,"PUT 3 NUMBERS TO COMPARE:"
READ*,J
LAR=J
I=2
DO 10 WHILE(I.LE.3)
    READ*,NUM
    IF(NUM.GT.LAR)LAR=NUM
    I=I+1
10 CONTINUE
PRINT*,"LARGEST OF 3 NUMBERS:",LAR
STOP
END


