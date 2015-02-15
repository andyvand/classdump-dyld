/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:38 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreWLAN.framework/Versions/A/CoreWLAN
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreWLAN/CoreWLAN-Structs.h>
#import <CoreWLAN/NSSecureCoding.h>
#import <CoreWLAN/NSCopying.h>

@class NSDate, CWNetwork, NSDictionary;

@interface CWANQPElement : NSObject <NSSecureCoding, NSCopying> {

	NSDate* _timestamp;
	CWNetwork* _network;
	unsigned long long _type;
	NSDictionary* _anqpResult;

}

@property (nonatomic,copy) NSDate * timestamp;                     //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,copy) CWNetwork * network;                    //@synthesize network=_network - In the implementation block
@property (assign,nonatomic) unsigned long long type;              //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSDictionary * anqpResult;              //@synthesize anqpResult=_anqpResult - In the implementation block
+(char)supportsSecureCoding;
-(id)initWithNetwork:(id)arg1 timestamp:(id)arg2 type:(unsigned long long)arg3 anqpResult:(id)arg4 ;
-(CWNetwork *)network;
-(NSDictionary *)anqpResult;
-(char)isEqualtoANQPElement:(id)arg1 ;
-(void)setNetwork:(CWNetwork *)arg1 ;
-(void)setAnqpResult:(NSDictionary *)arg1 ;
-(void)setTimestamp:(NSDate *)arg1 ;
-(void)dealloc;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(char)conformsToProtocol:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDate *)timestamp;
-(unsigned long long)type;
-(void)setType:(unsigned long long)arg1 ;
-(id)typeString;
@end

