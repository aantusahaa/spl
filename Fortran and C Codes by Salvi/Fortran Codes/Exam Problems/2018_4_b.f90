REAL MULT
PRINT*,"UP TO WHICH TERM?"
READ*,N
IF(N.LT.10)GOTO 30
MULT=1.0

        DO 10 I=1,N
        MULT=MULT*((2.0*I-1)/I**2)
        10 CONTINUE
    
WRITE(*,20)MULT
20 FORMAT(F10.6)
STOP

30 PRINT*,"INVALID N"

STOP
END

