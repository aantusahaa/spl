SUBROUTINE IFACT(A,FACT)
    INTEGER A,FACT
    FACT=1
    IF(A.EQ.0)RETURN
    DO I=1,A
        FACT=FACT*I
    END DO
RETURN
END

PROGRAM SUBROUTINE_FACTORIAL
    INTEGER X,FACTORIAL
    PRINT*,"INPUT NUMBER FOR FACTORIAL OF IT:"
    READ*,X
    CALL IFACT(X,FACTORIAL)
    PRINT*,"FACTORIAL IS:",FACTORIAL
STOP
END