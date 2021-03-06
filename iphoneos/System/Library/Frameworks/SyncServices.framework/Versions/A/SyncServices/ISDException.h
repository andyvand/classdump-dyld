/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:59 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/SyncServices.framework/Versions/A/SyncServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/NSException.h>

@interface ISDException : NSException {

	int mLogStackTraceMode;
	char mLogReasonOnly;

}
+(id)exceptionWithName:(id)arg1 reason:(id)arg2 userInfo:(id)arg3 ;
+(void)raise:(id)arg1 format:(id)arg2 ;
+(void)initialize;
+(void)setLogStackTraceOnException:(char)arg1 ;
+(void)_logStackTraceWithExceptionName:(id)arg1 reason:(id)arg2 ;
+(void)_logStackTraceWithExceptionReason:(id)arg1 ;
+(id)exceptionWithName:(id)arg1 reason:(id)arg2 userInfo:(id)arg3 logStackTraceMode:(int)arg4 ;
+(id)exceptionWithName:(id)arg1 reason:(id)arg2 userInfo:(id)arg3 logStackTraceMode:(int)arg4 logReasonOnly:(char)arg5 ;
+(char)logStackTraceOnException;
-(id)initWithName:(id)arg1 reason:(id)arg2 userInfo:(id)arg3 ;
-(void)raise;
-(id)initWithName:(id)arg1 reason:(id)arg2 userInfo:(id)arg3 logStackTraceMode:(int)arg4 ;
-(id)initWithName:(id)arg1 reason:(id)arg2 userInfo:(id)arg3 logStackTraceMode:(int)arg4 logReasonOnly:(char)arg5 ;
-(void)setLogStackTraceOnException:(int)arg1 ;
-(int)logStackTraceOnException;
@end

