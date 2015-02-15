/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:37 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Mail.framework/Versions/A/Mail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Mail/MFDeliveryAccount.h>

@class MFSMTPConnection, NSTimer;

@interface MFSMTPAccount : MFDeliveryAccount {

	MFSMTPConnection* _connection;
	id _smtpAccountLock;
	NSTimer* _timer;
	long long _lastTimerSetTime;

}

@property (assign,nonatomic) long long lastTimerSetTime;              //@synthesize lastTimerSetTime=_lastTimerSetTime - In the implementation block
+(id)standardPorts;
+(id)standardSSLPorts;
+(id)accountTypeString;
-(id)initWithAccountInfo:(id)arg1 ;
-(long long)defaultPortNumber;
-(void)releaseAllConnections;
-(id)preferredAuthScheme;
-(void*)keychainProtocol;
-(char)connectAndAuthenticate:(id)arg1 ;
-(id)newConnectedConnectionDiscoveringBestSettings:(char)arg1 withConnectTimeout:(double)arg2 readWriteTimeout:(double)arg3 ;
-(id)authenticatedConnection;
-(id)saslProfileName;
-(void)setPreferredAuthScheme:(id)arg1 ;
-(id)googleClientToken;
-(Class)delivererClass;
-(long long)lastTimerSetTime;
-(void)_setTimer;
-(void)setLastTimerSetTime:(long long)arg1 ;
-(void)_connectionExpired:(id)arg1 ;
-(void)_disconnect:(id)arg1 ;
-(void)checkInConnection:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)objectSpecifier;
@end
