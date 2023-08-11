PROGRAM MULTIPLESOF3
    I=1
    J=3
    10  PRINT*,I
    11  I=I+1
        IF(I.LT.J)GOTO 10
        J=J+3
        IF(I.LT.20)GOTO 11
        STOP
END PROGRAM        