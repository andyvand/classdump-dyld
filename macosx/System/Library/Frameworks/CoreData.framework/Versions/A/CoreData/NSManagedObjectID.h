/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:24 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreData/NSCopying.h>

@class NSEntityDescription, NSPersistentStore;

@interface NSManagedObjectID : NSObject <NSCopying>

@property (readonly) NSEntityDescription * entity; 
@property (__weak,readonly) NSPersistentStore * persistentStore; 
@property (getter=isTemporaryID,readonly) char temporaryID; 
+(void)initialize;
+(long long)version;
+(char)accessInstanceVariablesDirectly;
-(char)_isPersistentStoreAlive;
-(id)_storeIdentifier;
-(long long)_referenceData64;
-(id)_retainedURIString;
-(id)_storeInfo1;
-(id)_referenceData;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)_tryRetain;
-(char)_isDeallocating;
-(NSEntityDescription *)entity;
-(id)URIRepresentation;
-(NSPersistentStore *)persistentStore;
-(char)isTemporaryID;
@end

