/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:33:07 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CloudKit.framework/Versions/A/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKit/CloudKit-Structs.h>
#import <CloudKit/NSCopying.h>
#import <CloudKit/NSSecureCoding.h>

@class NSString;

@interface CKAccountInfo : NSObject <NSCopying, NSSecureCoding> {

	char _isUnitTestingAccount;
	char _accountWantsPushRegistration;
	NSString* _email;
	NSString* _password;

}

@property (nonatomic,readonly) NSString * email;                             //@synthesize email=_email - In the implementation block
@property (nonatomic,readonly) NSString * password;                          //@synthesize password=_password - In the implementation block
@property (assign,nonatomic) char isUnitTestingAccount;                      //@synthesize isUnitTestingAccount=_isUnitTestingAccount - In the implementation block
@property (assign,nonatomic) char accountWantsPushRegistration;              //@synthesize accountWantsPushRegistration=_accountWantsPushRegistration - In the implementation block
+(char)supportsSecureCoding;
-(char)isUnitTestingAccount;
-(char)accountWantsPushRegistration;
-(id)initWithEmail:(id)arg1 password:(id)arg2 ;
-(void)setIsUnitTestingAccount:(char)arg1 ;
-(void)setAccountWantsPushRegistration:(char)arg1 ;
-(NSString *)password;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)email;
@end

