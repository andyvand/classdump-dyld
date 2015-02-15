/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:57 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzComposer/QCInspector.h>

@class NSPopUpButton, NSTableView, NSBox, NSTextField;

@interface QCPatchRendererUI : QCInspector {

	NSPopUpButton* executionMenu;
	NSTableView* inputTableView;
	NSTableView* outputTableView;
	NSBox* outputsBox;
	NSPopUpButton* inputMenu;
	NSTextField* inputField;
	NSPopUpButton* outputMenu;
	NSTextField* outputField;
	NSPopUpButton* protocolMenu;

}
+(id)viewNibName;
-(long long)numberOfRowsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3 ;
-(void)setupViewForPatch:(id)arg1 ;
-(void)autoconfigureFromProtocol:(id)arg1 ;
-(void)_setup:(id)arg1 ;
-(void)setExecution:(id)arg1 ;
-(void)autoconfigureFromComposition:(id)arg1 ;
-(void)addInput:(id)arg1 ;
-(void)removeInput:(id)arg1 ;
-(void)addOutput:(id)arg1 ;
-(void)removeOutput:(id)arg1 ;
@end
