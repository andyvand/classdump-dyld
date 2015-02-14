/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:40 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarPersistence/EWSExchangeServiceBindingDelegate.h>

@class NSString, NSManagedObjectID;

@interface CalExchangeBasicAccountInfoProvider : NSObject <EWSExchangeServiceBindingDelegate> {

	NSString* _login;
	NSString* _password;
	NSManagedObjectID* _sessionID;

}

@property (nonatomic,copy) NSString * login;                             //@synthesize login=_login - In the implementation block
@property (nonatomic,copy) NSString * password;                          //@synthesize password=_password - In the implementation block
@property (nonatomic,retain) NSManagedObjectID * sessionID;              //@synthesize sessionID=_sessionID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)password;
-(void)dealloc;
-(void)setPassword:(NSString *)arg1 ;
-(NSString *)login;
-(NSManagedObjectID *)sessionID;
-(void)setSessionID:(NSManagedObjectID *)arg1 ;
-(void)exchangeServiceBinding:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2 ;
-(void)exchangeServiceBinding:(id)arg1 didCancelAuthenticationChallenge:(id)arg2 ;
-(void)setLogin:(NSString *)arg1 ;
-(id)initWithLogin:(id)arg1 password:(id)arg2 sessionID:(id)arg3 ;
@end

