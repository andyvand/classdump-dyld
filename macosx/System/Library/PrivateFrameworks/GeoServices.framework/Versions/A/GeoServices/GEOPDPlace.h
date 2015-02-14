/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:11 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class NSMutableArray;

@interface GEOPDPlace : PBCodable <NSCopying> {

	unsigned long long _muid;
	unsigned long long _preferredMuid;
	NSMutableArray* _components;
	int _resultProviderId;
	int _status;
	SCD_Struct_GE53 _has;

}

@property (assign,nonatomic) char hasMuid; 
@property (assign,nonatomic) unsigned long long muid;                       //@synthesize muid=_muid - In the implementation block
@property (assign,nonatomic) char hasStatus; 
@property (assign,nonatomic) int status;                                    //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) char hasPreferredMuid; 
@property (assign,nonatomic) unsigned long long preferredMuid;              //@synthesize preferredMuid=_preferredMuid - In the implementation block
@property (nonatomic,retain) NSMutableArray * components;                   //@synthesize components=_components - In the implementation block
@property (assign,nonatomic) char hasResultProviderId; 
@property (assign,nonatomic) int resultProviderId;                          //@synthesize resultProviderId=_resultProviderId - In the implementation block
+(id)failedPlaceDataForMuid:(unsigned long long)arg1 ;
+(id)failedPlaceData;
+(id)attributionForPlaceData:(id)arg1 type:(int)arg2 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)bestName;
-(id)phoneNumbers;
-(unsigned long long)muid;
-(char)isDisputed;
-(void)setHasStatus:(char)arg1 ;
-(char)hasStatus;
-(void)setResultProviderId:(int)arg1 ;
-(void)setHasResultProviderId:(char)arg1 ;
-(char)hasResultProviderId;
-(int)resultProviderId;
-(id)spokenNameForLocale:(id)arg1 ;
-(id)geoMapItem;
-(void)setMuid:(unsigned long long)arg1 ;
-(void)setHasMuid:(char)arg1 ;
-(char)hasMuid;
-(id)compactDebugDescription;
-(char)isCacheable;
-(id)copyWithoutETAComponents;
-(void)setFirstSeenTimestamp:(double)arg1 ;
-(id)_cleanedPhoneNumberForPhoneNumberRepresentation:(id)arg1 ;
-(void)_removeETAComponents;
-(char)hasExpiredComponentsAsOf:(double)arg1 ;
-(id)businessURL;
-(id)copyWithStrippedOptionalData;
-(char)hasPreferredMuid;
-(unsigned long long)preferredMuid;
-(void)addComponent:(id)arg1 ;
-(unsigned long long)componentsCount;
-(void)clearComponents;
-(void)setPreferredMuid:(unsigned long long)arg1 ;
-(void)setHasPreferredMuid:(char)arg1 ;
-(id)componentAtIndex:(unsigned long long)arg1 ;
-(void)dealloc;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)status;
-(id)dictionaryRepresentation;
-(NSMutableArray *)components;
-(void)setStatus:(int)arg1 ;
-(void)setComponents:(NSMutableArray *)arg1 ;
-(id)_entityName;
@end

