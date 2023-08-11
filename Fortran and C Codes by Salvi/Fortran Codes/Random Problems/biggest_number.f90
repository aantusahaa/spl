PROGRAM LAR1_LAR2
    INTEGER A,B,X
    I=2
    PRINT*,"HOW MANY NUMBERS TO COMPARE?"
    READ*,N
    PRINT*,"GIVE THE VALUES!"
    READ*, A, B 
    LAR1=A 
    LAR2=B

    30  IF (LAR1.GE.LAR2) GOTO 20
        LAR=LAR1
        LAR1=LAR2
        LAR2=LAR

    20  I=I+1
        IF (I.GT.N) GOTO 40
        READ*, X
        IF (LAR2.GE.X) GOTO 20
        LAR2=X
        GOTO 30
    
    40  PRINT*,"LARGEST NUMBER IS: ", LAR1
        PRINT*,"SECOND LARGEST NUMBER IS: ", LAR2
        STOP
    END PROGRAM