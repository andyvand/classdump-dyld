/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:16 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface ABSyncScheduleOptions : NSObject {

	unsigned long long _retryCount;
	char _standby;
	char _resetStandby;
	char _clearify;

}

@property (assign) unsigned long long retryCount;              //@synthesize retryCount=_retryCount - In the implementation block
@property (assign) char standby;                               //@synthesize standby=_standby - In the implementation block
@property (assign) char resetStandby;                          //@synthesize resetStandby=_resetStandby - In the implementation block
@property (assign) char clearify;                              //@synthesize clearify=_clearify - In the implementation block
-(void)setResetStandby:(char)arg1 ;
-(void)setClearify:(char)arg1 ;
-(void)setRetryCount:(unsigned long long)arg1 ;
-(unsigned long long)retryCount;
-(id)commandArguments;
-(char)resetStandby;
-(char)clearify;
-(char)standby;
-(void)setStandby:(char)arg1 ;
-(id)init;
-(void)dealloc;
@end

