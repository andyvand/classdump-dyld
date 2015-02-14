/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:10 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class GEOPDComponentFilter;

@interface GEOPDComponentInfo : PBCodable <NSCopying> {

	unsigned _count;
	GEOPDComponentFilter* _filter;
	unsigned _startIndex;
	int _type;
	int _urgency;
	char _includeSource;
	SCD_Struct_GE71 _has;

}

@property (assign,nonatomic) char hasType; 
@property (assign,nonatomic) int type;                                   //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) char hasStartIndex; 
@property (assign,nonatomic) unsigned startIndex;                        //@synthesize startIndex=_startIndex - In the implementation block
@property (assign,nonatomic) char hasCount; 
@property (assign,nonatomic) unsigned count;                             //@synthesize count=_count - In the implementation block
@property (nonatomic,readonly) char hasFilter; 
@property (nonatomic,retain) GEOPDComponentFilter * filter;              //@synthesize filter=_filter - In the implementation block
@property (assign,nonatomic) char hasIncludeSource; 
@property (assign,nonatomic) char includeSource;                         //@synthesize includeSource=_includeSource - In the implementation block
@property (assign,nonatomic) char hasUrgency; 
@property (assign,nonatomic) int urgency;                                //@synthesize urgency=_urgency - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(GEOPDComponentFilter *)filter;
-(char)hasType;
-(void)setHasType:(char)arg1 ;
-(void)setStartIndex:(unsigned)arg1 ;
-(void)setHasStartIndex:(char)arg1 ;
-(char)hasStartIndex;
-(unsigned)startIndex;
-(void)setFilter:(GEOPDComponentFilter *)arg1 ;
-(void)setHasCount:(char)arg1 ;
-(char)hasCount;
-(char)hasFilter;
-(void)setIncludeSource:(char)arg1 ;
-(void)setHasIncludeSource:(char)arg1 ;
-(char)hasIncludeSource;
-(void)setUrgency:(int)arg1 ;
-(void)setHasUrgency:(char)arg1 ;
-(char)hasUrgency;
-(char)includeSource;
-(int)urgency;
-(id)initWithType:(int)arg1 count:(unsigned)arg2 ;
-(void)dealloc;
-(unsigned)count;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)type;
-(void)setType:(int)arg1 ;
-(id)dictionaryRepresentation;
-(void)setCount:(unsigned)arg1 ;
@end

