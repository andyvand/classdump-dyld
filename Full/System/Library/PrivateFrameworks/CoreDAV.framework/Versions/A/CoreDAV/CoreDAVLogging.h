/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:22 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/Versions/A/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CoreDAV/CoreDAV-Structs.h>
@interface CoreDAVLogging : NSObject {

	CFDictionaryRef _logDelegates;
	dispatch_queue_sRef _delegateMuckingQueue;

}
+(id)sharedLogging;
-(id)init;
-(void)dealloc;
-(void)removeLogDelegate:(id)arg1 forAccountInfoProvider:(id)arg2 ;
-(void)addLogDelegate:(id)arg1 forAccountInfoProvider:(id)arg2 ;
-(id)_delegatesToLogForProvider:(id)arg1 ;
-(char)shouldLogAtLevel:(long long)arg1 forAccountInfoProvider:(id)arg2 ;
-(char)_shouldOutputAtLevel:(long long)arg1 forAccountInfoProvider:(id)arg2 ;
-(id)delegatesToLogTransmittedDataForAccountInfoProvider:(id)arg1 ;
-(void)logDiagnosticForProvider:(id)arg1 withLevel:(long long)arg2 format:(id)arg3 args:(_va_list_tag*)arg4 ;
@end

