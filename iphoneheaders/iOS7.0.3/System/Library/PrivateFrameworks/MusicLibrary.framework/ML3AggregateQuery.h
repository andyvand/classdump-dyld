/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:31:24 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <MusicLibrary/ML3Query.h>

@class NSString;

@interface ML3AggregateQuery : ML3Query {

	Class _aggregateEntityClass;
	NSString* _foreignPersistentIDProperty;

}

@property (readonly) Class aggregateEntityClass;                          //@synthesize aggregateEntityClass=_aggregateEntityClass - In the implementation block
@property (readonly) NSString * foreignPersistentIDProperty;              //@synthesize foreignPersistentIDProperty=_foreignPersistentIDProperty - In the implementation block
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)hasEntities;
-(unsigned)countOfEntities;
-(Class)entityClass;
-(id)selectPersistentIDsSQLAndProperties:(id)arg1 ordered:(BOOL)arg2 ;
-(id)persistentIDProperty;
-(Class)aggregateEntityClass;
-(id)foreignPersistentIDProperty;
-(id)initWithUnitQuery:(id)arg1 aggregateEntityClass:(Class)arg2 foreignPersistentIDProperty:(id)arg3 ;
-(void).cxx_destruct;
@end
