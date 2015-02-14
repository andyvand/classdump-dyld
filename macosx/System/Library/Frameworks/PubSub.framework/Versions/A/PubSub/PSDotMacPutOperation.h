/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:19 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/PubSub.framework/Versions/A/PubSub
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PubSub/PSPutOperation.h>

@class NSString;

@interface PSDotMacPutOperation : PSPutOperation {

	int _lockAttempts;
	NSString* _lockToken;
	char _sentUnlock;

}
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 URL:(id)arg3 eTag:(id)arg4 start:(unsigned)arg5 data:(id)arg6 ;
-(void)_lockFinished:(id)arg1 error:(id)arg2 ;
-(void)_finished;
-(void)_unlockFinished:(id)arg1 error:(id)arg2 ;
-(void)dealloc;
-(void)start;
@end

