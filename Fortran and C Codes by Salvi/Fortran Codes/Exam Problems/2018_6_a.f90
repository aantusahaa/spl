PROGRAM WITHOUT_7
    N=7
    I=1
    10  IF(MOD(I,N).NE.0)PRINT*,I
        I=I+2
        IF(I.LE.99)GOTO 10
    STOP
END PROGRAM