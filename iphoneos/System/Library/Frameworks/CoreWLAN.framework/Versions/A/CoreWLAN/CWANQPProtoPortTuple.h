/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:38 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreWLAN.framework/Versions/A/CoreWLAN
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreWLAN/CoreWLAN-Structs.h>
#import <CoreWLAN/NSSecureCoding.h>
#import <CoreWLAN/NSCopying.h>

@interface CWANQPProtoPortTuple : NSObject <NSSecureCoding, NSCopying> {

	long long _ipProtocol;
	long long _portNumber;
	long long _status;

}

@property (assign,nonatomic) long long ipProtocol;              //@synthesize ipProtocol=_ipProtocol - In the implementation block
@property (assign,nonatomic) long long portNumber;              //@synthesize portNumber=_portNumber - In the implementation block
@property (assign,nonatomic) long long status;                  //@synthesize status=_status - In the implementation block
+(id)stringForProtoPortStatus:(long long)arg1 ;
+(char)supportsSecureCoding;
-(id)initWithIPProtocol:(long long)arg1 portNumber:(long long)arg2 status:(long long)arg3 ;
-(long long)ipProtocol;
-(void)setIpProtocol:(long long)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)status;
-(void)setStatus:(long long)arg1 ;
-(long long)portNumber;
-(void)setPortNumber:(long long)arg1 ;
@end

