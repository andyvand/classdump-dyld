/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:02:03 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Collaboration.framework/Versions/A/Collaboration
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Collaboration/Collaboration-Structs.h>
#import <Collaboration/NSCoding.h>
#import <Collaboration/NSCopying.h>

@interface CBIdentity : NSObject <NSCoding, NSCopying> {

	id _reserved[4];

}
+(id)identityWithCSIdentity:(CSIdentityRef)arg1 ;
+(id)executeQueryAndRelease:(CSIdentityQueryRef)arg1 ;
+(id)userIdentityWithName:(id)arg1 authority:(id)arg2 ;
+(id)groupIdentityWithName:(id)arg1 authority:(id)arg2 ;
+(id)_allocSubclassWithZone:(NSZone*)arg1 forCSIdentity:(CSIdentityRef)arg2 ;
+(id)emailAddressesForPerson:(id)arg1 ;
+(id)CBIdentitiesFromCSIdentities:(id)arg1 ;
+(id)identityWithName:(id)arg1 authority:(id)arg2 ;
+(id)identityWithUUIDString:(id)arg1 authority:(id)arg2 ;
+(id)identityWithPersistentReference:(id)arg1 ;
+(id)userIdentityForPerson:(id)arg1 createIfNecessary:(char)arg2 ;
+(id)fullNameForPerson:(id)arg1 ;
-(CSIdentityRef)CSIdentity;
-(id)_initWithCSIdentity:(CSIdentityRef)arg1 ;
-(id)persistentReference;
-(id)linkedIdentityAuthorities;
-(id)authority;
-(id)posixName;
-(char)isMemberOfGroup:(id)arg1 ;
-(void)delete;
-(id)aliases;
-(id)UUIDString;
-(id)init;
-(void)dealloc;
-(char)commit;
-(id)description;
-(char)isHidden;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)image;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPassword:(id)arg1 ;
-(id)emailAddress;
-(id)fullName;
@end

