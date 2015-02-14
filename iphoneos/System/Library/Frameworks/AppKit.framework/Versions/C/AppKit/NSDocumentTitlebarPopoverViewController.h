/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:19 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSViewController.h>
#import <AppKit/NSRemoteViewDelegate.h>

@class NSDocument, NSError, NSOperationQueue;

@interface NSDocumentTitlebarPopoverViewController : NSViewController <NSRemoteViewDelegate> {

	NSDocument* document;
	NSError* nonModalError;
	NSOperationQueue* queue;
	char isPerformingOperation;
	/*^block*/id operationWaiter;
	/*^block*/id advanceToRunPhaseWaiter;
	/*^block*/id cleanupKVOBlock;
	id mouseDownMonitor;

}

@property (copy) id operationWaiter; 
+(Class)_remoteViewClass;
+(Class)_sharedXPCListenerClass;
+(void)warmup;
-(void)dealloc;
-(void)invalidate;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)loadView;
-(id)initWithDocument:(id)arg1 ;
-(void)_whenDocumentOperationCompletesPerformBlock:(/*^block*/id)arg1 ;
-(void)prepareViewThenContinue:(/*^block*/id)arg1 ;
-(void)viewDidInvalidate:(id)arg1 ;
-(void)viewDidAdvanceToRunPhase:(id)arg1 ;
-(void)setOperationWaiter:(id)arg1 ;
-(void)_willStartOperation;
-(void)_didFinishOperation;
-(void)_enqueueOperationWithBlock:(/*^block*/id)arg1 ;
-(id)operationWaiter;
@end

