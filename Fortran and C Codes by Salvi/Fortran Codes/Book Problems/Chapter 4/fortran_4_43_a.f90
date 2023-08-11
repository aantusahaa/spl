PROGRAM DIVISIBLE_BY_7
    REAL::I,N  
    N=7.0  
    I=1.0

100     IF(MOD(I,N).EQ.0.0) WRITE(*,'(F10.0)')I
        I=I+1.0
        IF(I.LT.100.0) GOTO 100

    STOP
END PROGRAM