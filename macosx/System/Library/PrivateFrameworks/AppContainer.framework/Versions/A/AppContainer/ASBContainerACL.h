/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:02:02 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/AppContainer.framework/Versions/A/AppContainer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppContainer/AppContainer-Structs.h>
#import <AppContainer/NSFastEnumeration.h>

@class NSSet;

@interface ASBContainerACL : NSObject <NSFastEnumeration> {

	NSSet* _requirements;

}
+(id)containerACLWithCodeRequirements:(id)arg1 ;
+(id)containerACLWithCodeRequirement:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(unsigned long long)count;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_AS2*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)initWithCodeRequirementData:(id)arg1 ;
-(id)initWithCodeRequirements:(id)arg1 ;
-(id)containerACLByAddingCodeRequirement:(id)arg1 ;
-(id)containerACLByRemovingCodeRequirement:(id)arg1 ;
-(id)requirementsData;
-(id)requirements;
-(char)allowsCode:(id)arg1 ;
-(char)containsRequirement:(id)arg1 ;
@end

