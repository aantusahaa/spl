PROGRAM DivisibleByThree
    INTEGER COUNT

    COUNT = 0

    DO I = 1, 300
       IF (MOD(I, 3) .NE. 0) THEN
          WRITE(*, '(I4)', ADVANCE='NO') I
          COUNT= COUNT + 1

          IF (MOD(COUNT, 3) .EQ. 0) THEN
             WRITE(*, *)    ! New line after printing three numbers
          END IF
       END IF
    END DO

    STOP
    END
