/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:25 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/InternetAccounts.framework/Versions/A/InternetAccounts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <InternetAccounts/IAAccountSetupResult.h>

@class NSString, NSURL;

@interface IAEWSAccountSetupResult : IAAccountSetupResult {

	NSString* _fullName;
	NSString* _email;
	NSString* _internalHost;
	NSString* _internalPath;
	char _internalUseSSL;
	long long _internalPort;
	NSString* _externalHost;
	NSString* _externalPath;
	char _externalUseSSL;
	long long _externalPort;
	NSURL* _internalURL;
	NSURL* _externalURL;
	NSString* _rootFolderID;
	NSURL* _autodiscoverURL;

}

@property (retain) NSString * fullName;                  //@synthesize fullName=_fullName - In the implementation block
@property (retain) NSString * email;                     //@synthesize email=_email - In the implementation block
@property (retain) NSString * internalHost;              //@synthesize internalHost=_internalHost - In the implementation block
@property (retain) NSString * internalPath;              //@synthesize internalPath=_internalPath - In the implementation block
@property (assign) char internalUseSSL;                  //@synthesize internalUseSSL=_internalUseSSL - In the implementation block
@property (assign) long long internalPort;               //@synthesize internalPort=_internalPort - In the implementation block
@property (retain) NSString * externalHost;              //@synthesize externalHost=_externalHost - In the implementation block
@property (retain) NSString * externalPath;              //@synthesize externalPath=_externalPath - In the implementation block
@property (assign) char externalUseSSL;                  //@synthesize externalUseSSL=_externalUseSSL - In the implementation block
@property (assign) long long externalPort;               //@synthesize externalPort=_externalPort - In the implementation block
@property (retain) NSURL * internalURL;                  //@synthesize internalURL=_internalURL - In the implementation block
@property (retain) NSURL * externalURL;                  //@synthesize externalURL=_externalURL - In the implementation block
@property (retain) NSString * rootFolderID;              //@synthesize rootFolderID=_rootFolderID - In the implementation block
@property (retain) NSURL * autodiscoverURL;              //@synthesize autodiscoverURL=_autodiscoverURL - In the implementation block
-(NSString *)internalHost;
-(void)setInternalHost:(NSString *)arg1 ;
-(NSString *)internalPath;
-(void)setInternalPath:(NSString *)arg1 ;
-(char)internalUseSSL;
-(void)setInternalUseSSL:(char)arg1 ;
-(long long)internalPort;
-(void)setInternalPort:(long long)arg1 ;
-(NSString *)externalHost;
-(void)setExternalHost:(NSString *)arg1 ;
-(NSString *)externalPath;
-(void)setExternalPath:(NSString *)arg1 ;
-(char)externalUseSSL;
-(void)setExternalUseSSL:(char)arg1 ;
-(long long)externalPort;
-(void)setExternalPort:(long long)arg1 ;
-(void)setInternalURL:(NSURL *)arg1 ;
-(void)setAutodiscoverURL:(NSURL *)arg1 ;
-(NSURL *)internalURL;
-(NSURL *)autodiscoverURL;
-(NSString *)email;
-(void)setEmail:(NSString *)arg1 ;
-(NSString *)fullName;
-(void)setFullName:(NSString *)arg1 ;
-(NSString *)rootFolderID;
-(void)setRootFolderID:(NSString *)arg1 ;
-(NSURL *)externalURL;
-(void)setExternalURL:(NSURL *)arg1 ;
@end

