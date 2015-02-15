/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:59 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CoreWiFi.framework/Versions/A/CoreWiFi
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray;

@interface CoreWiFiScanManager : NSObject {

	unsigned long long activeDwellTime;
	unsigned long long passiveDwellTime;
	unsigned long long idleRestTime;
	unsigned long long idleRestMultiplier;
	unsigned long long activeRestTime;
	unsigned long long activeRestMultiplier;
	unsigned long long scanCycleIdleRestTime;
	unsigned long long scanCycleIdleRestMultiplier;
	unsigned long long scanCycleActiveRestTime;
	unsigned long long scanCycleActiveRestMultiplier;
	unsigned long long maximumRestTime;
	unsigned long long maximumScanCycles;
	unsigned long long numProbeRequestsPerBundle;
	NSMutableArray* ssidsOfInterest;

}

@property (assign,nonatomic) unsigned long long activeDwellTime; 
@property (assign,nonatomic) unsigned long long passiveDwellTime; 
@property (assign,nonatomic) unsigned long long idleRestTime; 
@property (assign,nonatomic) unsigned long long idleRestMultiplier; 
@property (assign,nonatomic) unsigned long long activeRestTime; 
@property (assign,nonatomic) unsigned long long activeRestMultiplier; 
@property (assign,nonatomic) unsigned long long scanCycleIdleRestTime; 
@property (assign,nonatomic) unsigned long long scanCycleIdleRestMultiplier; 
@property (assign,nonatomic) unsigned long long scanCycleActiveRestTime; 
@property (assign,nonatomic) unsigned long long scanCycleActiveRestMultiplier; 
@property (assign,nonatomic) unsigned long long maximumRestTime; 
@property (assign,nonatomic) unsigned long long maximumScanCycles; 
@property (assign,nonatomic) unsigned long long numProbeRequestsPerBundle; 
@property (nonatomic,retain) NSMutableArray * ssidsOfInterest; 
+(char)stopOnInterface:(id)arg1 error:(id*)arg2 ;
-(id)initWithSkeleton:(id)arg1 ;
-(char)setSSIDsWithOptionString:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)activeDwellTime;
-(void)setActiveDwellTime:(unsigned long long)arg1 ;
-(unsigned long long)passiveDwellTime;
-(void)setPassiveDwellTime:(unsigned long long)arg1 ;
-(unsigned long long)idleRestTime;
-(void)setIdleRestTime:(unsigned long long)arg1 ;
-(unsigned long long)idleRestMultiplier;
-(void)setIdleRestMultiplier:(unsigned long long)arg1 ;
-(unsigned long long)activeRestTime;
-(void)setActiveRestTime:(unsigned long long)arg1 ;
-(unsigned long long)activeRestMultiplier;
-(void)setActiveRestMultiplier:(unsigned long long)arg1 ;
-(unsigned long long)scanCycleIdleRestTime;
-(void)setScanCycleIdleRestTime:(unsigned long long)arg1 ;
-(unsigned long long)scanCycleIdleRestMultiplier;
-(void)setScanCycleIdleRestMultiplier:(unsigned long long)arg1 ;
-(unsigned long long)scanCycleActiveRestTime;
-(void)setScanCycleActiveRestTime:(unsigned long long)arg1 ;
-(unsigned long long)scanCycleActiveRestMultiplier;
-(void)setScanCycleActiveRestMultiplier:(unsigned long long)arg1 ;
-(unsigned long long)maximumRestTime;
-(void)setMaximumRestTime:(unsigned long long)arg1 ;
-(unsigned long long)maximumScanCycles;
-(void)setMaximumScanCycles:(unsigned long long)arg1 ;
-(unsigned long long)numProbeRequestsPerBundle;
-(void)setNumProbeRequestsPerBundle:(unsigned long long)arg1 ;
-(NSMutableArray *)ssidsOfInterest;
-(void)setSsidsOfInterest:(NSMutableArray *)arg1 ;
-(char)startOnInterface:(id)arg1 error:(id*)arg2 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)skeleton;
@end

