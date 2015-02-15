/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:01 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MKStackingViewControllerDelegate <NSObject>
@optional
-(void)stackingViewControllerUpdateSelectorView:(id)arg1;
-(double)stackingViewControllerHeightForTitleView:(id)arg1;
-(double)stackingViewControllerHeightForHeaderView:(id)arg1;
-(double)stackingViewControllerHeightForSelectorView:(id)arg1;
-(double)stackingViewControllerTopLayoutGuideLength:(id)arg1;
-(void)stackingViewController:(id)arg1 calculatedTransformForHeaderView:(CATransform3D)arg2;
-(char)stackingViewController:(id)arg1 showsTitleForViewController:(id)arg2;
-(void)stackingViewController:(id)arg1 willSelectViewController:(id)arg2;
-(void)stackingViewControllerWillBeginScroll:(id)arg1;
-(void)stackingViewControllerDidEndScroll:(id)arg1;
-(void)stackingViewController:(id)arg1 verticalScrollerInsetDidChangeDuringLayoutPhase:(long long)arg2;

@end

