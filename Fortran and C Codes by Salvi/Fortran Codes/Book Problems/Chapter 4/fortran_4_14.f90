!FOR 5 STUDENTS
J=5
N=0  !  (STUDENT COUNTER)
K=0   !(SCORES>=90 COUNTER)
PRINT*,'GIVE SCORES'

DO  I=1,J
    READ*,SCORE
    IF(SCORE.GE.0.0)N=N+1
    IF(SCORE.GE.90.0)K=K+1
END DO

PRINT*,'STUDENTS APPEARED:',N
PRINT*,'STUDENTS GOT >=90',K
STOP
END PROGRAM