/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:56 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSManagedObjectID;

@interface NSIncrementalStoreNode : NSObject {

	NSManagedObjectID* _objectID;
	unsigned long long _versionNumber;
	id _propertyCache;
	void* _reserved1;

}

@property (nonatomic,readonly) NSManagedObjectID * objectID; 
@property (nonatomic,readonly) unsigned long long version; 
+(void)initialize;
-(const id*)knownKeyValuesPointer;
-(id)_snapshot_;
-(unsigned)_versionNumber;
-(id)_propertyCache;
-(id)valueForPropertyDescription:(id)arg1 ;
-(id)initWithObjectID:(id)arg1 fromSQLRow:(id)arg2 ;
-(id)initWithObjectID:(id)arg1 withValues:(id)arg2 version:(unsigned long long)arg3 ;
-(void)updateWithValues:(id)arg1 version:(unsigned long long)arg2 ;
-(void)updateFromSQLRow:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(NSManagedObjectID *)objectID;
-(unsigned long long)version;
@end

