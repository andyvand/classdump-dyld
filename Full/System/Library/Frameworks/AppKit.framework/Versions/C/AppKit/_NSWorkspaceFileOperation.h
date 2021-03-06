/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:33:39 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AppKit/AppKit-Structs.h>
@class NSLock, NSMutableArray, NSMutableDictionary, NSMutableSet;

@interface _NSWorkspaceFileOperation : NSObject {

	dispatch_queue_sRef queue;
	NSLock* lock;
	NSMutableArray* remainingURLs;
	CFArrayRef operationRefs;
	NSMutableDictionary* urlsToNewURLs;
	NSMutableDictionary* urlsToErrors;
	NSMutableDictionary* urlToLastTriedName;
	NSMutableSet* urlsOnVolumesWithoutTrash;
	/*^block*/id completionHandler;
	long long whichOperation;
	unsigned long long successfulFileCount;

}

@property (readonly) long long whichOperation; 
-(void)dealloc;
-(id)copyNextPathToTryForURL:(id)arg1 ;
-(void)operationRef:(FSFileOperationRef)arg1 didHaveImmediateError:(int)arg2 ;
-(void)scheduleOperationRef:(FSFileOperationRef)arg1 forURL:(id)arg2 ;
-(void)makeOperationRefs;
-(long long)whichOperation;
-(void)retryOperationRefWithNextName:(FSFileOperationRef)arg1 ;
-(void)operationCompleted;
-(void)doSomething:(id)arg1 ;
-(void)handleDeletionOfURLsOnVolumesWithoutTrash;
-(id)copyError;
-(void)updateOperationRef:(FSFileOperationRef)arg1 newPath:(const char*)arg2 error:(int)arg3 status:(CFDictionaryRef)arg4 ;
-(id)initWithQueue:(dispatch_queue_sRef)arg1 URLs:(id)arg2 operation:(long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)operationRefDidComplete:(FSFileOperationRef)arg1 newPath:(const char*)arg2 error:(int)arg3 status:(CFDictionaryRef)arg4 ;
@end

