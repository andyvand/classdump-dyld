/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:54:26 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/StoreFoundation.framework/Versions/A/StoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <StoreFoundation/StoreFoundation-Structs.h>
@interface ISCertificate : NSObject {

	SecTrustRef _trust;

}
-(void)dealloc;
-(void)_invalidate;
-(char)isValid;
-(char)checkData:(id)arg1 againstSignature:(id)arg2 ;
-(char)checkData:(id)arg1 againstAppleSignature:(id)arg2 ;
-(void)setCertificateData:(id)arg1 ;
@end

