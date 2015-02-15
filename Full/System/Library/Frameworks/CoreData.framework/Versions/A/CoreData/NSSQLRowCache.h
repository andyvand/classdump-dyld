/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:33 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreData/NSPersistentStoreCache.h>

@class NSSQLCore;

@interface NSSQLRowCache : NSPersistentStoreCache {

	NSSQLCore* _sqlCore;
	int _debug;

}
+(void)initialize;
-(void)forgetAllExternalData;
-(id)rowForObjectID:(id)arg1 ;
-(id)initWithSQLCore:(id)arg1 ;
-(id)adapter;
-(void)registerRow:(id)arg1 forObjectID:(NSScalarObjectID*)arg2 ;
-(id)rowForObjectID:(id)arg1 after:(double)arg2 ;
-(id)toManyForSourceObjectID:(id)arg1 forProperty:(id)arg2 after:(double)arg3 ;
-(void)registerToMany:(id)arg1 forSourceObjectID:(NSScalarObjectID*)arg2 forProperty:(id)arg3 andTimestamp:(double)arg4 ;
-(void)forgetRowForObjectID:(NSScalarObjectID*)arg1 ;
-(void)registerSnapshots:(id)arg1 ;
-(void)dealloc;
@end

