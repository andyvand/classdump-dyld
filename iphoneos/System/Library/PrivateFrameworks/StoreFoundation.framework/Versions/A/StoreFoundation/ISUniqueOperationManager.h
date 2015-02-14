/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:37 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/StoreFoundation.framework/Versions/A/StoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreFoundation/ISSingleton.h>

@class ISUniqueOperationContext, NSMutableArray, NSLock, NSString;

@interface ISUniqueOperationManager : NSObject <ISSingleton> {

	ISUniqueOperationContext* _activeContext;
	NSMutableArray* _contexts;
	NSLock* _lock;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(void)setSharedInstance:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)checkInOperation:(id)arg1 ;
-(void)checkOutOperation:(id)arg1 ;
-(id)_activeContext;
-(id)_contextForOperation:(id)arg1 ;
-(id)predecessorForKey:(id)arg1 operation:(id)arg2 ;
-(void)setPredecessorIfNeeded:(id)arg1 forKey:(id)arg2 ;
-(void)uniqueOperationFinished:(id)arg1 forKey:(id)arg2 ;
@end

