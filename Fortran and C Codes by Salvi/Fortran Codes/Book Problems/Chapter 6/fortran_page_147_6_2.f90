INTEGER SCORE
DIMENSION SCORE(100,4), AVE(100)

SUM=0.0
PRINT*,"HOW MANY STUDENTS FOR 4 TESTS?"
READ*,N
DO 100 I=1,N
    PRINT*,"GIVE NUMBER OF",I,"TH STUDENT"
    DO 200 K=1,4
        READ*,SCORE(I,K)
        SUM=SUM+SCORE(I,K)
    200 CONTINUE
    AVE(I)=SUM/4.0
    PRINT*,"AVERAGE OF",I,"TH STUDENT IS",AVE(I)
100 CONTINUE

STOP
END PROGRAM