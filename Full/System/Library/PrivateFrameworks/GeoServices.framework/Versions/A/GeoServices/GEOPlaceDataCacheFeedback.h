/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:52 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class NSString, GEOPDPlaceRequest;

@interface GEOPlaceDataCacheFeedback : PBCodable <NSCopying> {

	NSString* _bundleIdentifier;
	GEOPDPlaceRequest* _request;

}

@property (nonatomic,readonly) char hasRequest; 
@property (nonatomic,retain) GEOPDPlaceRequest * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) char hasBundleIdentifier; 
@property (nonatomic,retain) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(GEOPDPlaceRequest *)request;
-(void)setRequest:(GEOPDPlaceRequest *)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(char)hasRequest;
-(char)hasBundleIdentifier;
-(void)dealloc;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)bundleIdentifier;
-(id)dictionaryRepresentation;
@end

