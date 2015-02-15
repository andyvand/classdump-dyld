/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:26:49 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Social.framework/Versions/A/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class ACAccount, NSArray, SLFacebookPostPrivacySetting;

@interface SLFacebookPostPrivacyManager : NSObject {

	ACAccount* _account;
	NSArray* _privacySettings;

}

@property (retain) SLFacebookPostPrivacySetting * privacySetting; 
-(SLFacebookPostPrivacySetting *)privacySetting;
-(void)setPrivacySetting:(SLFacebookPostPrivacySetting *)arg1 ;
-(id)_userDefaultsDict;
-(id)defaultPrivacySetting;
-(id)_privacySettingsFromPrivacyOptionDictionaries:(id)arg1 ;
-(void)_setPrivacySettings:(id)arg1 ;
-(void)_handlePrivacySettingsUpdateResponseWithData:(id)arg1 urlResponse:(id)arg2 error:(id)arg3 handler:(/*^block*/id)arg4 ;
-(id)privacySettings;
-(void)updatePrivacySettingsWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithAccount:(id)arg1 ;
@end

