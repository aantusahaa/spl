INTEGER YEAR
PRINCIPAL=0
AMOUNT=500
RATE=0.07
READ*,YEAR
DO I=1,YEAR
    IF(MOD(I,2).NE.0)AMOUNT=AMOUNT+PRINCIPAL
    AMOUNT=AMOUNT+AMOUNT*RATE
    PRINT*,I,AMOUNT
    PRINCIPAL=500
END DO
STOP
END