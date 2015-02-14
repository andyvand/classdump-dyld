/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:26 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/InternetAccounts.framework/Versions/A/InternetAccounts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class ACAccountType;

@interface ACAccountsHelper : NSObject {

	ACAccountType* _type;

}
+(id)storeQueue;
+(id)store;
-(id)makeAnAccount;
-(char)saveAccount:(id)arg1 verifyCredential:(char)arg2 error:(id*)arg3 ;
-(id)accountWithUsername:(id)arg1 ;
-(char)verifyAccount:(id)arg1 error:(id*)arg2 ;
-(id)initWithACType:(id)arg1 ;
-(id)storedAccounts;
-(char)requestAccess;
-(id)accountWithUID:(id)arg1 ;
-(char)removeAccount:(id)arg1 error:(id*)arg2 ;
-(id)type;
@end

