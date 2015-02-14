/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:45 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CoreDuetDaemonProtocol.framework/Versions/A/CoreDuetDaemonProtocol
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class CDDebug;

@interface CDDPluginResponder : NSObject {

	CDDebug* _debug;

}

@property (readonly) CDDebug * debug;              //@synthesize debug=_debug - In the implementation block
-(id)makeStashWithId:(unsigned long long)arg1 ;
-(char)sendMessageOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 type:(long long)arg4 error:(id*)arg5 ;
-(char)respondToInitOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 info:(id)arg4 error:(id*)arg5 ;
-(char)respondToAdmissionSignoffOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 status:(char)arg4 reasons:(id)arg5 error:(id*)arg6 ;
-(char)respondToTriggerOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 info:(id)arg4 error:(id*)arg5 ;
-(char)respondToAdmissionCheckAndStartedOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 status:(char)arg4 reasons:(id)arg5 error:(id*)arg6 ;
-(CDDebug *)debug;
-(id)init;
@end

