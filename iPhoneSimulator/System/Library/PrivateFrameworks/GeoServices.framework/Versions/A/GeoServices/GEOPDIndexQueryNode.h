/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:51 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class NSString, NSMutableArray;

@interface GEOPDIndexQueryNode : PBCodable <NSCopying> {

	NSString* _field;
	NSMutableArray* _operands;
	int _type;
	NSString* _value;

}

@property (assign,nonatomic) int type;                               //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) char hasField; 
@property (nonatomic,retain) NSString * field;                       //@synthesize field=_field - In the implementation block
@property (nonatomic,readonly) char hasValue; 
@property (nonatomic,retain) NSString * value;                       //@synthesize value=_value - In the implementation block
@property (nonatomic,retain) NSMutableArray * operands;              //@synthesize operands=_operands - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(char)hasValue;
-(char)hasField;
-(void)setOperands:(NSMutableArray *)arg1 ;
-(unsigned long long)operandsCount;
-(void)clearOperands;
-(NSMutableArray *)operands;
-(void)addOperand:(id)arg1 ;
-(id)operandAtIndex:(unsigned long long)arg1 ;
-(void)dealloc;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)type;
-(void)setValue:(NSString *)arg1 ;
-(void)setType:(int)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)value;
-(NSString *)field;
-(void)setField:(NSString *)arg1 ;
@end

