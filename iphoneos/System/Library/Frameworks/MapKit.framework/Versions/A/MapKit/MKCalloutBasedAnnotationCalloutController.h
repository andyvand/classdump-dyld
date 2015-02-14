/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:50 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKAnnotationCalloutController.h>

@class MKCalloutView;

@interface MKCalloutBasedAnnotationCalloutController : MKAnnotationCalloutController {

	MKCalloutView* _calloutView;

}
-(char)isCalloutLeftAnchored;
-(char)_isShowingCallout;
-(id)calloutView;
-(char)calloutContainsPoint:(CGPoint)arg1 ;
-(char)isCalloutExpanded;
-(void)showCalloutForAnnotationView:(id)arg1 animated:(char)arg2 scrollToFit:(char)arg3 avoid:(CGRect)arg4 ;
-(void)hideCalloutAnimated:(char)arg1 ;
-(void)_setLeftAccessoryView:(id)arg1 backgroundColor:(id)arg2 animated:(char)arg3 ;
-(void)_setRightAccessoryView:(id)arg1 animated:(char)arg2 ;
-(void)_setDetailAccessoryView:(id)arg1 animated:(char)arg2 ;
-(void)_setSubtitle:(id)arg1 animated:(char)arg2 ;
-(double)defaultCalloutHeight;
-(void)_setLeftAccessoryView:(id)arg1 animated:(char)arg2 ;
-(void)_addCallout:(id)arg1 forAnnotationView:(id)arg2 anchorPoint:(CGPoint)arg3 boundaryRect:(CGRect)arg4 animated:(char)arg5 ;
-(void)calloutView:(id)arg1 willMoveToAnchorPoint:(CGPoint)arg2 animated:(char)arg3 ;
-(void)calloutView:(id)arg1 didMoveToAnchorPoint:(CGPoint)arg2 animated:(char)arg3 ;
-(id)_subtitle;
-(id)init;
-(void)_setTitle:(id)arg1 ;
@end

