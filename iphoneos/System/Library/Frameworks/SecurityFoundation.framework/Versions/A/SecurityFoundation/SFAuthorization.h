/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:24 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/SecurityFoundation.framework/Versions/A/SecurityFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SecurityFoundation/SecurityFoundation-Structs.h>
#import <SecurityFoundation/NSCoding.h>

@interface SFAuthorization : NSObject <NSCoding> {

	AuthorizationOpaqueRefRef _authorization;
	id _reserved;

}
+(id)authorization;
+(id)authorizationWithFlags:(unsigned)arg1 rights:(const SCD_Struct_SF1*)arg2 environment:(const SCD_Struct_SF1*)arg3 ;
-(id)ADMExternalForm;
-(char)obtainWithRight:(char*)arg1 flags:(unsigned)arg2 error:(id*)arg3 ;
-(AuthorizationOpaqueRefRef)authorizationRef;
-(id)initWithFlags:(unsigned)arg1 rights:(const SCD_Struct_SF1*)arg2 environment:(const SCD_Struct_SF1*)arg3 ;
-(void)invalidateCredentials;
-(int)permitWithRights:(const SCD_Struct_SF1*)arg1 flags:(unsigned)arg2 environment:(const SCD_Struct_SF1*)arg3 authorizedRights:(SCD_Struct_SF1*)arg4 ;
-(int)permitWithRight:(char*)arg1 flags:(unsigned)arg2 ;
-(void)invalidateCredentials:(char)arg1 ;
-(char)obtainWithRights:(const SCD_Struct_SF1*)arg1 flags:(unsigned)arg2 environment:(const SCD_Struct_SF1*)arg3 authorizedRights:(/*function pointer*/void**)arg4 error:(id*)arg5 ;
-(id)init;
-(void)finalize;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)replacementObjectForPortCoder:(id)arg1 ;
@end

