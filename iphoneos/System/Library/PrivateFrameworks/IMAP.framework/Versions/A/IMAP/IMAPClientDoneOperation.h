/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:43 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/IMAP.framework/Versions/A/IMAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IMAP/IMAPSingleClientOperation.h>

@class NSDate;

@interface IMAPClientDoneOperation : IMAPSingleClientOperation {

	char _isReallyReady;
	char _shouldQueueIdleWhenFinished;
	char _didQueueIdle;
	NSDate* _resetDate;

}

@property (retain) NSDate * resetDate;              //@synthesize resetDate=_resetDate - In the implementation block
-(char)isReady;
-(id)activityString;
-(id)init;
-(void)cancel;
-(void)setSequenceNumber:(unsigned long long)arg1 ;
-(id)commandTypeString;
-(char)executeOnConnection:(id)arg1 ;
-(long long)minRequiredConnectionState;
-(long long)maxAllowedConnectionState;
-(id)newCommandDataForLiteralPlus:(char)arg1 ;
-(char)updateReadiness;
-(void)setResetDate:(NSDate *)arg1 ;
-(char)shouldQueueIdleWhenFinished;
-(char)setShouldQueueIdleWhenFinished:(char)arg1 ;
-(char)_shouldQueueIdleNow;
-(NSDate *)resetDate;
-(void)setResetDateEarlierThanNow;
-(char)alwaysAllowToComplete;
@end
