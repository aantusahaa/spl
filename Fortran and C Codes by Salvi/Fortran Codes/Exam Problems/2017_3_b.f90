WRITE(*,10)
10 FORMAT(7X,"X",7X,"Y",10X,"Z")
DO I=1,21
    X=-5+(I-1)*0.5
    DO J=1,21    
        Y=-5+(J-1)*0.5
        Z=X**3-3.0*X**2*Y+2.0*X*Y-2.0*Y**3
        WRITE(*,20)X,Y,Z
        20 FORMAT(2X,2(F7.2),2X,F12.4)
    END DO
END DO
STOP
END