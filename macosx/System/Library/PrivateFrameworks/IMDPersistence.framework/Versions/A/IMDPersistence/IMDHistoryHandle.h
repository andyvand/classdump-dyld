/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:24 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/IMDPersistence.framework/Versions/A/IMDPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IMDPersistence/NSCoding.h>

@class NSString;

@interface IMDHistoryHandle : NSObject <NSCoding> {

	NSString* _serviceName;
	NSString* _ID;
	NSString* _accountID;
	NSString* _loginID;
	char _isAnonymous;

}

@property (retain) NSString * serviceName;              //@synthesize serviceName=_serviceName - In the implementation block
@property (retain) NSString * ID;                       //@synthesize ID=_ID - In the implementation block
@property (retain) NSString * accountID;                //@synthesize accountID=_accountID - In the implementation block
@property (retain) NSString * loginID;                  //@synthesize loginID=_loginID - In the implementation block
@property (assign) char isAnonymous;                    //@synthesize isAnonymous=_isAnonymous - In the implementation block
-(NSString *)serviceName;
-(NSString *)loginID;
-(void)setLoginID:(NSString *)arg1 ;
-(char)isAnonymous;
-(void)setIsAnonymous:(char)arg1 ;
-(void)setID:(NSString *)arg1 ;
-(void)dealloc;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setServiceName:(NSString *)arg1 ;
-(NSString *)accountID;
-(NSString *)ID;
-(void)setAccountID:(NSString *)arg1 ;
@end

