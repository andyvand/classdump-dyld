/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 11:14:39 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Utilities/Console.app/Contents/MacOS/Console
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSSplitView.h>

@interface SidebarSplitView : NSSplitView {

	double _savedPosition;
	char _isAnimating;

}
-(void)setBottomViewCollapsed:(char)arg1 shouldAnimate:(char)arg2 ;
-(void)viewResizedWhileClosedWithDelta:(double)arg1 ;
-(char)isAnimating;
-(char)isCollapsed;
@end
