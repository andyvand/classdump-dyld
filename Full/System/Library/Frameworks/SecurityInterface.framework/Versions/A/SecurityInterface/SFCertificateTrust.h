/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:17 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/SecurityInterface.framework/Versions/A/SecurityInterface
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <SecurityInterface/SecurityInterface-Structs.h>
@interface SFCertificateTrust : NSObject {

	id _reserved_SFCertificateTrust;

}
-(id)initWithCertificateData:(id)arg1 ;
-(id)certificateData;
-(id)dictionaryExists:(id)arg1 policy:(OpaqueSecPolicyRefRef)arg2 policyString:(id)arg3 allowedError:(id)arg4 ;
-(void)saveTrustValuesInDomain:(unsigned)arg1 ;
-(void)saveTrustValues;
-(id)init;
-(void)dealloc;
-(void)setCertificateData:(id)arg1 ;
@end

