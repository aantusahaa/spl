DIMENSION SCORE(25)
K=0
SUM=0.0
        PRINT*,"WHAT ARE THE SCORES?"
        DO I=1,25
            READ*,SCORE(I)
            PRINT*,SCORE(I)
            IF(SCORE(I).LT.0.0)GOTO 100
            K=K+1
            SUM=SUM+SCORE(I)
    100 END DO
        AVE=SUM/K
        PRINT*,"AVERAGE MARK IS",AVE
        PRINT*,"STUDENT ATTENDED IN EXAM:",K
        STOP
    END PROGRAM
