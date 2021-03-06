/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:34:32 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CoreData/CoreData-Structs.h>
@class NSMutableArray, NSMutableDictionary, NSArray, NSDictionary;

@interface NSMappingModel : NSObject {

	void* _reserved;
	void* _reserved1;
	void* _reserved2;
	NSMutableArray* _entityMappings;
	NSMutableDictionary* _entityMappingsByName;
	struct {
		unsigned _isInUse : 1;
		unsigned _reservedModelMapping : 31;
	}  _modelMappingFlags;

}

@property (retain) NSArray * entityMappings; 
@property (copy,readonly) NSDictionary * entityMappingsByName; 
+(id)_modelPathsFromBundles:(id)arg1 ;
+(int)migrationDebugLevel;
+(id)_newMappingModelFromPaths:(id)arg1 forSourceHashes:(id)arg2 destinationHashes:(id)arg3 ;
+(id)mappingModelFromBundles:(id)arg1 forSourceModel:(id)arg2 destinationModel:(id)arg3 ;
+(id)inferredMappingModelForSourceModel:(id)arg1 destinationModel:(id)arg2 error:(id*)arg3 ;
+(void)setMigrationDebugLevel:(int)arg1 ;
+(void)initialize;
-(void)_setIsEditable:(char)arg1 ;
-(void)_throwIfNotEditable;
-(void)_createCachesAndOptimizeState;
-(NSArray *)entityMappings;
-(id)_initWithEntityMappings:(id)arg1 ;
-(NSDictionary *)entityMappingsByName;
-(void)setEntityMappings:(NSArray *)arg1 ;
-(void)_addEntityMapping:(id)arg1 ;
-(char)_isInferredMappingModel;
-(char)_hasInferredMappingNeedingValidation;
-(id)_sourceEntityVersionHashesByName;
-(id)_destinationEntityVersionHashesByName;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEditable;
-(id)initWithContentsOfURL:(id)arg1 ;
@end

