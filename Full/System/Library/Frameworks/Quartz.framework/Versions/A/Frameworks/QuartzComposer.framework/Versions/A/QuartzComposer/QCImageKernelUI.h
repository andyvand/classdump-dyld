/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:24 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzComposer/QCInspector.h>

@class QCProgrammablePatchView, NSButton, NSSplitView;

@interface QCImageKernelUI : QCInspector {

	QCProgrammablePatchView* sourceView;
	QCProgrammablePatchView* advancedViewMain;
	NSButton* dodButton;
	NSSplitView* splitView;
	NSButton* advancedModeButton;

}
+(id)viewNibName;
-(char)splitView:(id)arg1 canCollapseSubview:(id)arg2 ;
-(char)splitView:(id)arg1 shouldCollapseSubview:(id)arg2 forDoubleClickOnDividerAtIndex:(long long)arg3 ;
-(double)splitView:(id)arg1 constrainMinCoordinate:(double)arg2 ofSubviewAt:(long long)arg3 ;
-(double)splitView:(id)arg1 constrainMaxCoordinate:(double)arg2 ofSubviewAt:(long long)arg3 ;
-(double)splitView:(id)arg1 constrainSplitPosition:(double)arg2 ofSubviewAt:(long long)arg3 ;
-(void)setupViewForPatch:(id)arg1 ;
-(void)resetView;
-(void)changeMode:(id)arg1 ;
@end

