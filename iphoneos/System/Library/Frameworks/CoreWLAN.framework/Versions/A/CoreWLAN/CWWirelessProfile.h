/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:38 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreWLAN.framework/Versions/A/CoreWLAN
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreWLAN/CoreWLAN-Structs.h>
#import <CoreWLAN/NSCopying.h>
#import <CoreWLAN/NSCoding.h>

@class NSString, NSNumber, CW8021XProfile;

@interface CWWirelessProfile : NSObject <NSCopying, NSCoding> {

	NSString* _ssid;
	NSNumber* _securityMode;

}

@property (copy) NSString * ssid;                                  //@synthesize ssid=_ssid - In the implementation block
@property (retain) NSNumber * securityMode;                        //@synthesize securityMode=_securityMode - In the implementation block
@property (copy) NSString * passphrase; 
@property (retain) CW8021XProfile * user8021XProfile; 
+(id)profile;
-(NSNumber *)securityMode;
-(void)setSecurityMode:(NSNumber *)arg1 ;
-(char)isEqualToProfile:(id)arg1 ;
-(CW8021XProfile *)user8021XProfile;
-(void)setUser8021XProfile:(CW8021XProfile *)arg1 ;
-(void)setSsid:(NSString *)arg1 ;
-(NSString *)passphrase;
-(void)setPassphrase:(NSString *)arg1 ;
-(NSString *)ssid;
-(id)init;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

