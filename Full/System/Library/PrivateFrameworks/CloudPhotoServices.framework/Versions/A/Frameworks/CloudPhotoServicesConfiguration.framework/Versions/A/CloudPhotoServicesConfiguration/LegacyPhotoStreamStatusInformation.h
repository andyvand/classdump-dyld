/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:22 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoServices.framework/Versions/A/Frameworks/CloudPhotoServicesConfiguration.framework/Versions/A/CloudPhotoServicesConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudPhotoServicesConfiguration/CPSStatusInformation.h>

@protocol CPSStatusInformation;
@class NSObject, NSString;

@interface LegacyPhotoStreamStatusInformation : NSObject <CPSStatusInformation> {

	NSObject*<CPSStatusInformation> _statusInformation;

}

@property (retain) NSObject*<CPSStatusInformation> statusInformation;              //@synthesize statusInformation=_statusInformation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)targetStateForServiceIdentifier:(id)arg1 ;
-(char)shouldStartServiceWithTargetState:(long long)arg1 ;
-(void)setStatusInformation:(NSObject*<CPSStatusInformation>)arg1 ;
-(NSObject*<CPSStatusInformation>)statusInformation;
-(long long)accountStatus;
-(long long)rampStateForServiceIdentifier:(id)arg1 ;
-(id)loggedInAppleId;
-(id)loggedInPersonId;
-(id)loggedIniCloudAccountDisplayNameInformation;
-(id)loggedIniCloudAccountQuotaInformation;
-(id)sharedStreamsURL;
-(id)sharedStreamsPushServiceEnvironment;
-(id)myPhotoStreamURL;
-(id)preferencesValueForKey:(id)arg1 serviceIdentifier:(id)arg2 ;
-(char)systemPhotoLibraryIsAvailable;
-(char)canEnableCloudPhotoLibraryForSystemPhotoLibrary;
-(id)initWithStatusInformation:(id)arg1 ;
-(id)authToken;
@end

