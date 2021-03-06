/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:17 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/Versions/A/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface TULogging : NSObject
+(char)shouldLogType:(id)arg1 ;
+(void)logType:(id)arg1 topic:(id)arg2 category:(id)arg3 backtrace:(char)arg4 format:(id)arg5 ;
+(void)checkpointLoggingSession:(id)arg1 ;
+(void)pulseLoggingSession;
+(void)registerForShouldLogChangedNotification;
+(void)unregisterForShouldLogChangedNotification;
+(char)sendDirectoryToCrashReporter:(id)arg1 error:(id*)arg2 ;
+(void)beginLoggingSessionAsInitiator:(char)arg1 ;
+(void)endLoggingSession;
@end

