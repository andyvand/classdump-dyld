/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:51 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreWLAN.framework/Versions/A/CoreWLAN
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CoreWLAN/CoreWLAN-Structs.h>
@class NSDictionary;

@interface CWBaseStationPPPController : NSObject {

	NSDictionary* _pppStatus;
	dispatch_queue_sRef _internalQueue;
	dispatch_source_sRef _pollTimer;
	dispatch_queue_sRef _pollQueue;
	char _dialin;

}

@property (copy) NSDictionary * pppStatus;              //@synthesize pppStatus=_pppStatus - In the implementation block
@property (assign) char dialin;                         //@synthesize dialin=_dialin - In the implementation block
+(id)PPPController;
-(void)poll;
-(id)pollPPPStatus;
-(NSDictionary *)pppStatus;
-(void)setPppStatus:(NSDictionary *)arg1 ;
-(void)setPollInterval:(double)arg1 ;
-(void)startPollingPPP;
-(void)stopPollingPPP;
-(void)hangup;
-(char)dialin;
-(void)setDialin:(char)arg1 ;
-(void)connect;
-(id)init;
-(void)finalize;
-(void)dealloc;
@end

