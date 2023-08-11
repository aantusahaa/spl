PROGRAM ADDER_WITH_IF
    JSUM=0
    I=1
    10  JSUM=JSUM+I
        I=I+1
        IF(I.LE.100) GOTO 10
    PRINT*,JSUM
    STOP
    END

