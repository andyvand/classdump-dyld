/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:27:40 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSManagedObjectContext;

@interface _NSMemoryStorePredicateRemapper : NSObject {

	NSManagedObjectContext* _context;

}
+(id)defaultInstance;
-(id)createPredicateForFetchFromPredicate:(id)arg1 withContext:(id)arg2 ;
-(id)createPredicateForFetchFromPredicate:(id)arg1 ;
-(void)visitPredicate:(id)arg1 ;
-(void)visitPredicateExpression:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)initWithContext:(id)arg1 ;
@end
