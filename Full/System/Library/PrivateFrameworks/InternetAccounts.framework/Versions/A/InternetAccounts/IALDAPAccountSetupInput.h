/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:32:41 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/InternetAccounts.framework/Versions/A/InternetAccounts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <InternetAccounts/IAAccountSetupInput.h>

@class NSString, NSNumber;

@interface IALDAPAccountSetupInput : IAAccountSetupInput {

	NSString* _serverAddress;
	NSNumber* _useSSL;
	long long _port;
	NSString* _scope;
	NSString* _searchBase;
	char _authenticate;

}

@property (retain) NSString * serverAddress;              //@synthesize serverAddress=_serverAddress - In the implementation block
@property (retain) NSNumber * useSSL;                     //@synthesize useSSL=_useSSL - In the implementation block
@property (assign) long long port;                        //@synthesize port=_port - In the implementation block
@property (retain) NSString * scope;                      //@synthesize scope=_scope - In the implementation block
@property (retain) NSString * searchBase;                 //@synthesize searchBase=_searchBase - In the implementation block
@property (assign) char authenticate;                     //@synthesize authenticate=_authenticate - In the implementation block
-(void)setServerAddress:(NSString *)arg1 ;
-(void)setAuthenticate:(char)arg1 ;
-(NSString *)searchBase;
-(void)setSearchBase:(NSString *)arg1 ;
-(void)setUseSSL:(NSNumber *)arg1 ;
-(NSNumber *)useSSL;
-(NSString *)scope;
-(void)setScope:(NSString *)arg1 ;
-(NSString *)serverAddress;
-(char)authenticate;
-(long long)port;
-(void)setPort:(long long)arg1 ;
@end
