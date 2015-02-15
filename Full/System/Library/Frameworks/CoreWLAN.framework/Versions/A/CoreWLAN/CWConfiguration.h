/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:38 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreWLAN.framework/Versions/A/CoreWLAN
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreWLAN/CoreWLAN-Structs.h>
#import <CoreWLAN/NSCopying.h>
#import <CoreWLAN/NSMutableCopying.h>
#import <CoreWLAN/NSSecureCoding.h>

@class NSDictionary, NSOrderedSet;

@interface CWConfiguration : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	NSDictionary* _info;
	NSOrderedSet* _networkProfiles;
	char _rememberJoinedNetworks;
	char _requireAdministratorForAssociation;
	char _requireAdministratorForPower;
	char _requireAdministratorForIBSSMode;

}

@property (copy) NSOrderedSet * networkProfiles;                         //@synthesize networkProfiles=_networkProfiles - In the implementation block
@property (assign) char requireAdministratorForAssociation;              //@synthesize requireAdministratorForAssociation=_requireAdministratorForAssociation - In the implementation block
@property (assign) char requireAdministratorForPower;                    //@synthesize requireAdministratorForPower=_requireAdministratorForPower - In the implementation block
@property (assign) char requireAdministratorForIBSSMode;                 //@synthesize requireAdministratorForIBSSMode=_requireAdministratorForIBSSMode - In the implementation block
@property (assign) char rememberJoinedNetworks;                          //@synthesize rememberJoinedNetworks=_rememberJoinedNetworks - In the implementation block
@property (copy) NSDictionary * info;                                    //@synthesize info=_info - In the implementation block
+(id)configuration;
+(id)configurationForInterfaceWithName:(id)arg1 ;
+(id)configurationWithConfiguration:(id)arg1 ;
+(char)supportsSecureCoding;
-(char)requireAdministratorForAssociation;
-(NSOrderedSet *)networkProfiles;
-(void)setNetworkProfiles:(NSOrderedSet *)arg1 ;
-(id)initForInterfaceWithName:(id)arg1 ;
-(void)setRequireAdministratorForAssociation:(char)arg1 ;
-(char)requireAdministratorForPower;
-(void)setRequireAdministratorForPower:(char)arg1 ;
-(char)requireAdministratorForIBSSMode;
-(void)setRequireAdministratorForIBSSMode:(char)arg1 ;
-(char)rememberJoinedNetworks;
-(void)setRememberJoinedNetworks:(char)arg1 ;
-(char)isEqualToConfiguration:(id)arg1 ;
-(id)networkProfileWithSSID:(id)arg1 securityType:(unsigned long long)arg2 ;
-(char)commitForInterfaceWithName:(id)arg1 authorization:(id)arg2 error:(out id*)arg3 ;
-(id)preferredNetworks;
-(id)initWithInfo:(id)arg1 ;
-(NSDictionary *)info;
-(void)setInfo:(NSDictionary *)arg1 ;
-(id)initWithConfiguration:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(char)conformsToProtocol:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
@end

