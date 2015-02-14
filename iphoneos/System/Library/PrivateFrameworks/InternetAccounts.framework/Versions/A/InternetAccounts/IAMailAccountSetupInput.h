/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:58 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/InternetAccounts.framework/Versions/A/InternetAccounts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <InternetAccounts/IAAccountSetupInput.h>

@class NSString;

@interface IAMailAccountSetupInput : IAAccountSetupInput {

	NSString* _emailAddress;
	NSString* _fullName;
	char _disableRecentsSync;

}

@property (retain) NSString * emailAddress;              //@synthesize emailAddress=_emailAddress - In the implementation block
@property (retain) NSString * fullName;                  //@synthesize fullName=_fullName - In the implementation block
@property (assign) char disableRecentsSync;              //@synthesize disableRecentsSync=_disableRecentsSync - In the implementation block
-(char)disableRecentsSync;
-(void)setDisableRecentsSync:(char)arg1 ;
-(NSString *)emailAddress;
-(NSString *)fullName;
-(void)setFullName:(NSString *)arg1 ;
-(void)setEmailAddress:(NSString *)arg1 ;
@end

