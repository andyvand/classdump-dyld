/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:21 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface CloudFeatureAvailability : NSObject {

	char _userSignedIntoICloud;
	char _safariSyncEnabled;
	char _keychainSyncEnabled;

}

@property (getter=isUserSignedIntoICloud,readonly) char userSignedIntoICloud;              //@synthesize userSignedIntoICloud=_userSignedIntoICloud - In the implementation block
@property (getter=isSafariSyncEnabled,readonly) char safariSyncEnabled;                    //@synthesize safariSyncEnabled=_safariSyncEnabled - In the implementation block
@property (getter=isKeychainSyncEnabled,readonly) char keychainSyncEnabled;                //@synthesize keychainSyncEnabled=_keychainSyncEnabled - In the implementation block
+(void)startMonitoringForAvailabilityChanges;
+(char)isKeychainSyncEnabled;
+(id)_sharedInstance;
+(char)isUserSignedIntoICloud;
+(char)isSafariSyncEnabled;
-(char)isKeychainSyncEnabled;
-(char)isUserSignedIntoICloud;
-(char)isSafariSyncEnabled;
-(void)_iCloudLoggedInStateDidChange:(id)arg1 ;
-(void)_iCloudServiceStatusChanged:(id)arg1 ;
-(void)setUserSignedIntoICloud:(char)arg1 ;
-(void)setSafariSyncEnabled:(char)arg1 ;
-(void)setKeychainSyncEnabled:(char)arg1 ;
-(id)init;
@end

