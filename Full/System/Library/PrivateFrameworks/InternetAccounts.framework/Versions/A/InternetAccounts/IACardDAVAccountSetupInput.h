/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:25 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/InternetAccounts.framework/Versions/A/InternetAccounts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <InternetAccounts/IAAccountSetupInput.h>

@class NSString;

@interface IACardDAVAccountSetupInput : IAAccountSetupInput {

	NSString* _serverAddress;
	NSString* _autoHostname;
	NSString* _autoSchema;
	char _migrateLocalData;
	NSString* _emailAddress;

}

@property (retain) NSString * serverAddress;              //@synthesize serverAddress=_serverAddress - In the implementation block
@property (retain) NSString * autoHostname;               //@synthesize autoHostname=_autoHostname - In the implementation block
@property (retain) NSString * autoSchema;                 //@synthesize autoSchema=_autoSchema - In the implementation block
@property (assign) char migrateLocalData;                 //@synthesize migrateLocalData=_migrateLocalData - In the implementation block
@property (retain) NSString * emailAddress;               //@synthesize emailAddress=_emailAddress - In the implementation block
-(void)setServerAddress:(NSString *)arg1 ;
-(NSString *)autoHostname;
-(void)setAutoHostname:(NSString *)arg1 ;
-(NSString *)autoSchema;
-(void)setAutoSchema:(NSString *)arg1 ;
-(char)migrateLocalData;
-(void)setMigrateLocalData:(char)arg1 ;
-(NSString *)serverAddress;
-(NSString *)emailAddress;
-(void)setEmailAddress:(NSString *)arg1 ;
@end

