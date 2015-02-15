/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:49 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreWLAN.framework/Versions/A/CoreWLAN
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreWLAN/CoreWLAN-Structs.h>
#import <CoreWLAN/CWANQPElement.h>
#import <CoreWLAN/NSSecureCoding.h>
#import <CoreWLAN/NSCopying.h>

@interface CWANQPHS20CapabilityList : CWANQPElement <NSSecureCoding, NSCopying> {

	char _supportsHSQueryList;
	char _supportsHSCapabilityList;
	char _supportsOperatorFriendlyName;
	char _supportsWANMetrics;
	char _supportsConnectionCapability;
	char _supportsNAIHomeRealmQuery;
	char _supportsOperatingClassIndication;

}

@property (assign,nonatomic) char supportsHSQueryList;                           //@synthesize supportsHSQueryList=_supportsHSQueryList - In the implementation block
@property (assign,nonatomic) char supportsHSCapabilityList;                      //@synthesize supportsHSCapabilityList=_supportsHSCapabilityList - In the implementation block
@property (assign,nonatomic) char supportsOperatorFriendlyName;                  //@synthesize supportsOperatorFriendlyName=_supportsOperatorFriendlyName - In the implementation block
@property (assign,nonatomic) char supportsWANMetrics;                            //@synthesize supportsWANMetrics=_supportsWANMetrics - In the implementation block
@property (assign,nonatomic) char supportsConnectionCapability;                  //@synthesize supportsConnectionCapability=_supportsConnectionCapability - In the implementation block
@property (assign,nonatomic) char supportsNAIHomeRealmQuery;                     //@synthesize supportsNAIHomeRealmQuery=_supportsNAIHomeRealmQuery - In the implementation block
@property (assign,nonatomic) char supportsOperatingClassIndication;              //@synthesize supportsOperatingClassIndication=_supportsOperatingClassIndication - In the implementation block
+(char)supportsSecureCoding;
-(id)initWithNetwork:(id)arg1 timestamp:(id)arg2 anqpResult:(id)arg3 ;
-(char)supportsHSQueryList;
-(void)setSupportsHSQueryList:(char)arg1 ;
-(char)supportsHSCapabilityList;
-(void)setSupportsHSCapabilityList:(char)arg1 ;
-(char)supportsOperatorFriendlyName;
-(void)setSupportsOperatorFriendlyName:(char)arg1 ;
-(char)supportsWANMetrics;
-(void)setSupportsWANMetrics:(char)arg1 ;
-(char)supportsConnectionCapability;
-(void)setSupportsConnectionCapability:(char)arg1 ;
-(char)supportsNAIHomeRealmQuery;
-(void)setSupportsNAIHomeRealmQuery:(char)arg1 ;
-(char)supportsOperatingClassIndication;
-(void)setSupportsOperatingClassIndication:(char)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

