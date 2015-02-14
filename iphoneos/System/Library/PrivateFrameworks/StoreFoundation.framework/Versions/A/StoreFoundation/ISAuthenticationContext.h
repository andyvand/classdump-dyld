/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:37 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/StoreFoundation.framework/Versions/A/StoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreFoundation/NSSecureCoding.h>

@class NSNumber, NSDictionary, NSString;

@interface ISAuthenticationContext : NSObject <NSSecureCoding> {

	NSNumber* _accountID;
	NSDictionary* _additionalQueryParameters;
	NSDictionary* _dialogDictionary;
	long long _bagType;
	NSDictionary* _signUpQueryParameters;
	char _shouldFollowAccountButtons;
	long long _style;
	char _useCachedCredentials;
	long long _authenticationReason;
	NSString* _appleIDOverride;
	char _enforceAppleIDOverride;
	NSString* _applicationName;
	char _demoMode;
	char _demoAutologinMode;
	NSString* _demoAccountName;
	NSString* _demoAccountPassword;

}

@property (readonly) NSNumber * accountID;                                //@synthesize accountID=_accountID - In the implementation block
@property (retain) NSDictionary * additionalQueryParameters;              //@synthesize additionalQueryParameters=_additionalQueryParameters - In the implementation block
@property (assign) long long authenticationStyle;                         //@synthesize style=_style - In the implementation block
@property (assign) long long authenticationReason;                        //@synthesize authenticationReason=_authenticationReason - In the implementation block
@property (assign) long long bagType;                                     //@synthesize bagType=_bagType - In the implementation block
@property (retain) NSDictionary * signUpQueryParameters;                  //@synthesize signUpQueryParameters=_signUpQueryParameters - In the implementation block
@property (assign) char shouldFollowAccountButtons;                       //@synthesize shouldFollowAccountButtons=_shouldFollowAccountButtons - In the implementation block
@property (assign) char useCachedCredentials;                             //@synthesize useCachedCredentials=_useCachedCredentials - In the implementation block
@property (retain) NSString * appleIDOverride;                            //@synthesize appleIDOverride=_appleIDOverride - In the implementation block
@property (assign) char enforceAppleIDOverride;                           //@synthesize enforceAppleIDOverride=_enforceAppleIDOverride - In the implementation block
@property (retain) NSString * applicationName;                            //@synthesize applicationName=_applicationName - In the implementation block
@property (retain) NSDictionary * dialogDictionary;                       //@synthesize dialogDictionary=_dialogDictionary - In the implementation block
@property (assign) char demoMode;                                         //@synthesize demoMode=_demoMode - In the implementation block
@property (assign) char demoAutologinMode;                                //@synthesize demoAutologinMode=_demoAutologinMode - In the implementation block
@property (retain) NSString * demoAccountName;                            //@synthesize demoAccountName=_demoAccountName - In the implementation block
@property (retain) NSString * demoAccountPassword;                        //@synthesize demoAccountPassword=_demoAccountPassword - In the implementation block
+(char)supportsSecureCoding;
-(void)setApplicationName:(NSString *)arg1 ;
-(id)initWithAccountID:(id)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)applicationName;
-(NSNumber *)accountID;
-(long long)authenticationReason;
-(char)demoMode;
-(NSString *)demoAccountName;
-(NSString *)demoAccountPassword;
-(NSString *)appleIDOverride;
-(char)enforceAppleIDOverride;
-(void)setBagType:(long long)arg1 ;
-(long long)bagType;
-(NSDictionary *)additionalQueryParameters;
-(void)setAdditionalQueryParameters:(NSDictionary *)arg1 ;
-(long long)authenticationStyle;
-(void)setAuthenticationStyle:(long long)arg1 ;
-(NSDictionary *)signUpQueryParameters;
-(void)setSignUpQueryParameters:(NSDictionary *)arg1 ;
-(char)shouldFollowAccountButtons;
-(void)setShouldFollowAccountButtons:(char)arg1 ;
-(char)useCachedCredentials;
-(void)setUseCachedCredentials:(char)arg1 ;
-(void)setAuthenticationReason:(long long)arg1 ;
-(void)setAppleIDOverride:(NSString *)arg1 ;
-(void)setEnforceAppleIDOverride:(char)arg1 ;
-(NSDictionary *)dialogDictionary;
-(void)setDialogDictionary:(NSDictionary *)arg1 ;
-(void)setDemoMode:(char)arg1 ;
-(char)demoAutologinMode;
-(void)setDemoAutologinMode:(char)arg1 ;
-(void)setDemoAccountName:(NSString *)arg1 ;
-(void)setDemoAccountPassword:(NSString *)arg1 ;
@end

