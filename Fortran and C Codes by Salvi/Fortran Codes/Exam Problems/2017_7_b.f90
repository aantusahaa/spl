INTEGER B, ZERO,POSITIVE
DIMENSION B(5,10)
NEGATIVE=0
ZERO=0
POSITIVE=0
DO I=1,5
    DO J=1,10
        B(I,J)=I**I-J-I*J
    END DO
END DO

DO I=1,5
    DO J=1,10
        IF(B(I,J).LT.0)NEGATIVE=NEGATIVE+1
        IF(B(I,J).EQ.0)ZERO=ZERO+1
        IF(B(I,J).GT.0)POSITIVE=POSITIVE+1
    END DO
END DO

PRINT*,"NUMBERS LESS THAN 0:",NEGATIVE
PRINT*,"NUMBERS EQUAL TO 0:",ZERO
PRINT*,"NUMBERS GREATER THAN 0:",POSITIVE

STOP
END PROGRAM