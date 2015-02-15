/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:05:11 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /usr/libexec/coreduetd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface CDDConfig : NSObject {

	char _verbose;
	int _writeRecordModulo;
	float _minBatteryDelta;
	int _maxQueryCacheItems;
	int _maxQueryCacheLeeway;
	int _maxDBentrySeconds;
	int _cullingTimerPeriodSecs;
	int _cullingTimerLeewaySecs;
	int _batteryMonitorExchangeTimerDelta;
	int _batteryMonitorExchangeBattDelta;
	char _commEnabled;
	int _commMinClientGranularity;
	int _commMaxSendAttempts;
	int _commBlockGranularity;
	int _commBlockCacheAssociativity;
	int _commSyncPeriodTimerLeeway;
	int _commSyncBoundarySeconds;
	int _commSyncPerBoundary;
	int _commSyncDelta;
	int _commSyncLeeway;
	int _commReceiveLeeway;
	int _commRetryTimerShortSeconds;
	int _commRetryTimerLongSeconds;
	int _trendingNTABLESLOTS;
	int _trendingEIDSTRLEN;
	int _trendingCDELTA;
	int _trendingCHIGHTHRESHOLD;
	int _trendingCLOWTHRESHOLD;
	int _trendingCMAX;
	int _trendingCEPSILON;
	int _trendingIECMIN;
	int _trendingCMIN;
	int _trendingTIMERMIN;
	int _trendingILCMAX;
	int _trendingTIMERILCDECAYMULT;
	int _trendingTIMERILCMINMULT;
	int _trendingTIMERILCAVGMULT;
	int _trendingTIMERILCDIV;
	int _trendingTIMERLEEWAYSECS;
	char _admissionAlwaysYes;
	char _admissionOverrideABLE;
	char _admissionOverrideResultABLE;
	char _admissionOverridePPM;
	char _admissionOverrideResultPPM;
	char _admissionOverrideThermal;
	char _admissionOverrideResultThermal;
	char _admissionCheckLogging;
	int _modulationHistoryThreshold;

}

