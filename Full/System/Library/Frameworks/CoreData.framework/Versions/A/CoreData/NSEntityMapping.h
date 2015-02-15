/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:33 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CoreData/CoreData-Structs.h>
@class NSDictionary, NSString, NSData, NSExpression, NSMutableArray, NSArray;

@interface NSEntityMapping : NSObject {

	void* _reserved;
	void* _reserved1;
	NSDictionary* _mappingsByName;
	NSString* _name;
	unsigned long long _mappingType;
	NSString* _sourceEntityName;
	NSData* _sourceEntityVersionHash;
	NSString* _destinationEntityName;
	NSData* _destinationEntityVersionHash;
	NSExpression* _sourceExpression;
	NSDictionary* _userInfo;
	NSString* _entityMigrationPolicyClassName;
	NSMutableArray* _attributeMappings;
	NSMutableArray* _relationshipMappings;
	struct {
		unsigned _isInUse : 1;
		unsigned _reservedEntityMapping : 31;
	}  _entityMappingFlags;

}

@property (copy) NSString * name; 
@property (assign) unsigned long long mappingType; 
@property (copy) NSString * sourceEntityName; 
@property (copy) NSData * sourceEntityVersionHash; 
@property (copy) NSString * destinationEntityName; 
@property (copy) NSData * destinationEntityVersionHash; 
@property (retain) NSArray * attributeMappings; 
@property (retain) NSArray * relationshipMappings; 
@property (retain) NSExpression * sourceExpression; 
@property (nonatomic,retain) NSDictionary * userInfo; 
@property (copy) NSString * entityMigrationPolicyClassName; 
+(void)initialize;
-(void)_setIsEditable:(char)arg1 ;
-(void)_throwIfNotEditable;
-(void)_createCachesAndOptimizeState;
-(NSArray *)attributeMappings;
-(NSArray *)relationshipMappings;
-(NSData *)sourceEntityVersionHash;
-(NSData *)destinationEntityVersionHash;
-(NSString *)sourceEntityName;
-(NSString *)destinationEntityName;
-(char)_hasInferredMappingNeedingValidation;
-(id)_initWithSourceEntityDescription:(id)arg1 destinationEntityDescription:(id)arg2 ;
-(unsigned long long)mappingType;
-(NSExpression *)sourceExpression;
-(NSString *)entityMigrationPolicyClassName;
-(void)setAttributeMappings:(NSArray *)arg1 ;
-(void)setRelationshipMappings:(NSArray *)arg1 ;
-(void)setMappingType:(unsigned long long)arg1 ;
-(void)setSourceEntityName:(NSString *)arg1 ;
-(void)setSourceEntityVersionHash:(NSData *)arg1 ;
-(void)setDestinationEntityName:(NSString *)arg1 ;
-(void)setDestinationEntityVersionHash:(NSData *)arg1 ;
-(void)setSourceExpression:(NSExpression *)arg1 ;
-(void)setEntityMigrationPolicyClassName:(NSString *)arg1 ;
-(id)_mappingsByName;
-(id)_migrationPolicy;
-(void)_addAttributeMapping:(id)arg1 ;
-(void)_addRelationshipMapping:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSDictionary *)userInfo;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(char)isEqual:(id)arg1 ;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEditable;
@end

