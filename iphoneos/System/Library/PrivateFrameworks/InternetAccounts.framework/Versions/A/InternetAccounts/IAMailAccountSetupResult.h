/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:58 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/InternetAccounts.framework/Versions/A/InternetAccounts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <InternetAccounts/IAAccountSetupResult.h>

@class NSString, NSArray, NSData;

@interface IAMailAccountSetupResult : IAAccountSetupResult {

	NSString* _displayName;
	NSString* _fullName;
	NSArray* _emailAddresses;
	NSString* _imapPathPrefix;
	NSString* _incomingAccountType;
	NSString* _incomingHostname;
	long long _incomingPort;
	char _incomingUseSSL;
	NSString* _incomingAuthMechanism;
	NSString* _incomingUserName;
	NSString* _incomingPassword;
	NSData* _incomingTLSCertificate;
	NSString* _incomingNTLMDomain;
	NSString* _outgoingHostname;
	long long _outgoingPort;
	char _outgoingUseSSL;
	NSString* _outgoingAuthMechanism;
	NSString* _outgoingUserName;
	NSString* _outgoingPassword;
	NSData* _outgoingTLSCertificate;
	long long _deletionPolicy;
	long long _deleteOnServerInterval;

}

@property (retain) NSString * displayName;                        //@synthesize displayName=_displayName - In the implementation block
@property (retain) NSString * fullName;                           //@synthesize fullName=_fullName - In the implementation block
@property (retain) NSArray * emailAddresses;                      //@synthesize emailAddresses=_emailAddresses - In the implementation block
@property (retain) NSString * imapPathPrefix;                     //@synthesize imapPathPrefix=_imapPathPrefix - In the implementation block
@property (retain) NSString * incomingAccountType;                //@synthesize incomingAccountType=_incomingAccountType - In the implementation block
@property (retain) NSString * incomingHostname;                   //@synthesize incomingHostname=_incomingHostname - In the implementation block
@property (assign) long long incomingPort;                        //@synthesize incomingPort=_incomingPort - In the implementation block
@property (assign) char incomingUseSSL;                           //@synthesize incomingUseSSL=_incomingUseSSL - In the implementation block
@property (retain) NSString * incomingAuthMechanism;              //@synthesize incomingAuthMechanism=_incomingAuthMechanism - In the implementation block
@property (retain) NSString * incomingUserName;                   //@synthesize incomingUserName=_incomingUserName - In the implementation block
@property (retain) NSString * incomingPassword;                   //@synthesize incomingPassword=_incomingPassword - In the implementation block
@property (retain) NSData * incomingTLSCertificate;               //@synthesize incomingTLSCertificate=_incomingTLSCertificate - In the implementation block
@property (retain) NSString * incomingNTLMDomain;                 //@synthesize incomingNTLMDomain=_incomingNTLMDomain - In the implementation block
@property (retain) NSString * outgoingHostname;                   //@synthesize outgoingHostname=_outgoingHostname - In the implementation block
@property (assign) long long outgoingPort;                        //@synthesize outgoingPort=_outgoingPort - In the implementation block
@property (assign) char outgoingUseSSL;                           //@synthesize outgoingUseSSL=_outgoingUseSSL - In the implementation block
@property (retain) NSString * outgoingAuthMechanism;              //@synthesize outgoingAuthMechanism=_outgoingAuthMechanism - In the implementation block
@property (retain) NSString * outgoingUserName;                   //@synthesize outgoingUserName=_outgoingUserName - In the implementation block
@property (retain) NSString * outgoingPassword;                   //@synthesize outgoingPassword=_outgoingPassword - In the implementation block
@property (retain) NSData * outgoingTLSCertificate;               //@synthesize outgoingTLSCertificate=_outgoingTLSCertificate - In the implementation block
@property (assign) long long deletionPolicy;                      //@synthesize deletionPolicy=_deletionPolicy - In the implementation block
@property (assign) long long deleteOnServerInterval;              //@synthesize deleteOnServerInterval=_deleteOnServerInterval - In the implementation block
-(void)setDeleteOnServerInterval:(long long)arg1 ;
-(void)setDeletionPolicy:(long long)arg1 ;
-(NSString *)imapPathPrefix;
-(void)setImapPathPrefix:(NSString *)arg1 ;
-(NSString *)incomingNTLMDomain;
-(void)setIncomingNTLMDomain:(NSString *)arg1 ;
-(long long)deletionPolicy;
-(long long)deleteOnServerInterval;
-(void)setIncomingAccountType:(NSString *)arg1 ;
-(void)setIncomingHostname:(NSString *)arg1 ;
-(void)setIncomingUserName:(NSString *)arg1 ;
-(void)setIncomingPort:(long long)arg1 ;
-(void)setIncomingUseSSL:(char)arg1 ;
-(void)setIncomingAuthMechanism:(NSString *)arg1 ;
-(void)setOutgoingHostname:(NSString *)arg1 ;
-(void)setOutgoingUserName:(NSString *)arg1 ;
-(void)setOutgoingPassword:(NSString *)arg1 ;
-(void)setOutgoingPort:(long long)arg1 ;
-(void)setOutgoingUseSSL:(char)arg1 ;
-(void)setOutgoingAuthMechanism:(NSString *)arg1 ;
-(NSString *)incomingPassword;
-(NSString *)outgoingPassword;
-(NSString *)incomingHostname;
-(NSString *)incomingUserName;
-(long long)incomingPort;
-(NSString *)outgoingHostname;
-(NSString *)outgoingUserName;
-(long long)outgoingPort;
-(NSString *)incomingAuthMechanism;
-(char)incomingUseSSL;
-(NSData *)incomingTLSCertificate;
-(void)setIncomingTLSCertificate:(NSData *)arg1 ;
-(NSString *)outgoingAuthMechanism;
-(char)outgoingUseSSL;
-(NSData *)outgoingTLSCertificate;
-(void)setOutgoingTLSCertificate:(NSData *)arg1 ;
-(NSString *)incomingAccountType;
-(void)setIncomingPassword:(NSString *)arg1 ;
-(void)dealloc;
-(NSString *)displayName;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSArray *)emailAddresses;
-(NSString *)fullName;
-(void)setFullName:(NSString *)arg1 ;
-(void)setEmailAddresses:(NSArray *)arg1 ;
@end

