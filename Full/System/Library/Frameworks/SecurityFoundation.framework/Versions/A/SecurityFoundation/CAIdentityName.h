/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:04 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/SecurityFoundation.framework/Versions/A/SecurityFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface CAIdentityName : NSObject {

	NSString* _caIdentityName;
	int _caLetUserOverrideDefaults;
	int _caMakeCAConfigFileTheDefaultCA;
	int _caSelfSignedChosen;
	char _caDidWarnAboutSelfSignedCert;
	NSString* _caAdminCAEmailAddress;
	int _certType;

}
-(void)_setToDefaults;
-(void)_setDidWarnAboutSelfSignedCert:(char)arg1 ;
-(void)_setLetOverrideDefaults:(int)arg1 ;
-(void)_setCAType:(int)arg1 ;
-(int)_makeDefaultCA;
-(id)_identityName;
-(void)_setIdentityName:(id)arg1 ;
-(id)_CAAdminEmailAddress;
-(void)_setCAAdminEmailAddress:(id)arg1 ;
-(char)_isCATypeSelfSignedRoot;
-(char)_didWarnAboutSelfSignedCert;
-(int)_letUserOverrideDefaults;
-(void)_setCertType:(int)arg1 ;
-(int)_certType;
-(char)_isCertTypeSMIME;
-(char)_isCertTypeSSLServer;
-(char)_isCertTypeVPNServer;
-(char)_isCertTypeVPNClient;
-(char)_isCertTypeCodeSigning;
-(void)dealloc;
@end

