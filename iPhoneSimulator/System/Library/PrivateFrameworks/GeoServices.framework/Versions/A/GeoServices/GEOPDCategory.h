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

@class NSString, NSMutableArray;

@interface GEOPDCategory : PBCodable <NSCopying> {

	NSString* _categoryId;
	int _level;
	NSMutableArray* _localizedNames;
	SCD_Struct_GE4 _has;

}

@property (assign,nonatomic) char hasLevel; 
@property (assign,nonatomic) int level;                                    //@synthesize level=_level - In the implementation block
@property (nonatomic,retain) NSMutableArray * localizedNames;              //@synthesize localizedNames=_localizedNames - In the implementation block
@property (nonatomic,readonly) char hasCategoryId; 
@property (nonatomic,retain) NSString * categoryId;                        //@synthesize categoryId=_categoryId - In the implementation block
+(id)_allCategoriesForPlaceData:(id)arg1 type:(unsigned)arg2 ;
+(id)categoryNamesForPlaceData:(id)arg1 type:(unsigned)arg2 ;
+(char)hasCategoryNamesForPlaceData:(id)arg1 type:(unsigned)arg2 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(char)hasLevel;
-(NSMutableArray *)localizedNames;
-(unsigned long long)localizedNamesCount;
-(void)setLocalizedNames:(NSMutableArray *)arg1 ;
-(void)clearLocalizedNames;
-(void)setCategoryId:(NSString *)arg1 ;
-(void)addLocalizedName:(id)arg1 ;
-(id)localizedNameAtIndex:(unsigned long long)arg1 ;
-(void)setHasLevel:(char)arg1 ;
-(char)hasCategoryId;
-(NSString *)categoryId;
-(void)dealloc;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)level;
-(void)setLevel:(int)arg1 ;
-(id)dictionaryRepresentation;
@end

