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

@class GEOPDAttribution, GEOPDSource, NSMutableArray;

@interface GEOPDComponent : PBCodable <NSCopying> {

	double _timestampFirstSeen;
	GEOPDAttribution* _attribution;
	int _cacheControl;
	GEOPDSource* _source;
	int _startIndex;
	int _status;
	unsigned _ttl;
	int _type;
	NSMutableArray* _values;
	int _valuesAvailable;
	unsigned _version;
	NSMutableArray* _versionDomains;
	SCD_Struct_GE61 _has;

}

@property (assign,nonatomic) char hasTimestampFirstSeen; 
@property (assign,nonatomic) double timestampFirstSeen; 
@property (assign,nonatomic) char hasType; 
@property (assign,nonatomic) int type;                                     //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) char hasStatus; 
@property (assign,nonatomic) int status;                                   //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) char hasTtl; 
@property (assign,nonatomic) unsigned ttl;                                 //@synthesize ttl=_ttl - In the implementation block
@property (assign,nonatomic) char hasStartIndex; 
@property (assign,nonatomic) int startIndex;                               //@synthesize startIndex=_startIndex - In the implementation block
@property (assign,nonatomic) char hasValuesAvailable; 
@property (assign,nonatomic) int valuesAvailable;                          //@synthesize valuesAvailable=_valuesAvailable - In the implementation block
@property (nonatomic,readonly) char hasAttribution; 
@property (nonatomic,retain) GEOPDAttribution * attribution;               //@synthesize attribution=_attribution - In the implementation block
@property (nonatomic,retain) NSMutableArray * values;                      //@synthesize values=_values - In the implementation block
@property (nonatomic,retain) NSMutableArray * versionDomains;              //@synthesize versionDomains=_versionDomains - In the implementation block
@property (assign,nonatomic) char hasVersion; 
@property (assign,nonatomic) unsigned version;                             //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) char hasSource; 
@property (nonatomic,retain) GEOPDSource * source;                         //@synthesize source=_source - In the implementation block
@property (assign,nonatomic) char hasCacheControl; 
@property (assign,nonatomic) int cacheControl;                             //@synthesize cacheControl=_cacheControl - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(void)setHasVersion:(char)arg1 ;
-(char)hasVersion;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(char)hasType;
-(void)setHasType:(char)arg1 ;
-(void)setCacheControl:(int)arg1 ;
-(void)setHasCacheControl:(char)arg1 ;
-(char)hasCacheControl;
-(int)cacheControl;
-(void)setHasStatus:(char)arg1 ;
-(char)hasStatus;
-(unsigned)ttl;
-(NSMutableArray *)versionDomains;
-(double)timestampFirstSeen;
-(char)hasSource;
-(char)hasAttribution;
-(GEOPDAttribution *)attribution;
-(char)hasTimestampFirstSeen;
-(void)setTimestampFirstSeen:(double)arg1 ;
-(void)setAttribution:(GEOPDAttribution *)arg1 ;
-(void)setVersionDomains:(NSMutableArray *)arg1 ;
-(void)addVersionDomain:(id)arg1 ;
-(unsigned long long)valuesCount;
-(void)clearValues;
-(unsigned long long)versionDomainsCount;
-(void)clearVersionDomains;
-(id)versionDomainAtIndex:(unsigned long long)arg1 ;
-(void)setTtl:(unsigned)arg1 ;
-(void)setHasTtl:(char)arg1 ;
-(char)hasTtl;
-(void)setStartIndex:(int)arg1 ;
-(void)setHasStartIndex:(char)arg1 ;
-(char)hasStartIndex;
-(void)setValuesAvailable:(int)arg1 ;
-(void)setHasValuesAvailable:(char)arg1 ;
-(char)hasValuesAvailable;
-(int)startIndex;
-(int)valuesAvailable;
-(void)setHasTimestampFirstSeen:(char)arg1 ;
-(void)dealloc;
-(id)description;
-(NSMutableArray *)values;
-(void)setValues:(NSMutableArray *)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setVersion:(unsigned)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)type;
-(int)status;
-(void)setType:(int)arg1 ;
-(id)dictionaryRepresentation;
-(GEOPDSource *)source;
-(void)setSource:(GEOPDSource *)arg1 ;
-(unsigned)version;
-(void)addValue:(id)arg1 ;
-(void)setStatus:(int)arg1 ;
-(id)valueAtIndex:(unsigned long long)arg1 ;
@end

