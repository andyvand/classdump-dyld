/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:23 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSMutableDictionary, NSRecursiveLock, PFUbiquityGlobalObjectIDCache;

@interface PFUbiquityTransactionLogCache : NSObject {

	NSString* _localPeerID;
	NSMutableDictionary* _transactionLogCache;
	NSRecursiveLock* _transactionLogCacheLock;
	PFUbiquityGlobalObjectIDCache* _gidCache;

}
-(void)cacheExportedLog:(id)arg1 ;
-(id)initWithLocalPeerID:(id)arg1 andGlobalIDCache:(id)arg2 ;
-(id)retainedCachedLogForLocation:(id)arg1 loadWithRetry:(char)arg2 error:(id*)arg3 ;
-(void)removeLogsCachedForStoreNamed:(id)arg1 withUbiquityRootLocation:(id)arg2 ;
-(id)init;
-(void)dealloc;
@end

