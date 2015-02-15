/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:17 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/InternetAccounts.framework/Versions/A/InternetAccounts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <InternetAccounts/IAAccountSetupResult.h>

@class IMAccount, NSError;

@interface IAChatAccountSetupResult : IAAccountSetupResult {

	IMAccount* _accountObject;
	char _isExistingAccount;
	NSError* _error;

}

@property (retain) IMAccount * accountObject;              //@synthesize accountObject=_accountObject - In the implementation block
@property (retain) NSError * setupError;                   //@synthesize error=_error - In the implementation block
@property (assign) char isExistingAccount;                 //@synthesize isExistingAccount=_isExistingAccount - In the implementation block
-(IMAccount *)accountObject;
-(void)setAccountObject:(IMAccount *)arg1 ;
-(NSError *)setupError;
-(void)setSetupError:(NSError *)arg1 ;
-(char)isExistingAccount;
-(void)setIsExistingAccount:(char)arg1 ;
@end
