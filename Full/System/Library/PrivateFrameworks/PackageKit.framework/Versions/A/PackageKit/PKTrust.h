/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:57 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/PackageKit.framework/Versions/A/PackageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <PackageKit/PackageKit-Structs.h>
@class NSDate;

@interface PKTrust : NSObject {

	SecTrustRef _trustRef;
	OpaqueSecPolicyRefRef _policyRef;
	unsigned _trustResult;
	int _trustLevel;
	NSDate* _signingDate;
	char _signingDateIsTrusted;
	char _appleRootMode;

}
+(id)stringForTrustLevel:(int)arg1 ;
-(id)initWithSecTrust:(SecTrustRef)arg1 usingAppleRoot:(char)arg2 signatureDate:(id)arg3 ;
-(id)initWithCertificates:(id)arg1 usingAppleRoot:(char)arg2 signatureDate:(id)arg3 ;
-(int)trustLevel;
-(SecTrustRef)trustRef;
-(void)_enterAppleRootMode;
-(char)_evaluateTrustAtLevel:(int)arg1 isDevelopmentSigned:(char*)arg2 ;
-(char)_restoreSystemTrustMode;
-(OpaqueSecCertificateRefRef)_anchorCertificateFromEvaluation;
-(char)_isTrustedAsRootCertificate:(OpaqueSecCertificateRefRef)arg1 inDomain:(unsigned)arg2 ;
-(char)_enterDateSignedMode;
-(char)_restoreCurrentDateMode;
-(char)_setCurrentPolicyWithOID:(cssm_data)arg1 ;
-(unsigned)trustResult;
-(char)evaluateTrustReturningError:(id*)arg1 ;
-(id)certificateChain;
-(void)dealloc;
@end