@property (assign) char verbose;                                      //@synthesize verbose=_verbose - In the implementation block
@property (assign) int writeRecordModulo;                             //@synthesize writeRecordModulo=_writeRecordModulo - In the implementation block
@property (assign) float minBatteryDelta;                             //@synthesize minBatteryDelta=_minBatteryDelta - In the implementation block
@property (assign) int maxQueryCacheItems;                            //@synthesize maxQueryCacheItems=_maxQueryCacheItems - In the implementation block
@property (assign) int maxQueryCacheLeeway;                           //@synthesize maxQueryCacheLeeway=_maxQueryCacheLeeway - In the implementation block
@property (assign) int maxDBentrySeconds;                             //@synthesize maxDBentrySeconds=_maxDBentrySeconds - In the implementation block
@property (assign) int cullingTimerPeriodSecs;                        //@synthesize cullingTimerPeriodSecs=_cullingTimerPeriodSecs - In the implementation block
@property (assign) int cullingTimerLeewaySecs;                        //@synthesize cullingTimerLeewaySecs=_cullingTimerLeewaySecs - In the implementation block
@property (assign) int batteryMonitorExchangeTimerDelta;              //@synthesize batteryMonitorExchangeTimerDelta=_batteryMonitorExchangeTimerDelta - In the implementation block
@property (assign) int batteryMonitorExchangeBattDelta;               //@synthesize batteryMonitorExchangeBattDelta=_batteryMonitorExchangeBattDelta - In the implementation block
@property (assign) char commEnabled;                                  //@synthesize commEnabled=_commEnabled - In the implementation block
@property (assign) int commMinClientGranularity;                      //@synthesize commMinClientGranularity=_commMinClientGranularity - In the implementation block
@property (assign) int commMaxSendAttempts;                           //@synthesize commMaxSendAttempts=_commMaxSendAttempts - In the implementation block
@property (assign) int commBlockGranularity;                          //@synthesize commBlockGranularity=_commBlockGranularity - In the implementation block
@property (assign) int commBlockCacheAssociativity;                   //@synthesize commBlockCacheAssociativity=_commBlockCacheAssociativity - In the implementation block
@property (assign) int commSyncPeriodTimerLeeway;                     //@synthesize commSyncPeriodTimerLeeway=_commSyncPeriodTimerLeeway - In the implementation block
@property (assign) int commSyncBoundarySeconds;                       //@synthesize commSyncBoundarySeconds=_commSyncBoundarySeconds - In the implementation block
@property (assign) int commSyncPerBoundary;                           //@synthesize commSyncPerBoundary=_commSyncPerBoundary - In the implementation block
@property (assign) int commSyncDelta;                                 //@synthesize commSyncDelta=_commSyncDelta - In the implementation block
@property (assign) int commSyncLeeway;                                //@synthesize commSyncLeeway=_commSyncLeeway - In the implementation block
@property (assign) int commReceiveLeeway;                             //@synthesize commReceiveLeeway=_commReceiveLeeway - In the implementation block
@property (assign) int commRetryTimerShortSeconds;                    //@synthesize commRetryTimerShortSeconds=_commRetryTimerShortSeconds - In the implementation block
@property (assign) int commRetryTimerLongSeconds;                     //@synthesize commRetryTimerLongSeconds=_commRetryTimerLongSeconds - In the implementation block
@property (assign) int trendingNTABLESLOTS;                           //@synthesize trendingNTABLESLOTS=_trendingNTABLESLOTS - In the implementation block
@property (assign) int trendingEIDSTRLEN;                             //@synthesize trendingEIDSTRLEN=_trendingEIDSTRLEN - In the implementation block
@property (assign) int trendingCDELTA;                                //@synthesize trendingCDELTA=_trendingCDELTA - In the implementation block
@property (assign) int trendingCHIGHTHRESHOLD;                        //@synthesize trendingCHIGHTHRESHOLD=_trendingCHIGHTHRESHOLD - In the implementation block
@property (assign) int trendingCLOWTHRESHOLD;                         //@synthesize trendingCLOWTHRESHOLD=_trendingCLOWTHRESHOLD - In the implementation block
@property (assign) int trendingCMAX;                                  //@synthesize trendingCMAX=_trendingCMAX - In the implementation block
@property (assign) int trendingCEPSILON;                              //@synthesize trendingCEPSILON=_trendingCEPSILON - In the implementation block
@property (assign) int trendingIECMIN;                                //@synthesize trendingIECMIN=_trendingIECMIN - In the implementation block
@property (assign) int trendingCMIN;                                  //@synthesize trendingCMIN=_trendingCMIN - In the implementation block
@property (assign) int trendingTIMERMIN;                              //@synthesize trendingTIMERMIN=_trendingTIMERMIN - In the implementation block
@property (assign) int trendingILCMAX;                                //@synthesize trendingILCMAX=_trendingILCMAX - In the implementation block
@property (assign) int trendingTIMERILCDECAYMULT;                     //@synthesize trendingTIMERILCDECAYMULT=_trendingTIMERILCDECAYMULT - In the implementation block
@property (assign) int trendingTIMERILCMINMULT;                       //@synthesize trendingTIMERILCMINMULT=_trendingTIMERILCMINMULT - In the implementation block
@property (assign) int trendingTIMERILCAVGMULT;                       //@synthesize trendingTIMERILCAVGMULT=_trendingTIMERILCAVGMULT - In the implementation block
@property (assign) int trendingTIMERILCDIV;                           //@synthesize trendingTIMERILCDIV=_trendingTIMERILCDIV - In the implementation block
@property (assign) int trendingTIMERLEEWAYSECS;                       //@synthesize trendingTIMERLEEWAYSECS=_trendingTIMERLEEWAYSECS - In the implementation block
@property (assign) char admissionAlwaysYes;                           //@synthesize admissionAlwaysYes=_admissionAlwaysYes - In the implementation block
@property (assign) char admissionOverrideABLE;                        //@synthesize admissionOverrideABLE=_admissionOverrideABLE - In the implementation block
@property (assign) char admissionOverrideResultABLE;                  //@synthesize admissionOverrideResultABLE=_admissionOverrideResultABLE - In the implementation block
@property (assign) char admissionOverridePPM;                         //@synthesize admissionOverridePPM=_admissionOverridePPM - In the implementation block
@property (assign) char admissionOverrideResultPPM;                   //@synthesize admissionOverrideResultPPM=_admissionOverrideResultPPM - In the implementation block
@property (assign) char admissionOverrideThermal;                     //@synthesize admissionOverrideThermal=_admissionOverrideThermal - In the implementation block
@property (assign) char admissionOverrideResultThermal;               //@synthesize admissionOverrideResultThermal=_admissionOverrideResultThermal - In the implementation block
@property (assign) char admissionCheckLogging;                        //@synthesize admissionCheckLogging=_admissionCheckLogging - In the implementation block
@property (assign) int modulationHistoryThreshold;                    //@synthesize modulationHistoryThreshold=_modulationHistoryThreshold - In the implementation block
-(float)minBatteryDelta;
-(int)modulationHistoryThreshold;
-(int)writeRecordModulo;
-(int)maxQueryCacheItems;
-(int)maxQueryCacheLeeway;
-(int)trendingNTABLESLOTS;
-(char)admissionAlwaysYes;
-(int)maxDBentrySeconds;
-(int)cullingTimerPeriodSecs;
-(int)cullingTimerLeewaySecs;
-(void)setAdmissionAlwaysYes:(char)arg1 ;
-(void)setAdmissionCheckLogging:(char)arg1 ;
-(int)trendingEIDSTRLEN;
-(int)trendingCDELTA;
-(int)trendingCHIGHTHRESHOLD;
-(int)trendingCLOWTHRESHOLD;
-(int)trendingCMAX;
-(int)trendingCEPSILON;
-(int)trendingIECMIN;
-(int)trendingCMIN;
-(int)trendingTIMERMIN;
-(int)trendingILCMAX;
-(int)trendingTIMERILCDECAYMULT;
-(int)trendingTIMERILCMINMULT;
-(int)trendingTIMERILCAVGMULT;
-(int)trendingTIMERILCDIV;
-(int)trendingTIMERLEEWAYSECS;
-(char)admissionOverrideABLE;
-(char)admissionOverrideResultABLE;
-(char)admissionOverridePPM;
-(char)admissionOverrideResultPPM;
-(char)admissionOverrideThermal;
-(char)admissionOverrideResultThermal;
-(char)admissionCheckLogging;
-(void)setWriteRecordModulo:(int)arg1 ;
-(void)setMinBatteryDelta:(float)arg1 ;
-(void)setMaxQueryCacheItems:(int)arg1 ;
-(void)setMaxQueryCacheLeeway:(int)arg1 ;
-(void)setMaxDBentrySeconds:(int)arg1 ;
-(void)setCullingTimerPeriodSecs:(int)arg1 ;
-(void)setCullingTimerLeewaySecs:(int)arg1 ;
-(void)setBatteryMonitorExchangeTimerDelta:(int)arg1 ;
-(void)setBatteryMonitorExchangeBattDelta:(int)arg1 ;
-(void)setCommEnabled:(char)arg1 ;
-(void)setCommMinClientGranularity:(int)arg1 ;
-(void)setCommMaxSendAttempts:(int)arg1 ;
-(void)setCommBlockCacheAssociativity:(int)arg1 ;
-(void)setCommBlockGranularity:(int)arg1 ;
-(void)setCommSyncPeriodTimerLeeway:(int)arg1 ;
-(void)setCommSyncBoundarySeconds:(int)arg1 ;
-(void)setCommSyncPerBoundary:(int)arg1 ;
-(void)setCommSyncDelta:(int)arg1 ;
-(void)setCommSyncLeeway:(int)arg1 ;
-(void)setCommReceiveLeeway:(int)arg1 ;
-(void)setCommRetryTimerShortSeconds:(int)arg1 ;
-(void)setCommRetryTimerLongSeconds:(int)arg1 ;
-(void)setTrendingNTABLESLOTS:(int)arg1 ;
-(void)setTrendingEIDSTRLEN:(int)arg1 ;
-(void)setTrendingCDELTA:(int)arg1 ;
-(void)setTrendingCHIGHTHRESHOLD:(int)arg1 ;
-(void)setTrendingCLOWTHRESHOLD:(int)arg1 ;
-(void)setTrendingCMAX:(int)arg1 ;
-(void)setTrendingCEPSILON:(int)arg1 ;
-(void)setTrendingIECMIN:(int)arg1 ;
-(void)setTrendingCMIN:(int)arg1 ;
-(void)setTrendingTIMERMIN:(int)arg1 ;
-(void)setTrendingILCMAX:(int)arg1 ;
-(void)setTrendingTIMERILCDECAYMULT:(int)arg1 ;
-(void)setTrendingTIMERILCMINMULT:(int)arg1 ;
-(void)setTrendingTIMERILCAVGMULT:(int)arg1 ;
-(void)setTrendingTIMERILCDIV:(int)arg1 ;
-(void)setTrendingTIMERLEEWAYSECS:(int)arg1 ;
-(void)setModulationHistoryThreshold:(int)arg1 ;
-(void)setAdmissionOverrideABLE:(char)arg1 ;
-(void)setAdmissionOverrideResultABLE:(char)arg1 ;
-(void)setAdmissionOverridePPM:(char)arg1 ;
-(void)setAdmissionOverrideResultPPM:(char)arg1 ;
-(void)setAdmissionOverrideThermal:(char)arg1 ;
-(void)setAdmissionOverrideResultThermal:(char)arg1 ;
-(int)batteryMonitorExchangeTimerDelta;
-(int)batteryMonitorExchangeBattDelta;
-(char)commEnabled;
-(int)commMinClientGranularity;
-(int)commMaxSendAttempts;
-(int)commBlockGranularity;
-(int)commBlockCacheAssociativity;
-(int)commSyncPeriodTimerLeeway;
-(int)commSyncBoundarySeconds;
-(int)commSyncPerBoundary;
-(int)commSyncDelta;
-(int)commSyncLeeway;
-(int)commReceiveLeeway;
-(int)commRetryTimerShortSeconds;
-(int)commRetryTimerLongSeconds;
-(char)verbose;
-(void)setVerbose:(char)arg1 ;
@end
