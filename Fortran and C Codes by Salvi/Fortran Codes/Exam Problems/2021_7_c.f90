PROGRAM MATRIX_TRACE
INTEGER A
DIMENSION A(4,4)
    PRINT*,"INPUT THE ELEMENTS OF THE MATRIX A"
    DO   I=1,4
        DO  J=1,4
            READ*,A(I,J)
        END DO
    END DO

    ISUM1=0
    DO   I=1,4 !TRACE
        DO  J=1,4
            IF(I.EQ.J)THEN 
                ISUM1=ISUM1+A(I,J)
            END IF
        END DO
    END DO

    ISUM2=0
    DO   I=1,4 !ABOVE MAIN DIAGONAL
        DO  J=1,4
            IF(I.LT.J)THEN 
                ISUM2=ISUM2+A(I,J)
            END IF
        END DO
    END DO

    ISUM3=0
    DO   I=1,4 !BELOW MAIN DIAGONAL
        DO  J=1,4
            IF(I.GT.J)THEN 
                ISUM3=ISUM3+A(I,J)
            END IF
        END DO
    END DO

    PRINT*,"TRACE IS:",ISUM1
    PRINT*,"ABOVE MAIN DIAGONAL IS:",ISUM2
    PRINT*,"BELOW MAIN DIAGONAL IS:",ISUM3

    STOP
END PROGRAM

