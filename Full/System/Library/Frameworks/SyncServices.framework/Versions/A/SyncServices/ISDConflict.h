/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:27 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/SyncServices.framework/Versions/A/SyncServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSArray, NSMutableArray, NSMutableDictionary;

@interface ISDConflict : NSObject {

	NSString* _recordId;
	NSString* _entityName;
	NSString* _dataClassName;
	NSArray* _identityKeys;
	NSMutableArray* _propertyConflicts;
	NSArray* _propertyDependencies;
	NSMutableDictionary* _deletedRecordMap;

}
-(void)dealloc;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)descriptionWithLocale:(id)arg1 indent:(long long)arg2 ;
-(char)isModified;
-(id)entityName;
-(id)propertyNames;
-(id)identityKeys;
-(id)recordId;
-(id)propertyConflictForPropertyNames:(id)arg1 ;
-(void)_addPropertyChanges:(id)arg1 forDependentPropertyNames:(id)arg2 fromClientId:(id)arg3 ;
-(void)clearModified;
-(id)initWithRecordId:(id)arg1 entityName:(id)arg2 dataClassName:(id)arg3 identityKeys:(id)arg4 ;
-(void)addDependentPropertyValues:(id)arg1 forDependentPropertyNames:(id)arg2 ;
-(void)addPropertyChanges:(id)arg1 forDependentPropertyNames:(id)arg2 ;
-(id)dataClassName;
-(void)purgeResolvedConflicts;
-(id)propertyConflicts;
-(id)clientIds;
-(id)propertyConflictForPropertyName:(id)arg1 ;
-(id)winningClientId;
-(char)containsConflictOnPropertyNames:(id)arg1 ;
-(id)conflictWithPropertyNames:(id)arg1 areDefaultValues:(char*)arg2 ;
-(id)unresolvedPropertyConflicts;
-(id)resolvedPropertyConflicts;
-(void)setWinningClientId:(id)arg1 ;
-(void)addDeletedRecord:(id)arg1 ;
-(id)deletedRecordMap;
-(char)removePropertyConflict:(id)arg1 ;
@end

