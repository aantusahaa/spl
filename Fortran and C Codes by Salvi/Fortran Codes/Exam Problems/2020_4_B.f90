INTEGER PRIME,COUNT

PRIME=0 !CALCULATES HOW MANY PRIME
COUNT=0! CALCULATES IF A PARTICULAR NUMBER IS PRIME
DO I=1,100
    DO J=1,I
        IF(MOD(I,J).EQ.0)COUNT=COUNT+1
    END DO
    IF(COUNT.EQ.2)PRIME=PRIME+1
    COUNT=0 ! RESETTING THE COUNT VARIABLE TO 0
END DO

PRINT*,"PRIMES UP TO 100:",PRIME
STOP
END PROGRAM

