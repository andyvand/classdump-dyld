/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:55 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/GeoKit.framework/Versions/A/GeoKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSNumber, NSString, GeoKitPlace;

@interface GEOPlaceName : NSManagedObject

@property (nonatomic,retain) NSNumber * es; 
@property (nonatomic,retain) NSNumber * fi; 
@property (nonatomic,retain) NSNumber * sv; 
@property (nonatomic,retain) NSNumber * pt_br; 
@property (nonatomic,retain) NSNumber * nl; 
@property (nonatomic,retain) NSNumber * zh_tw; 
@property (nonatomic,retain) NSNumber * fr; 
@property (nonatomic,retain) NSNumber * en; 
@property (nonatomic,retain) NSString * name; 
@property (nonatomic,retain) NSNumber * da; 
@property (nonatomic,retain) NSNumber * it; 
@property (nonatomic,retain) NSNumber * ja; 
@property (nonatomic,retain) NSNumber * ko; 
@property (nonatomic,retain) NSNumber * no; 
@property (nonatomic,retain) NSNumber * ru; 
@property (nonatomic,retain) NSNumber * zh; 
@property (nonatomic,retain) NSNumber * pt; 
@property (nonatomic,retain) NSNumber * pl; 
@property (nonatomic,retain) NSNumber * de; 
@property (nonatomic,retain) GeoKitPlace * place; 
@property (nonatomic,retain) NSNumber * th; 
@property (nonatomic,retain) NSNumber * tr; 
@property (nonatomic,retain) NSNumber * ca; 
@property (nonatomic,retain) NSNumber * hr; 
@property (nonatomic,retain) NSNumber * cs; 
@property (nonatomic,retain) NSNumber * el; 
@property (nonatomic,retain) NSNumber * he; 
@property (nonatomic,retain) NSNumber * hu; 
@property (nonatomic,retain) NSNumber * ro; 
@property (nonatomic,retain) NSNumber * sk; 
@property (nonatomic,retain) NSNumber * uk; 
@property (nonatomic,retain) NSNumber * ar; 
@property (nonatomic,retain) NSNumber * id; 
@property (nonatomic,retain) NSNumber * ms; 
@property (nonatomic,retain) NSNumber * vi; 
+(SEL)userLanguageSelectorForManagedObjectContext:(id)arg1 ;
+(id)placesWhoseNameStartsWith:(id)arg1 managedObjectContext:(id)arg2 fetchLimit:(unsigned long long)arg3 resultType:(unsigned long long)arg4 ;
+(SEL)selectorForLocalization:(id)arg1 ;
+(SEL)_userLanguageSelectorForName:(id)arg1 ;
+(SEL)_userLanguageSelectorForManagedObjectContext:(id)arg1 ;
+(id)_predicateToFetchNameEqualToString:(id)arg1 nameKeyPath:(id)arg2 languageKeyPath:(id)arg3 ;
+(id)_predicateToFetchNameBegginningWithString:(id)arg1 nameKeyPath:(id)arg2 languageKeyPath:(id)arg3 ;
+(id)_namesWithPredicate:(id)arg1 managedObjectContext:(id)arg2 sortDescriptors:(id)arg3 fetchLimit:(unsigned long long)arg4 ;
+(id)_placeArrayFromPlaceNameArray:(id)arg1 resultType:(unsigned long long)arg2 ;
-(id)dumpDictionary;
@end

