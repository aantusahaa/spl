PROGRAM PRINT_MULTIPLE_TIMES

    !A PROGRAM WHICH PRINTS 20-20 TIMES, 19-19 TIMES AND SO ON..
    DO 10   I=20,1,-1
            DO 20   J=1,I
                    PRINT*,I
            20 CONTINUE 
    10 CONTINUE
    STOP
END PROGRAM