/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 10:35:27 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Utilities/AirPort Utility.app/Contents/MacOS/AirPort Utility
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AirPort Utility/AirPort Utility-Structs.h>
#import <AirPort Utility/AUSubproperty.h>
#import <AirPort Utility/NSCopying.h>

@class NSString, NSNumber;

@interface AUNetworkOptions : AUSubproperty <NSCopying> {

	NSString* dhcpStartRange;
	NSString* dhcpStartRangePrefix;
	NSString* dhcpStart3rdOctet;
	NSString* dhcpStart4thOctet;
	NSString* dhcpEndRange;
	NSString* dhcpEnd4thOctet;
	NSString* guestDHCPStartRange;
	NSString* guestDHCPStartRangePrefix;
	NSString* guestDHCPStart3rdOctet;
	NSString* guestDHCPEndRange;
	NSString* guestDHCPHostRange;
	char enableNATPMP;
	char enableDefaultHost;
	NSString* defaultHost;
	NSNumber* dhcpLeaseLength;
	NSNumber* dhcpLeaseUnits;
	char supportsIPv6BlockIncoming;
	char showIPv6BlockIncoming;
	char canEnableIPv6BlockIncoming;
	char ipV6BlockIncoming;
	char supportsAllowTeredo;
	char ipV6AllowTeredo;
	char supportsAllowIPSec;
	char ipV6AllowIPSec;
	char supportsIGMPSnooping;
	char enableIGMPSnooping;

}

@property (nonatomic,retain) NSString * dhcpStartRange; 
@property (nonatomic,retain) NSString * dhcpStartRangePrefix; 
@property (nonatomic,retain) NSString * dhcpStart3rdOctet; 
@property (nonatomic,retain) NSString * dhcpStart4thOctet; 
@property (nonatomic,retain) NSString * dhcpEndRange; 
@property (nonatomic,retain) NSString * dhcpEnd4thOctet; 
@property (nonatomic,retain) NSString * guestDHCPStartRange; 
@property (nonatomic,retain) NSString * guestDHCPStartRangePrefix; 
@property (nonatomic,retain) NSString * guestDHCPStart3rdOctet; 
@property (nonatomic,retain) NSString * guestDHCPEndRange; 
@property (nonatomic,retain) NSString * guestDHCPHostRange; 
@property (assign,nonatomic) char enableNATPMP; 
@property (assign,nonatomic) char enableDefaultHost; 
@property (nonatomic,retain) NSString * defaultHost; 
@property (nonatomic,retain) NSNumber * dhcpLeaseLength; 
@property (nonatomic,retain) NSNumber * dhcpLeaseUnits; 
@property (assign,nonatomic) char supportsIPv6BlockIncoming; 
@property (assign,nonatomic) char showIPv6BlockIncoming; 
@property (assign,nonatomic) char canEnableIPv6BlockIncoming; 
@property (assign,nonatomic) char ipV6BlockIncoming; 
@property (assign,nonatomic) char supportsAllowTeredo; 
@property (assign,nonatomic) char ipV6AllowTeredo; 
@property (assign,nonatomic) char supportsAllowIPSec; 
@property (assign,nonatomic) char ipV6AllowIPSec; 
@property (assign,nonatomic) char supportsIGMPSnooping; 
@property (assign,nonatomic) char enableIGMPSnooping; 
-(NSString *)dhcpStartRange;
-(NSString *)dhcpEndRange;
-(void)setDefaultHost:(NSString *)arg1 ;
-(NSString *)dhcpStart3rdOctet;
-(NSString *)dhcpStart4thOctet;
-(NSString *)dhcpEnd4thOctet;
-(NSNumber *)dhcpLeaseUnits;
-(void)setDhcpStartRange:(NSString *)arg1 ;
-(void)setDhcpStartRangePrefix:(NSString *)arg1 ;
-(void)setDhcpStart3rdOctet:(NSString *)arg1 ;
-(void)setDhcpStart4thOctet:(NSString *)arg1 ;
-(void)setDhcpEndRange:(NSString *)arg1 ;
-(void)setDhcpEnd4thOctet:(NSString *)arg1 ;
-(void)setEnableNATPMP:(char)arg1 ;
-(void)setEnableDefaultHost:(char)arg1 ;
-(void)setDhcpLeaseUnits:(NSNumber *)arg1 ;
-(void)setDhcpLeaseLength:(NSNumber *)arg1 ;
-(void)setSupportsIPv6BlockIncoming:(char)arg1 ;
-(char)supportsIPv6BlockIncoming;
-(void)setShowIPv6BlockIncoming:(char)arg1 ;
-(char)showIPv6BlockIncoming;
-(void)setCanEnableIPv6BlockIncoming:(char)arg1 ;
-(char)canEnableIPv6BlockIncoming;
-(void)setIpV6BlockIncoming:(char)arg1 ;
-(void)setSupportsAllowTeredo:(char)arg1 ;
-(char)supportsAllowTeredo;
-(void)setIpV6AllowTeredo:(char)arg1 ;
-(void)setSupportsAllowIPSec:(char)arg1 ;
-(char)supportsAllowIPSec;
-(void)setIpV6AllowIPSec:(char)arg1 ;
-(char)ipV6BlockIncoming;
-(void)setGuestDHCPStartRange:(NSString *)arg1 ;
-(void)setGuestDHCPStartRangePrefix:(NSString *)arg1 ;
-(void)setGuestDHCPStart3rdOctet:(NSString *)arg1 ;
-(void)setGuestDHCPEndRange:(NSString *)arg1 ;
-(char)supportsIGMPSnooping;
-(void)setSupportsIGMPSnooping:(char)arg1 ;
-(void)setEnableIGMPSnooping:(char)arg1 ;
-(NSString *)guestDHCPStart3rdOctet;
-(NSString *)guestDHCPStartRangePrefix;
-(NSString *)guestDHCPStartRange;
-(NSString *)dhcpStartRangePrefix;
-(NSString *)guestDHCPEndRange;
-(char)enableDefaultHost;
-(char)enableNATPMP;
-(NSNumber *)dhcpLeaseLength;
-(char)ipV6AllowTeredo;
-(char)ipV6AllowIPSec;
-(char)enableIGMPSnooping;
-(void)setGuestDHCPHostRange:(NSString *)arg1 ;
-(NSString *)guestDHCPHostRange;
-(NSString *)defaultHost;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
