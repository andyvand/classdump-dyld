/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:50:38 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/CoreServices/Automator Runner.app/Contents/MacOS/Automator Runner
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Automator/AMApplicationStub.h>

@class NSConnection;

@interface AMRunnerDelegate : AMApplicationStub {

	NSConnection* _delegateConnection;

}
-(void)processArguments;
-(void)handleAppleEvent:(id)arg1 withReplyEvent:(id)arg2 ;
-(void)delayedExit;
-(void)writeCacheIfNeeded;
-(id)delegateConnection;
-(void)setDelegateConnection:(id)arg1 ;
-(void)workflowRunner:(id)arg1 didError:(id)arg2 ;
-(void)workflowRunnerDidFinish:(id)arg1 ;
-(void)connectionDidDie:(id)arg1 ;
-(void)applicationDidFinishLaunching:(id)arg1 ;
-(void)dealloc;
-(char)application:(id)arg1 openFile:(id)arg2 ;
-(void)awakeFromNib;
@end
