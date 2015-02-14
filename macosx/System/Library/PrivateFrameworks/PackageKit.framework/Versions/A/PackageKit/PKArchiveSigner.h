/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:47 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/PackageKit.framework/Versions/A/PackageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <PackageKit/PackageKit-Structs.h>
@class NSString;

@interface PKArchiveSigner : NSObject {

	NSString* _algorithmType;
	OpaqueSecKeyRefRef _privateKeyRef;
	unsigned long long _signing_context;
	CMSEncoderRef _encoder;
	const CFDictionaryRef _tsaContext;
	int _signatureSize;

}
-(void)setSignatureSize:(int)arg1 ;
-(int)signatureSize;
-(id)initWithSigningIdentity:(OpaqueSecIdentityRefRef)arg1 algorithm:(id)arg2 usingTSAIfSupported:(char)arg3 ;
-(id)signatureDataBySigningData:(id)arg1 ;
-(void)finalize;
-(void)dealloc;
@end

