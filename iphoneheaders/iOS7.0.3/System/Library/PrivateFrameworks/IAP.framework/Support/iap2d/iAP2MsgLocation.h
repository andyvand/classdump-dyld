/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:41:45 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/IAP.framework/Support/iap2d
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSLock, NSMutableArray, iAP2EAManager, iAP2Connection;

@interface iAP2MsgLocation : NSObject {

	NSLock* pNMEALock;
	NSMutableArray* pNMEASentArray;
	NSMutableArray* pNMEAFilterList;
	iAP2EAManager* pkEAManager;
	iAP2Connection* pkConnection;
	unsigned minNMEAIntervalMs;
	bool bLocationStarted;

}

@property (assign,nonatomic) bool bLocationStarted; 
@property (assign,nonatomic) unsigned minNMEAIntervalMs; 
+(int)startLocationUpdate:(id)arg1 ;
+(int)stopLocationUpdate:(id)arg1 ;
-(unsigned)countNMEASentences;
-(id)dequeueNMEASentence;
-(bool)bLocationStarted;
-(void)enqueueNMEASentence:(id)arg1 ;
-(unsigned)minNMEAIntervalMs;
-(id)getNMEAFilterList;
-(void)setBLocationStarted:(bool)arg1 ;
-(void)setMinNMEAIntervalMs:(unsigned)arg1 ;
-(void)setNMEAFilterList:(id)arg1 ;
-(void)requestLocationAssist:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)initWithConnection:(id)arg1 ;
@end
