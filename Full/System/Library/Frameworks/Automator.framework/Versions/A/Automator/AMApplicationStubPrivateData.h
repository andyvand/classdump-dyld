/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:24 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class AMWorkflow, AMWorkflowRunner, NSConnection, NSMutableArray;

@interface AMApplicationStubPrivateData : NSObject {

	id _delegate;
	AMWorkflow* _workflow;
	AMWorkflowRunner* _runner;
	NSConnection* _launcherConnection;
	id _launcher;
	char _displayInMenuBar;
	NSMutableArray* _inputItems;

}

@property (retain) NSMutableArray * inputItems;              //@synthesize inputItems=_inputItems - In the implementation block
-(id)runner;
-(id)workflow;
-(void)setRunner:(id)arg1 ;
-(void)setWorkflow:(id)arg1 ;
-(void)setDisplayInMenuBar:(char)arg1 ;
-(char)displayInMenuBar;
-(id)launcher;
-(void)setLauncher:(id)arg1 ;
-(id)launcherConnection;
-(void)setLauncherConnection:(id)arg1 ;
-(void)setInputItems:(NSMutableArray *)arg1 ;
-(void)stopNotification:(id)arg1 ;
-(id)init;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(NSMutableArray *)inputItems;
@end

