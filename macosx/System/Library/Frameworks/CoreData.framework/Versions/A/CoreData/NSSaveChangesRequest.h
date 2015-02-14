/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:24 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/NSPersistentStoreRequest.h>

@class NSSet;

@interface NSSaveChangesRequest : NSPersistentStoreRequest {

	NSSet* _insertedObjects;
	NSSet* _updatedObjects;
	NSSet* _deletedObjects;
	NSSet* _optimisticallyLockedObjects;
	unsigned long long _flags;
	void* _reserved1;

}

@property (readonly) NSSet * insertedObjects; 
@property (readonly) NSSet * updatedObjects; 
@property (readonly) NSSet * deletedObjects; 
@property (readonly) NSSet * lockedObjects; 
+(void)initialize;
-(unsigned long long)requestType;
-(id)initWithInsertedObjects:(id)arg1 updatedObjects:(id)arg2 deletedObjects:(id)arg3 lockedObjects:(id)arg4 ;
-(int)_retryHandlerCount;
-(void)_setRetryHandlerCount:(int)arg1 ;
-(NSSet *)lockedObjects;
-(void)setDeletedObjects:(NSSet *)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(char)hasChanges;
-(NSSet *)updatedObjects;
-(NSSet *)insertedObjects;
-(NSSet *)deletedObjects;
@end

