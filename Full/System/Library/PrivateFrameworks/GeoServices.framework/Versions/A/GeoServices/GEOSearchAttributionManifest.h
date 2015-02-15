/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:05 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class NSMutableArray;

@interface GEOSearchAttributionManifest : PBCodable <NSCopying> {

	NSMutableArray* _searchAttributionSources;

}

@property (nonatomic,retain) NSMutableArray * searchAttributionSources;              //@synthesize searchAttributionSources=_searchAttributionSources - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setSearchAttributionSources:(NSMutableArray *)arg1 ;
-(void)addSearchAttributionSources:(id)arg1 ;
-(unsigned long long)searchAttributionSourcesCount;
-(void)clearSearchAttributionSources;
-(id)searchAttributionSourcesAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)searchAttributionSources;
-(void)dealloc;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end

