/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:50 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MKAnnotationCalloutControllerDelegate;
#import <MapKit/MapKit-Structs.h>
@class MKAnnotationView;

@interface MKAnnotationCalloutController : NSObject {

	id<MKAnnotationCalloutControllerDelegate> _delegate;
	MKAnnotationView* _annotationView;
	unsigned long long _mapDisplayStyle;

}

@property (assign,nonatomic,__weak) id<MKAnnotationCalloutControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) MKAnnotationView * annotationView;                                      //@synthesize annotationView=_annotationView - In the implementation block
@property (assign,nonatomic) unsigned long long mapDisplayStyle;                                     //@synthesize mapDisplayStyle=_mapDisplayStyle - In the implementation block
-(char)isCalloutLeftAnchored;
-(char)_isShowingCallout;
-(id)calloutView;
-(MKAnnotationView *)annotationView;
-(void)setAnnotationView:(MKAnnotationView *)arg1 ;
-(char)calloutContainsPoint:(CGPoint)arg1 ;
-(char)isCalloutExpanded;
-(void)showCalloutForAnnotationView:(id)arg1 animated:(char)arg2 scrollToFit:(char)arg3 avoid:(CGRect)arg4 ;
-(void)hideCalloutAnimated:(char)arg1 ;
-(CGRect)_visibleCenteringRectInView:(id)arg1 ;
-(void)_updateCalloutAnimated:(char)arg1 ;
-(void)_updateCallout;
-(void)_removeAccessoryTargetForView:(id)arg1 ;
-(void)_setLeftAccessoryView:(id)arg1 backgroundColor:(id)arg2 animated:(char)arg3 ;
-(void)_setRightAccessoryView:(id)arg1 animated:(char)arg2 ;
-(void)_setDetailAccessoryView:(id)arg1 animated:(char)arg2 ;
-(void)_setSubtitle:(id)arg1 animated:(char)arg2 ;
-(void)_addAccessoryTargetForView:(id)arg1 ;
-(double)defaultCalloutHeight;
-(void)_setLeftAccessoryView:(id)arg1 animated:(char)arg2 ;
-(void)_removeAccessoryTargets;
-(unsigned long long)mapDisplayStyle;
-(void)setMapDisplayStyle:(unsigned long long)arg1 ;
-(id)_subtitle;
-(void)setDelegate:(id<MKAnnotationCalloutControllerDelegate>)arg1 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id<MKAnnotationCalloutControllerDelegate>)delegate;
-(void)_setTitle:(id)arg1 ;
@end

