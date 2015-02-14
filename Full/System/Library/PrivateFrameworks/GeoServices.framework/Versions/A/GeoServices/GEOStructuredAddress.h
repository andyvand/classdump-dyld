/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:52 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/GEOURLSerializable.h>
#import <GeoServices/NSCopying.h>

@class NSString, NSMutableArray;

@interface GEOStructuredAddress : PBCodable <GEOURLSerializable, NSCopying> {

	SCD_Struct_GE80* _geoIds;
	NSString* _administrativeArea;
	NSString* _administrativeAreaCode;
	NSMutableArray* _areaOfInterests;
	NSString* _country;
	NSString* _countryCode;
	NSMutableArray* _dependentLocalitys;
	NSString* _fullThoroughfare;
	NSString* _inlandWater;
	NSString* _locality;
	NSString* _ocean;
	NSString* _postCode;
	NSString* _postCodeExtension;
	NSString* _postCodeFull;
	NSString* _premise;
	NSString* _premises;
	NSString* _subAdministrativeArea;
	NSString* _subLocality;
	NSMutableArray* _subPremises;
	NSString* _subThoroughfare;
	NSString* _thoroughfare;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) char hasCountry; 
@property (nonatomic,retain) NSString * country;                               //@synthesize country=_country - In the implementation block
@property (nonatomic,readonly) char hasCountryCode; 
@property (nonatomic,retain) NSString * countryCode;                           //@synthesize countryCode=_countryCode - In the implementation block
@property (nonatomic,readonly) char hasAdministrativeArea; 
@property (nonatomic,retain) NSString * administrativeArea;                    //@synthesize administrativeArea=_administrativeArea - In the implementation block
@property (nonatomic,readonly) char hasAdministrativeAreaCode; 
@property (nonatomic,retain) NSString * administrativeAreaCode;                //@synthesize administrativeAreaCode=_administrativeAreaCode - In the implementation block
@property (nonatomic,readonly) char hasSubAdministrativeArea; 
@property (nonatomic,retain) NSString * subAdministrativeArea;                 //@synthesize subAdministrativeArea=_subAdministrativeArea - In the implementation block
@property (nonatomic,readonly) char hasLocality; 
@property (nonatomic,retain) NSString * locality;                              //@synthesize locality=_locality - In the implementation block
@property (nonatomic,readonly) char hasPostCode; 
@property (nonatomic,retain) NSString * postCode;                              //@synthesize postCode=_postCode - In the implementation block
@property (nonatomic,readonly) char hasSubLocality; 
@property (nonatomic,retain) NSString * subLocality;                           //@synthesize subLocality=_subLocality - In the implementation block
@property (nonatomic,readonly) char hasPremises; 
@property (nonatomic,retain) NSString * premises;                              //@synthesize premises=_premises - In the implementation block
@property (nonatomic,readonly) char hasThoroughfare; 
@property (nonatomic,retain) NSString * thoroughfare;                          //@synthesize thoroughfare=_thoroughfare - In the implementation block
@property (nonatomic,readonly) char hasSubThoroughfare; 
@property (nonatomic,retain) NSString * subThoroughfare;                       //@synthesize subThoroughfare=_subThoroughfare - In the implementation block
@property (nonatomic,readonly) char hasFullThoroughfare; 
@property (nonatomic,retain) NSString * fullThoroughfare;                      //@synthesize fullThoroughfare=_fullThoroughfare - In the implementation block
@property (nonatomic,readonly) char hasPostCodeExtension; 
@property (nonatomic,retain) NSString * postCodeExtension;                     //@synthesize postCodeExtension=_postCodeExtension - In the implementation block
@property (nonatomic,retain) NSMutableArray * areaOfInterests;                 //@synthesize areaOfInterests=_areaOfInterests - In the implementation block
@property (nonatomic,readonly) char hasInlandWater; 
@property (nonatomic,retain) NSString * inlandWater;                           //@synthesize inlandWater=_inlandWater - In the implementation block
@property (nonatomic,readonly) char hasOcean; 
@property (nonatomic,retain) NSString * ocean;                                 //@synthesize ocean=_ocean - In the implementation block
@property (nonatomic,retain) NSMutableArray * dependentLocalitys;              //@synthesize dependentLocalitys=_dependentLocalitys - In the implementation block
@property (nonatomic,readonly) char hasPremise; 
@property (nonatomic,retain) NSString * premise;                               //@synthesize premise=_premise - In the implementation block
@property (nonatomic,retain) NSMutableArray * subPremises;                     //@synthesize subPremises=_subPremises - In the implementation block
@property (nonatomic,readonly) char hasPostCodeFull; 
@property (nonatomic,retain) NSString * postCodeFull;                          //@synthesize postCodeFull=_postCodeFull - In the implementation block
@property (nonatomic,readonly) unsigned long long geoIdsCount; 
@property (nonatomic,readonly) long long* geoIds; 
-(NSString *)countryCode;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setCountry:(NSString *)arg1 ;
-(void)setCountryCode:(NSString *)arg1 ;
-(void)setAdministrativeArea:(NSString *)arg1 ;
-(void)setSubAdministrativeArea:(NSString *)arg1 ;
-(void)setLocality:(NSString *)arg1 ;
-(void)setSubLocality:(NSString *)arg1 ;
-(void)setPremises:(NSString *)arg1 ;
-(void)setThoroughfare:(NSString *)arg1 ;
-(void)setSubThoroughfare:(NSString *)arg1 ;
-(void)setFullThoroughfare:(NSString *)arg1 ;
-(void)setPostCode:(NSString *)arg1 ;
-(void)setAreaOfInterests:(NSMutableArray *)arg1 ;
-(void)setInlandWater:(NSString *)arg1 ;
-(void)setOcean:(NSString *)arg1 ;
-(id)initWithAddressDictionary:(id)arg1 ;
-(char)hasCountry;
-(NSString *)country;
-(char)hasCountryCode;
-(char)hasAdministrativeAreaCode;
-(NSString *)administrativeAreaCode;
-(char)hasAdministrativeArea;
-(NSString *)administrativeArea;
-(char)hasSubAdministrativeArea;
-(NSString *)subAdministrativeArea;
-(char)hasLocality;
-(NSString *)locality;
-(char)hasSubLocality;
-(NSString *)subLocality;
-(char)hasPremises;
-(NSString *)premises;
-(char)hasFullThoroughfare;
-(NSString *)fullThoroughfare;
-(char)hasThoroughfare;
-(NSString *)thoroughfare;
-(char)hasSubThoroughfare;
-(NSString *)subThoroughfare;
-(char)hasPostCode;
-(NSString *)postCode;
-(char)hasPostCodeExtension;
-(NSString *)postCodeExtension;
-(char)hasOcean;
-(NSString *)ocean;
-(char)hasInlandWater;
-(NSString *)inlandWater;
-(id)initWithUrlRepresentation:(id)arg1 ;
-(id)urlRepresentation;
-(char)_isEquivalentURLRepresentationTo:(id)arg1 ;
-(NSMutableArray *)areaOfInterests;
-(void)setAdministrativeAreaCode:(NSString *)arg1 ;
-(void)setPostCodeExtension:(NSString *)arg1 ;
-(void)setDependentLocalitys:(NSMutableArray *)arg1 ;
-(void)setPremise:(NSString *)arg1 ;
-(void)setSubPremises:(NSMutableArray *)arg1 ;
-(void)setPostCodeFull:(NSString *)arg1 ;
-(void)addAreaOfInterest:(id)arg1 ;
-(void)addDependentLocality:(id)arg1 ;
-(void)addSubPremise:(id)arg1 ;
-(unsigned long long)areaOfInterestsCount;
-(void)clearAreaOfInterests;
-(id)areaOfInterestAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)dependentLocalitysCount;
-(void)clearDependentLocalitys;
-(id)dependentLocalityAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)subPremisesCount;
-(void)clearSubPremises;
-(id)subPremiseAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)geoIdsCount;
-(void)clearGeoIds;
-(long long)geoIdAtIndex:(unsigned long long)arg1 ;
-(void)addGeoId:(long long)arg1 ;
-(char)hasPremise;
-(char)hasPostCodeFull;
-(long long*)geoIds;
-(void)setGeoIds:(long long*)arg1 count:(unsigned long long)arg2 ;
-(NSMutableArray *)dependentLocalitys;
-(NSString *)premise;
-(NSMutableArray *)subPremises;
-(NSString *)postCodeFull;
-(void)dealloc;
-(NSString *)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end

