/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:16 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzComposer/QCInspector.h>

@class QCPlugInViewController;

@interface QCPlugInInspector : QCInspector {

	QCPlugInViewController* _viewController;

}
+(id)viewNibName;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)view;
-(id)initWithBundle:(id)arg1 nibName:(id)arg2 ;
-(void)setupViewForPatch:(id)arg1 ;
-(void)resetView;
-(id)viewTitle;
@end

