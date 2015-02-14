/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:51 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreWLAN.framework/Versions/A/CoreWLAN
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreWLAN/CoreWLAN-Structs.h>
#import <CoreWLAN/CWANQPElement.h>
#import <CoreWLAN/NSSecureCoding.h>
#import <CoreWLAN/NSCopying.h>

@class NSArray;

@interface CWANQPConnectionCapability : CWANQPElement <NSSecureCoding, NSCopying> {

	NSArray* _protoPortList;

}

@property (nonatomic,copy) NSArray * protoPortList;              //@synthesize protoPortList=_protoPortList - In the implementation block
+(char)supportsSecureCoding;
-(id)initWithNetwork:(id)arg1 timestamp:(id)arg2 anqpResult:(id)arg3 ;
-(NSArray *)protoPortList;
-(void)setProtoPortList:(NSArray *)arg1 ;
-(void)dealloc;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

