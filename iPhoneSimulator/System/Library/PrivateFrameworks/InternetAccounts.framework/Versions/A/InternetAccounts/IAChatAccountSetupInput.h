/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:17 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/InternetAccounts.framework/Versions/A/InternetAccounts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <InternetAccounts/IAAccountSetupInput.h>

@class NSString;

@interface IAChatAccountSetupInput : IAAccountSetupInput {

	NSString* _accountType;
	NSString* _loginName;
	NSString* _serverName;
	long long _serverPort;
	char _useSSL;
	char _useKerberosV5;

}

@property (retain) NSString * accountType;              //@synthesize accountType=_accountType - In the implementation block
@property (retain) NSString * loginName;                //@synthesize loginName=_loginName - In the implementation block
@property (retain) NSString * serverName;               //@synthesize serverName=_serverName - In the implementation block
@property (assign) long long serverPort;                //@synthesize serverPort=_serverPort - In the implementation block
@property (assign) char useSSL;                         //@synthesize useSSL=_useSSL - In the implementation block
@property (assign) char useKerberosV5;                  //@synthesize useKerberosV5=_useKerberosV5 - In the implementation block
-(char)useKerberosV5;
-(void)setUseKerberosV5:(char)arg1 ;
-(NSString *)accountType;
-(void)setUseSSL:(char)arg1 ;
-(char)useSSL;
-(void)setLoginName:(NSString *)arg1 ;
-(long long)serverPort;
-(void)setServerPort:(long long)arg1 ;
-(void)setAccountType:(NSString *)arg1 ;
-(NSString *)serverName;
-(void)setServerName:(NSString *)arg1 ;
-(NSString *)loginName;
@end

