/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:55 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/NSPersistentStoreResult.h>

@class NSProgress, NSError, NSManagedObjectContext;

@interface NSPersistentStoreAsynchronousResult : NSPersistentStoreResult {

	NSProgress* _requestProgress;
	NSError* _requestError;
	NSManagedObjectContext* _requestContext;
	id _requestCompletionBlock;
	int _flags;

}

@property (readonly) NSManagedObjectContext * managedObjectContext;              //@synthesize requestContext=_requestContext - In the implementation block
@property (retain) NSError * operationError;                                     //@synthesize requestError=_requestError - In the implementation block
@property (retain) NSProgress * progress;                                        //@synthesize requestProgress=_requestProgress - In the implementation block
@property (copy) id requestCompletionBlock;                                      //@synthesize requestCompletionBlock=_requestCompletionBlock - In the implementation block
-(void)_cancelProgress;
-(void)setOperationError:(NSError *)arg1 ;
-(id)initWithContext:(id)arg1 andProgress:(id)arg2 completetionBlock:(id)arg3 ;
-(NSError *)operationError;
-(id)requestCompletionBlock;
-(void)setRequestCompletionBlock:(id)arg1 ;
-(char)_isCancelled;
-(void)dealloc;
-(void)cancel;
-(NSProgress *)progress;
-(NSManagedObjectContext *)managedObjectContext;
-(void)setProgress:(NSProgress *)arg1 ;
@end

