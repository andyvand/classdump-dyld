/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:53:27 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FindMyDevice.framework/Versions/A/FindMyDevice
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface FMDLogger : NSObject {

	char _logLevelsMaxedOut;
	char _logLocationIndicatorSent;
	char _isInternalBuild;

}

@property (assign,nonatomic) char isInternalBuild;                       //@synthesize isInternalBuild=_isInternalBuild - In the implementation block
@property (assign,nonatomic) char logLevelsMaxedOut;                     //@synthesize logLevelsMaxedOut=_logLevelsMaxedOut - In the implementation block
@property (assign,nonatomic) char logLocationIndicatorSent;              //@synthesize logLocationIndicatorSent=_logLocationIndicatorSent - In the implementation block
+(id)sharedInstance;
-(void)maxOutLogging;
-(void)logAtLevel:(long long)arg1 facility:(id)arg2 filename:(const char*)arg3 lineNumber:(long long)arg4 function:(const char*)arg5 message:(id)arg6 ;
-(char)logLevelsMaxedOut;
-(char)isInternalBuild;
-(char)logLocationIndicatorSent;
-(void)setLogLocationIndicatorSent:(char)arg1 ;
-(void)setLogLevelsMaxedOut:(char)arg1 ;
-(void)logSettingsDidChange;
-(void)setIsInternalBuild:(char)arg1 ;
-(id)init;
@end
