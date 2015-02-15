/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:57:39 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /usr/sbin/systemstats
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <systemstats/systemstats-Structs.h>
#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString;

@interface SmcKey : PBCodable {

	double _dvalue;
	long long _s64value;
	unsigned long long _u64value;
	NSData* _bvalue;
	NSString* _key;
	SCD_Struct_Sm7 _has;

}

@property (nonatomic,retain) NSString * key;                           //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) char hasS64value; 
@property (assign,nonatomic) long long s64value;                       //@synthesize s64value=_s64value - In the implementation block
@property (assign,nonatomic) char hasU64value; 
@property (assign,nonatomic) unsigned long long u64value;              //@synthesize u64value=_u64value - In the implementation block
@property (assign,nonatomic) char hasDvalue; 
@property (assign,nonatomic) double dvalue;                            //@synthesize dvalue=_dvalue - In the implementation block
@property (nonatomic,readonly) char hasBvalue; 
@property (nonatomic,retain) NSData * bvalue;                          //@synthesize bvalue=_bvalue - In the implementation block
-(char)hasDvalue;
-(double)dvalue;
-(char)hasU64value;
-(unsigned long long)u64value;
-(char)hasS64value;
-(long long)s64value;
-(void)setBvalue:(NSData *)arg1 ;
-(void)setS64value:(long long)arg1 ;
-(void)setU64value:(unsigned long long)arg1 ;
-(void)setDvalue:(double)arg1 ;
-(char)hasBvalue;
-(NSData *)bvalue;
-(void)setHasS64value:(char)arg1 ;
-(void)setHasU64value:(char)arg1 ;
-(void)setHasDvalue:(char)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)key;
-(id)dictionaryRepresentation;
-(void)setKey:(NSString *)arg1 ;
@end
