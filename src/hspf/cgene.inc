C     from CGENE.INC   
C     GENER module common
      COMMON/SCRTCH/MESSU,MSGFL,GENRNO,DELT,NDAY,YR,MON,DAY,HR,MIN,
     $              NDAYS,SPAFP,SPAKND,SPIVL,SPOPNO,DUMA,UUNITS,
     $              OPCODE,NTERMS,K,SUM,IVL,IVL1,DSFP1,DSFP2,DSFP3,
     $              DUMGEN
      INTEGER       MESSU,MSGFL,GENRNO,NDAY(12),YR,MON,DAY,HR,MIN,
     $              NDAYS,SPAFP,SPAKND,SPIVL,SPOPNO,DUMA(2),UUNITS,
     $              OPCODE,NTERMS,IVL,IVL1,DSFP1,DSFP2,DSFP3
      REAL          DELT,K(7),SUM
      INTEGER       DUMGEN(6956)
C
      EQUIVALENCE   (ASVEC,MESSU),(DATIM,YR)
      INTEGER       ASVEC(1),DATIM(5)
C     end byte:  28000 word: 7000
