C     from CRHCO.INC   
C     RCHRES module common
C
C     + + + PARAMETERS + + +
      INCLUDE 'pmxexi.inc'
C
C            CONS section
      COMMON/SCRTCH/HYDRFG,ADFG,CONSFG,HTFG,SEDFG,GQFG,OXFG,NUTFG,
     $              PLKFG,PHFG,ACIDFG,DUMZ,PFLAG,DUMY,PIVL,PYREND,
     $              RCHPFG,UUNITS,IUNITS,OUNITS,PUNIT,MESSU,MSGFL,
     $              RCHNO,RCHID,DELT,DELT60,DELTS,NDAY,NDAYS,LKFG,
     $              NEXITS,HRFG,DAYFG,STFG,EDAYFG,EMONFG,EPYRFG,YR,
     $              MON,DAY,HR,MIN,IVL,IVL1,PIVLNO,NXTMON,SPAFP,
     $              SPAKND,SPIVL,SPOPNO,DUMGEN,DUM1,PREC,DUM2,PRECFP,
     $              DUM3,VOL,VOLS,DUM4,SAREA,DUM5,VOLFP,DUM6,SAFP,
     $              DUM7,SROVOL,EROVOL,SOVOL,EOVOL,CNIF,ICNFP,COAFFP,
     $              COACFP,NCONS,COADFG,CONID,CQTYID,CCONCD,CCONV,
     $              COAFXM,COACNM,CNWCNT,CON,CNST,CNFP,CNCF1,ROCNFP,
     $              CNCF2,OCNFP,CNCF3,CNCF4,COADDX,COADWX,DUMRCH
      INTEGER       HYDRFG,ADFG,CONSFG,HTFG,SEDFG,GQFG,OXFG,NUTFG,
     $              PLKFG,PHFG,ACIDFG,DUMZ(2),PFLAG(11),DUMY(1),PIVL,
     $              PYREND,RCHPFG,UUNITS,IUNITS,OUNITS,PUNIT(2),MESSU,
     $              MSGFL,RCHNO,RCHID(5),NDAY(12),NDAYS,LKFG,NEXITS,
     $              HRFG,DAYFG,STFG,EDAYFG,EMONFG,EPYRFG,YR,MON,DAY,
     $              HR,MIN,IVL,IVL1,PIVLNO,NXTMON,SPAFP,SPAKND,SPIVL,
     $              SPOPNO,DUMGEN(15),PRECFP,VOLFP,SAFP,ICNFP(10),
     $              COAFFP(10),COACFP(10),NCONS,COADFG(20),CNWCNT(10),
     $              CNFP(10),ROCNFP(10),OCNFP(MXEXIT,10),COADDX(10),
     $              COADWX(10)
      REAL          DELT,DELT60,DELTS,PREC,SAREA,SROVOL,EROVOL,
     $              SOVOL(MXEXIT),EOVOL(MXEXIT),CNIF(10,5),CONID(5,10),
     $              CQTYID(2,10),CCONCD(2,10),CCONV(10),COAFXM(12,10),
     $              COACNM(12,10),CNCF1(10,5),CNCF2(MXEXIT,10,5),
     $              CNCF3(10,5),CNCF4(10,5)
      DOUBLE PRECISION  VOL,VOLS,CON(10),CNST(10,5)
      INTEGER       DUM1(505),DUM2(102),DUM3(2146),DUM4(713),
     $              DUM5(107),DUM6(605),DUM7(4769),DUMRCH(7878)
C
      EQUIVALENCE   (ASVEC,HYDRFG),(UNIT,UUNITS),(TIMFG,HRFG),
     $              (DATIM,YR),(ICON,CNIF(1,1)),(RCON,CNST(1,1)),
     $              (ROCON,CNCF1(1,1)),(OCON,CNCF2(1,1,1)),
     $              (COADDR,CNCF3(1,1)),(COADWT,CNCF4(1,1))
      INTEGER       ASVEC(11),UNIT(5),TIMFG(6),DATIM(5)
      REAL          ICON(10),ROCON(10),OCON(MXEXIT,10),COADDR(10),
     $              COADWT(10)
      DOUBLE PRECISION  RCON(10)
C     end byte:  72000 word:18000
