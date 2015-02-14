/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:17 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/SecurityInterface.framework/Versions/A/SecurityInterface
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SecurityInterface/SecurityInterface-Structs.h>
#import <SecurityInterface/SFCertificateTrustPanel.h>

@interface SFCertificateImportManager : SFCertificateTrustPanel {

	id _reserved_SFCertificateImportManager;

}
+(id)sharedCertificateImportManager;
-(SEL)_clientDidEndSelector;
-(id)_clientDelegate;
-(void*)_clientContextInfo;
-(void)_bringUpTrustSheetForNextCertificate;
-(void)_errSheetDidDismiss:(id)arg1 returnCode:(int)arg2 contextInfo:(void*)arg3 ;
-(int)_addCert:(OpaqueSecCertificateRefRef)arg1 certData:(id)arg2 commonName:(id)arg3 ;
-(void)_addCertAndEndSheet:(OpaqueSecCertificateRefRef)arg1 certData:(id)arg2 commonName:(id)arg3 ;
-(void)_setRef:(id*)arg1 toObj:(id)arg2 ;
-(void)import;
-(void)importCertificates:(id)arg1 toKeychain:(OpaqueSecKeychainRefRef)arg2 parentWindow:(id)arg3 policy:(OpaqueSecPolicyRefRef)arg4 modalDelegate:(id)arg5 didEndSelector:(SEL)arg6 contextInfo:(void*)arg7 ;
-(id)initWithCertificates:(id)arg1 toKeychain:(OpaqueSecKeychainRefRef)arg2 parentWindow:(id)arg3 policy:(OpaqueSecPolicyRefRef)arg4 ;
-(void)setPolicy:(OpaqueSecPolicyRefRef)arg1 ;
-(void)setDestinationKeychain:(OpaqueSecKeychainRefRef)arg1 ;
-(void)setContextInfo:(void*)arg1 ;
-(void)setCertificates:(id)arg1 ;
-(void)_sheetDidEnd:(id)arg1 returnCode:(int)arg2 contextInfo:(void*)arg3 ;
-(void)setDidEndSelector:(SEL)arg1 ;
-(id)init;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(void)lock;
-(void)unlock;
-(void)setParentWindow:(id)arg1 ;
@end

