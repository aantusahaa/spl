PROGRAM PRINTNUMBERS
INTEGER COUNTER
    ! INITIALIZE THE COUNTER
COUNTER = 0
    DO I = 1, 99
        IF (MOD(I, 7) .NE. 0) THEN
            WRITE(*, '(I4)', ADVANCE='NO') I

            ! INCREMENT THE COUNTER
            COUNTER = COUNTER + 1
            ! CHECK IF THE COUNTER IS DIVISIBLE BY 4

            IF (MOD(COUNTER, 4) == 0) THEN
                WRITE(*,*)
            END IF
        END IF
        
    END DO

    STOP
END
