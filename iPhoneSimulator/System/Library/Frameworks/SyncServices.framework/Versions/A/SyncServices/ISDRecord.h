/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:19 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/SyncServices.framework/Versions/A/SyncServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SyncServices/SyncServices-Structs.h>
#import <SyncServices/NSCopying.h>

@class NSString, NSMutableArray, NSMutableDictionary;

@interface ISDRecord : NSObject <NSCopying> {

	NSString* _recordId;
	int _entityNumber;
	NSMutableArray* _propertyValues;
	NSMutableArray* _unformattedRelationshipValues;
	unsigned _addedGeneration;
	unsigned _lastChangedGeneration;
	int _state;
	int _lastChangedByClientNumber;
	char _deleted;
	char _propertyValuesIncludeDataReferences;
	NSMutableDictionary* _relationshipMap;
	NSMutableArray* _reorderOnlyPropertyNames;

}
-(void)dealloc;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setState:(int)arg1 ;
-(int)state;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)entityName;
-(char)isDeleted;
-(id)propertyNames;
-(id)fastEntityName;
-(id)fastRecordId;
-(id)recordId;
-(id)propertyValueWithName:(id)arg1 ;
-(id)propertyValues;
-(void)replaceRecordIds:(id)arg1 ;
-(void)replaceRecordId:(id)arg1 withRecordId:(id)arg2 ;
-(void)setPropertyValuesIncludeDataReferences:(char)arg1 ;
-(void)noteModificationDate:(id)arg1 inGeneration:(unsigned)arg2 byClientWithId:(id)arg3 ;
-(id)initWithRecordId:(id)arg1 entityName:(id)arg2 propertyValues:(id)arg3 addedGeneration:(unsigned)arg4 lastChangedGeneration:(unsigned)arg5 state:(int)arg6 lastChangedByClientId:(id)arg7 isDeleted:(char)arg8 ;
-(char)propertyValuesIncludeDataReferences;
-(void)setRecordId:(id)arg1 ;
-(int)entityNumber;
-(unsigned)lastChangedGeneration;
-(unsigned)addedGeneration;
-(int)lastChangedByClientNumber;
-(char)addedOrModifiedPropertyValue:(id)arg1 ;
-(char)removePropertyValuesWithNames:(id)arg1 ;
-(id)initWithRecordId:(id)arg1 entityNumber:(int)arg2 propertyValues:(id)arg3 addedGeneration:(unsigned)arg4 lastChangedGeneration:(unsigned)arg5 state:(int)arg6 lastChangedByClientNumber:(int)arg7 isDeleted:(char)arg8 ;
-(id)unformattedRelationshipValues;
-(id)unformattedRelationshipValueWithName:(id)arg1 ;
-(void)addUnformattedRelationshipValue:(id)arg1 ;
-(void)setRelationshipMap:(id)arg1 ;
-(id)relationshipMap;
-(id)initWithRecordId:(id)arg1 propertyChanges:(id)arg2 ;
-(id)lastChangedByClientId;
-(char)recordWithId:(id)arg1 isInCachedRelationship:(id)arg2 atIndex:(long long*)arg3 ;
-(id)setPropertyValueWithType:(int)arg1 name:(id)arg2 value:(id)arg3 unformattedValue:(id)arg4 inGeneration:(unsigned)arg5 byClientId:(id)arg6 ;
-(void)addPropertyValue:(id)arg1 ;
-(void)setLastChangedGeneration:(unsigned)arg1 ;
-(void)setDeletedInGeneration:(unsigned)arg1 byClientId:(id)arg2 ;
-(id)setPropertyValueWithType:(int)arg1 name:(id)arg2 value:(id)arg3 inGeneration:(unsigned)arg4 byClientId:(id)arg5 ;
-(void)setDeleted:(char)arg1 forPropertyValueWithName:(id)arg2 inGeneration:(unsigned)arg3 byClientId:(id)arg4 ;
-(void)takeUnformattedRelationshipValueWithName:(id)arg1 fromRecord:(id)arg2 inGeneration:(unsigned)arg3 byClientId:(id)arg4 ;
-(void)deleteUnformattedRelationshipValueWithName:(id)arg1 ;
-(void)removeAllPropertyValues;
-(void)removePropertyValueWithName:(id)arg1 ;
-(id)propertyValuesWithNames:(id)arg1 ;
-(id)createRecordDictionary;
-(id)undeletedRecordIdsForRelationshipNamed:(id)arg1 ;
-(void)addReorderOnlyPropertyName:(id)arg1 ;
-(char)isReorderOnlyChangeForPropertyName:(id)arg1 ;
-(id)fastLastChangedByClientId;
@end

