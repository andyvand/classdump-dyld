/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:23 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CoreData/CoreData-Structs.h>
@class NSXPCStore, NSXPCConnection;

@interface NSXPCStoreConnection : NSObject {

	NSXPCStore* _store;
	NSXPCConnection* _connection;
	dispatch_semaphore_sRef _semaphore;

}
-(void)disconnect;
-(id)initForStore:(id)arg1 withOptions:(id)arg2 ;
-(id)sendMessage:(id)arg1 fromContext:(id)arg2 store:(id)arg3 error:(id*)arg4 ;
-(id)createConnectionWithOptions:(id)arg1 ;
-(void)dealloc;
@end

