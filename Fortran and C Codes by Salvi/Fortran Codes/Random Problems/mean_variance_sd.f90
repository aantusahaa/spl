PROGRAM VARIANCE_MEAN_SD
    REAL MEAN
    PRINT*,'HOW MANY ITEMS?'
    READ*,N
    PRINT*,'WHAT ARE THE ITEMS?'
    SUM=0.0
    SUMQ=0.0

    I=1
10  READ*,X
    SUM=SUM+X
    SUMQ=SUMQ+X**2
    I=I+1
    IF(I.LE.N) GOTO 10
    MEAN=SUM/N
    VAR=(SUMQ/N)-MEAN**2
    SD=SQRT(VAR)
    PRINT*,MEAN,VAR,SD
    STOP
END PROGRAM