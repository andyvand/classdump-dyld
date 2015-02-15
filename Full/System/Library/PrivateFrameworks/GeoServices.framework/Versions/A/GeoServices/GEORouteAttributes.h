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

@class NSString;

@interface GEORouteAttributes : PBCodable <NSCopying> {

	SCD_Struct_GE84 _timepoint;
	SCD_Struct_GE57* _additionalTransportTypes;
	int _basicPointsToBeIncluded;
	int _mainTransportType;
	NSString* _phoneticLocaleIdentifier;
	int _trafficType;
	unsigned _walkingLimitMeters;
	char _includeContingencyRoutes;
	char _includeHistoricTravelTime;
	char _includeLaneGuidance;
	char _includeManeuverIcons;
	char _includePhonetics;
	char _includeSubsteps;
	char _includeTrafficAlongRoute;
	char _includeTrafficIncidents;
	char _includeZilchPoints;
	SCD_Struct_GE121 _has;

}

@property (assign,nonatomic) char hasMainTransportType; 
@property (assign,nonatomic) int mainTransportType;                                           //@synthesize mainTransportType=_mainTransportType - In the implementation block
@property (assign,nonatomic) char hasIncludePhonetics; 
@property (assign,nonatomic) char includePhonetics;                                           //@synthesize includePhonetics=_includePhonetics - In the implementation block
@property (assign,nonatomic) char hasIncludeManeuverIcons; 
@property (assign,nonatomic) char includeManeuverIcons;                                       //@synthesize includeManeuverIcons=_includeManeuverIcons - In the implementation block
@property (assign,nonatomic) char hasIncludeZilchPoints; 
@property (assign,nonatomic) char includeZilchPoints;                                         //@synthesize includeZilchPoints=_includeZilchPoints - In the implementation block
@property (assign,nonatomic) char hasIncludeContingencyRoutes; 
@property (assign,nonatomic) char includeContingencyRoutes;                                   //@synthesize includeContingencyRoutes=_includeContingencyRoutes - In the implementation block
@property (assign,nonatomic) char hasIncludeLaneGuidance; 
@property (assign,nonatomic) char includeLaneGuidance;                                        //@synthesize includeLaneGuidance=_includeLaneGuidance - In the implementation block
@property (assign,nonatomic) char hasBasicPointsToBeIncluded; 
@property (assign,nonatomic) int basicPointsToBeIncluded;                                     //@synthesize basicPointsToBeIncluded=_basicPointsToBeIncluded - In the implementation block
@property (assign,nonatomic) char hasTrafficType; 
@property (assign,nonatomic) int trafficType;                                                 //@synthesize trafficType=_trafficType - In the implementation block
@property (nonatomic,readonly) char hasPhoneticLocaleIdentifier; 
@property (nonatomic,retain) NSString * phoneticLocaleIdentifier;                             //@synthesize phoneticLocaleIdentifier=_phoneticLocaleIdentifier - In the implementation block
@property (assign,nonatomic) char hasIncludeTrafficAlongRoute; 
@property (assign,nonatomic) char includeTrafficAlongRoute;                                   //@synthesize includeTrafficAlongRoute=_includeTrafficAlongRoute - In the implementation block
@property (assign,nonatomic) char hasTimepoint; 
@property (assign,nonatomic) SCD_Struct_GE85 timepoint;                                       //@synthesize timepoint=_timepoint - In the implementation block
@property (assign,nonatomic) char hasIncludeHistoricTravelTime; 
@property (assign,nonatomic) char includeHistoricTravelTime;                                  //@synthesize includeHistoricTravelTime=_includeHistoricTravelTime - In the implementation block
@property (assign,nonatomic) char hasIncludeSubsteps; 
@property (assign,nonatomic) char includeSubsteps;                                            //@synthesize includeSubsteps=_includeSubsteps - In the implementation block
@property (assign,nonatomic) char hasIncludeTrafficIncidents; 
@property (assign,nonatomic) char includeTrafficIncidents;                                    //@synthesize includeTrafficIncidents=_includeTrafficIncidents - In the implementation block
@property (assign,nonatomic) char hasWalkingLimitMeters; 
@property (assign,nonatomic) unsigned walkingLimitMeters;                                     //@synthesize walkingLimitMeters=_walkingLimitMeters - In the implementation block
@property (nonatomic,readonly) unsigned long long additionalTransportTypesCount; 
@property (nonatomic,readonly) int* additionalTransportTypes; 
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setPhoneticLocaleIdentifier:(NSString *)arg1 ;
-(char)hasPhoneticLocaleIdentifier;
-(NSString *)phoneticLocaleIdentifier;
-(void)setIncludePhonetics:(char)arg1 ;
-(void)setHasIncludePhonetics:(char)arg1 ;
-(char)hasIncludePhonetics;
-(char)includePhonetics;
-(void)setTimepoint:(SCD_Struct_GE85)arg1 ;
-(void)setHasTimepoint:(char)arg1 ;
-(char)hasTimepoint;
-(void)setIncludeHistoricTravelTime:(char)arg1 ;
-(void)setHasIncludeHistoricTravelTime:(char)arg1 ;
-(char)hasIncludeHistoricTravelTime;
-(SCD_Struct_GE85)timepoint;
-(char)includeHistoricTravelTime;
-(void)setBasicPointsToBeIncluded:(int)arg1 ;
-(void)setIncludeZilchPoints:(char)arg1 ;
-(void)setIncludeManeuverIcons:(char)arg1 ;
-(void)setIncludeLaneGuidance:(char)arg1 ;
-(void)setTrafficType:(int)arg1 ;
-(void)setIncludeTrafficAlongRoute:(char)arg1 ;
-(void)setIncludeTrafficIncidents:(char)arg1 ;
-(void)setMainTransportType:(int)arg1 ;
-(unsigned long long)additionalTransportTypesCount;
-(void)clearAdditionalTransportTypes;
-(int)additionalTransportTypeAtIndex:(unsigned long long)arg1 ;
-(void)addAdditionalTransportType:(int)arg1 ;
-(int)mainTransportType;
-(void)setHasMainTransportType:(char)arg1 ;
-(char)hasMainTransportType;
-(char)includeManeuverIcons;
-(void)setHasIncludeManeuverIcons:(char)arg1 ;
-(char)hasIncludeManeuverIcons;
-(char)includeZilchPoints;
-(void)setHasIncludeZilchPoints:(char)arg1 ;
-(char)hasIncludeZilchPoints;
-(char)includeContingencyRoutes;
-(void)setIncludeContingencyRoutes:(char)arg1 ;
-(void)setHasIncludeContingencyRoutes:(char)arg1 ;
-(char)hasIncludeContingencyRoutes;
-(char)includeLaneGuidance;
-(void)setHasIncludeLaneGuidance:(char)arg1 ;
-(char)hasIncludeLaneGuidance;
-(int)basicPointsToBeIncluded;
-(void)setHasBasicPointsToBeIncluded:(char)arg1 ;
-(char)hasBasicPointsToBeIncluded;
-(int)trafficType;
-(void)setHasTrafficType:(char)arg1 ;
-(char)hasTrafficType;
-(char)includeTrafficAlongRoute;
-(void)setHasIncludeTrafficAlongRoute:(char)arg1 ;
-(char)hasIncludeTrafficAlongRoute;
-(char)includeSubsteps;
-(void)setIncludeSubsteps:(char)arg1 ;
-(void)setHasIncludeSubsteps:(char)arg1 ;
-(char)hasIncludeSubsteps;
-(char)includeTrafficIncidents;
-(void)setHasIncludeTrafficIncidents:(char)arg1 ;
-(char)hasIncludeTrafficIncidents;
-(unsigned)walkingLimitMeters;
-(void)setWalkingLimitMeters:(unsigned)arg1 ;
-(void)setHasWalkingLimitMeters:(char)arg1 ;
-(char)hasWalkingLimitMeters;
-(int*)additionalTransportTypes;
-(void)setAdditionalTransportTypes:(int*)arg1 count:(unsigned long long)arg2 ;
-(void)dealloc;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end

