/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:16 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/MailCore.framework/Versions/A/MailCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MailCore/MCThrowingInvocationOperation.h>

@interface MCMainThreadInvocationOperation : MCThrowingInvocationOperation {

	char _isExecuting;
	char _isFinished;

}
+(char)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(char)isExecuting;
-(void)_finish;
-(void)_setIsExecuting:(char)arg1 ;
-(char)isConcurrent;
-(void)start;
-(char)isFinished;
-(void)main;
@end

