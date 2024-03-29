C    FROM CTSIN.COM
C    INSTRUCTION SECTION OF TSS OSV:
C     SPECIAL COMMON SCRTCH
      COMMON/SCRTCH/ AMODE,NCOMPS,VOLCOD,FILE,DELTAT,FREC,LREC,
     1 COMPR,TOTCOM,FMTCLS,BEGYR,TENDR,LGAP,TGAP,GAPVAL,LTRNFG,
     2 VOTSB,VOLFRM,VOTFRM,BCWBTI,BCWNOV,INPSTR,ENDF,YEAR,MO,DAY,
     3 LPYRFG,NREM,TYREND,FRMTIM,TZERO,TLAST,UCNT,ZCNT,VOPADR,
     4 OFFSET,    STKIND,    STTRAN,    INMODE,    A,    B,
     5 PVAR,    INPDAT
      INTEGER        AMODE,NCOMPS,VOLCOD,FILE,DELTAT,FREC,LREC,
     1 COMPR,TOTCOM,FMTCLS,BEGYR,TENDR,LGAP,TGAP,       LTRNFG,
     2 VOTSB,VOLFRM,VOTFRM,BCWBTI,BCWNOV,INPSTR,ENDF,YEAR,MO,DAY,
     3 LPYRFG,NREM,TYREND,FRMTIM,TZERO,TLAST,UCNT,ZCNT,VOPADR(20),
     4 OFFSET(20),STKIND(20),STTRAN(20),INMODE(20),
     5          INPDAT(6)
      REAL
     1                                           GAPVAL,
     4                                             A(20),B(20),
     5 PVAR(20)
C
      INTEGER   BCW,CRDNO,CRDSEQ(3),INSTR(200),OLDOFF,ASVEC(2),
     1          QLFG,AGGRFG,CTYPI(2)
      EQUIVALENCE (BCWBTI,BCW),(AMODE,INSTR(1)),(CTYPI(1),FREC),
     1            (VOTSB,CRDSEQ(1)),(TZERO,OLDOFF),(UCNT,CRDNO),
     2            (AMODE,ASVEC(1)),(COMPR,QLFG),(LPYRFG,AGGRFG)
C    END BYTE 800
