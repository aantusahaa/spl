PRINT*,"INPUT SCORES:"
READ*,T1
SML=T1
SUM=T1
DO I=2,7
    READ*,NUM
    SUM=SUM+NUM
    IF(NUM.LE.SML)SML=NUM
END DO
AVE=(SUM-SML)/6.0
PRINT*,"LOWEST SCORE:",SML
PRINT*,"AVERAGE:",AVE
STOP
END