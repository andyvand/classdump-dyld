/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:28 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/Versions/A/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <IMCore/IMCore-Structs.h>
@interface IMService : NSObject
+(id)bundleForClass;
+(unsigned long long)statusForABPerson:(id)arg1 ;
+(id)imageNameForStatus:(unsigned long long)arg1 ;
+(id)allServices;
+(void)forgetStatusImageAppearance;
+(id)imageURLForStatus:(unsigned long long)arg1 ;
+(id)allServicesNonBlocking;
+(id)serviceWithName:(id)arg1 ;
+(id)myIdleTime;
+(unsigned long long)myStatus;
+(char)isEmailAddress:(id)arg1 inDomains:(id)arg2 ;
+(unsigned long long)statusForIMPerson:(id)arg1 ;
+(id)canonicalFormOfID:(id)arg1 withIDSensitivity:(int)arg2 ;
+(id)aimService;
+(id)subnetService;
+(id)jabberService;
+(id)callService;
+(id)facetimeService;
+(id)iMessageService;
+(id)smsService;
+(id)notificationCenter;
-(id)infoForScreenName:(id)arg1 ;
-(id)peopleWithScreenName:(id)arg1 ;
-(id)localizedShortName;
-(void)logout;
-(char)initialSyncPerformed;
-(id)infoForAllScreenNames;
-(id)infoForPreferredScreenNames;
-(id)canonicalFormOfID:(id)arg1 ;
-(id)screenNamesForPerson:(id)arg1 ;
-(id)myScreenNames;
-(id)infoForPerson:(id)arg1 ;
-(id)infoForAllPeople;
-(id)infoForDisplayedPeople;
-(id)name;
-(char)isEnabled;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)status;
-(id)localizedName;
-(void)login;
@end

