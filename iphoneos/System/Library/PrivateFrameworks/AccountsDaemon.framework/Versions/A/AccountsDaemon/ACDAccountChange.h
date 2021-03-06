/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:34 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/Versions/A/AccountsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class ACAccount;

@interface ACDAccountChange : NSObject {

	int _changeType;
	ACAccount* _account;
	ACAccount* _oldAccount;

}

@property (assign) int changeType;                      //@synthesize changeType=_changeType - In the implementation block
@property (retain) ACAccount * account;                 //@synthesize account=_account - In the implementation block
@property (retain) ACAccount * oldAccount;              //@synthesize oldAccount=_oldAccount - In the implementation block
+(id)changeWithChangeType:(int)arg1 account:(id)arg2 oldAccount:(id)arg3 ;
-(void)setOldAccount:(ACAccount *)arg1 ;
-(id)initWithChangeType:(int)arg1 account:(id)arg2 oldAccount:(id)arg3 ;
-(ACAccount *)oldAccount;
-(ACAccount *)account;
-(void)setAccount:(ACAccount *)arg1 ;
-(int)changeType;
-(void)setChangeType:(int)arg1 ;
@end

