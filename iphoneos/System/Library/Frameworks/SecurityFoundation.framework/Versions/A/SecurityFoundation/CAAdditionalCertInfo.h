/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:24 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/SecurityFoundation.framework/Versions/A/SecurityFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <SecurityFoundation/SecurityFoundation-Structs.h>
@class NSNumber, NSString;

@interface CAAdditionalCertInfo : NSObject {

	NSNumber* _caSerialNumber;
	NSNumber* _caValidityPeriod;
	int _caCreateCAWebSite;
	int _signInvite;
	OpaqueSecIdentityRefRef _caChosenIdentityToSignInvitation;
	NSString* _alternateLocationForCAWebSite;

}
-(void)_setSerialNumber:(id)arg1 ;
-(void)_setValidityPeriod:(id)arg1 ;
-(void)_setCreateCAWebSite:(int)arg1 ;
-(int)_createCAWebSite;
-(int)_signInvitation;
-(void)_setToDefaults;
-(OpaqueSecIdentityRefRef)_chosenIdentityToSignInvitation;
-(void)setChosenIdentityToSignInvitation:(OpaqueSecIdentityRefRef)arg1 ;
-(id)_validityPeriod;
-(void)_setAlternateLocationForCAWebSite:(id)arg1 ;
-(id)_alternateLocationForCAWebSite;
-(id)_serialNumber;
-(void)dealloc;
@end

