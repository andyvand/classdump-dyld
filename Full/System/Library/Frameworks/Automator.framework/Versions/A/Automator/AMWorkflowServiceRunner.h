/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:27 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Automator/Automator-Structs.h>
@class NSURL, NSPasteboard, AMWorkflowController;

@interface AMWorkflowServiceRunner : NSObject {

	NSURL* _workflowURL;
	NSPasteboard* _pasteboard;
	AMWorkflowController* _controller;
	/*^block*/id _completionBlock;

}

@property (retain) NSURL * workflowURL;                            //@synthesize workflowURL=_workflowURL - In the implementation block
@property (retain) NSPasteboard * pasteboard;                      //@synthesize pasteboard=_pasteboard - In the implementation block
@property (retain) AMWorkflowController * controller;              //@synthesize controller=_controller - In the implementation block
@property (copy) id completionBlock;                               //@synthesize completionBlock=_completionBlock - In the implementation block
-(void)workflowControllerDidRun:(id)arg1 ;
-(void)workflowControllerDidStop:(id)arg1 ;
-(void)workflowController:(id)arg1 didError:(id)arg2 ;
-(void)setWorkflowURL:(NSURL *)arg1 ;
-(void)setPasteboard:(NSPasteboard *)arg1 ;
-(id)processInput:(id)arg1 serviceMetaData:(id)arg2 error:(id*)arg3 ;
-(NSURL *)workflowURL;
-(char)getInputFromPasteBoard:(id*)arg1 serviceMetaData:(id)arg2 error:(id*)arg3 ;
-(void)completeWorkflowRunWithController:(id)arg1 workflowResult:(id)arg2 error:(id)arg3 ;
-(char)writeOutputToPasteBoard:(id)arg1 serviceMetaData:(id)arg2 error:(id*)arg3 ;
-(id)initWithWorkflowURL:(id)arg1 pasteboardName:(id)arg2 ;
-(void)runWorkflowWithCompletionBlock:(/*^block*/id)arg1 completionQueue:(dispatch_queue_sRef)arg2 ;
-(NSPasteboard *)pasteboard;
-(void)dealloc;
-(AMWorkflowController *)controller;
-(char)presentError:(id)arg1 ;
-(void)setController:(AMWorkflowController *)arg1 ;
-(void)setCompletionBlock:(id)arg1 ;
-(id)completionBlock;
@end

