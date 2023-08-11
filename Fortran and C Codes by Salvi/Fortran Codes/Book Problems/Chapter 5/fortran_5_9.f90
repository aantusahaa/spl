PROGRAM SCORE_WITH_DO_LOOP

DO 100  I=1,25 !INITIALIZE STUDENT COUNTER
        PRINT*,"PUT ID NUMBER"
        READ*,ID
        SUM=0.0
        DO  200  K=1,3 !INITIALIZE SCORE COUNTER
                 PRINT*,"GIVE NO.",K,"SCORE:"
                 READ*,SCORE
                 SUM=SUM+SCORE
        200  CONTINUE

        AVE=SUM/3.0
        PRINT*,"ID:",ID,"AVERAGE:",AVE
100 CONTINUE

    STOP
END PROGRAM
