/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:04 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class GEOPhoto, NSString;

@interface GEOUser : PBCodable <NSCopying> {

	GEOPhoto* _image;
	NSString* _name;

}

@property (nonatomic,readonly) NSString * displayableName; 
@property (nonatomic,readonly) char hasName; 
@property (nonatomic,retain) NSString * name;                           //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) char hasImage; 
@property (nonatomic,retain) GEOPhoto * image;                          //@synthesize image=_image - In the implementation block
+(id)userWithYelpJSON:(id)arg1 ;
+(id)keyPathsForValuesAffectingDisplayableName;
-(NSString *)displayableName;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(char)hasName;
-(char)hasImage;
-(id)initWithPlaceDataUser:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)name;
-(GEOPhoto *)image;
-(void)setImage:(GEOPhoto *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end

