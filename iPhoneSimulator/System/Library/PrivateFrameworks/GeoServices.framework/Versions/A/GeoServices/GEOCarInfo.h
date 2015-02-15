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

@class NSString;

@interface GEOCarInfo : PBCodable <NSCopying> {

	SCD_Struct_GE216 _screenResolution;
	int _interactionModel;
	NSString* _manufacturer;
	NSString* _model;
	SCD_Struct_GE5 _has;

}

@property (assign,nonatomic) char hasInteractionModel; 
@property (assign,nonatomic) int interactionModel;                           //@synthesize interactionModel=_interactionModel - In the implementation block
@property (nonatomic,readonly) char hasManufacturer; 
@property (nonatomic,retain) NSString * manufacturer;                        //@synthesize manufacturer=_manufacturer - In the implementation block
@property (nonatomic,readonly) char hasModel; 
@property (nonatomic,retain) NSString * model;                               //@synthesize model=_model - In the implementation block
@property (assign,nonatomic) char hasScreenResolution; 
@property (assign,nonatomic) SCD_Struct_GE217 screenResolution;              //@synthesize screenResolution=_screenResolution - In the implementation block
+(id)carInfoWithTraits:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setModel:(NSString *)arg1 ;
-(NSString *)model;
-(id)initWithTraits:(id)arg1 ;
-(void)setInteractionModel:(int)arg1 ;
-(void)setManufacturer:(NSString *)arg1 ;
-(void)setScreenResolution:(SCD_Struct_GE217)arg1 ;
-(void)setHasInteractionModel:(char)arg1 ;
-(char)hasInteractionModel;
-(char)hasManufacturer;
-(char)hasModel;
-(void)setHasScreenResolution:(char)arg1 ;
-(char)hasScreenResolution;
-(int)interactionModel;
-(NSString *)manufacturer;
-(SCD_Struct_GE217)screenResolution;
-(void)dealloc;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end

