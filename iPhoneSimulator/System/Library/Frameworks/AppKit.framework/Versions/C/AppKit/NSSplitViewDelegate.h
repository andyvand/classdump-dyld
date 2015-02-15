/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:26 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol NSSplitViewDelegate <NSObject>
@optional
-(char)splitView:(id)arg1 canCollapseSubview:(id)arg2;
-(char)splitView:(id)arg1 shouldCollapseSubview:(id)arg2 forDoubleClickOnDividerAtIndex:(long long)arg3;
-(double)splitView:(id)arg1 constrainMinCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
-(double)splitView:(id)arg1 constrainMaxCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
-(double)splitView:(id)arg1 constrainSplitPosition:(double)arg2 ofSubviewAt:(long long)arg3;
-(void)splitView:(id)arg1 resizeSubviewsWithOldSize:(CGSize)arg2;
-(char)splitView:(id)arg1 shouldAdjustSizeOfSubview:(id)arg2;
-(char)splitView:(id)arg1 shouldHideDividerAtIndex:(long long)arg2;
-(CGRect*)splitView:(id)arg1 effectiveRect:(CGRect)arg2 forDrawnRect:(CGRect)arg3 ofDividerAtIndex:(long long)arg4;
-(CGRect*)splitView:(id)arg1 additionalEffectiveRectOfDividerAtIndex:(long long)arg2;
-(void)splitViewWillResizeSubviews:(id)arg1;
-(void)splitViewDidResizeSubviews:(id)arg1;

@end

