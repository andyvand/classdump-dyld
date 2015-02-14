/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:53 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@interface GEOPDSearchSubstringDescriptor : PBCodable <NSCopying> {

	int _beginIndex;
	int _endIndex;
	int _stringType;

}

@property (assign,nonatomic) int stringType;              //@synthesize stringType=_stringType - In the implementation block
@property (assign,nonatomic) int beginIndex;              //@synthesize beginIndex=_beginIndex - In the implementation block
@property (assign,nonatomic) int endIndex;                //@synthesize endIndex=_endIndex - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int)stringType;
-(void)setStringType:(int)arg1 ;
-(int)beginIndex;
-(void)setBeginIndex:(int)arg1 ;
-(int)endIndex;
-(void)setEndIndex:(int)arg1 ;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end

