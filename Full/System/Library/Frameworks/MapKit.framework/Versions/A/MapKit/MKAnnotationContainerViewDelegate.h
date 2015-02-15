/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:00 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MKAnnotationContainerViewDelegate <NSObject>
@optional
-(void)annotationContainerDidFinishMapsTransitionExpanding:(id)arg1;

@required
-(CGPoint*)convertCoordinate:(SCD_Struct_MK0)arg1 toPointToView:(id)arg2;
-(SCD_Struct_MK0*)convertPoint:(CGPoint)arg1 toCoordinateFromView:(id)arg2;
-(char)annotationContainerShouldAlignToPixels:(id)arg1;
-(char)annotationContainerIsRotated:(id)arg1;
-(void)annotationContainer:(id)arg1 scrollToRevealCalloutWithOffset:(CGPoint)arg2 annotationCoordinate:(SCD_Struct_MK0)arg3 completionHandler:(/*^block*/id)arg4;
-(double)annotationContainer:(id)arg1 pinDropDistanceForCoordinate:(SCD_Struct_MK0)arg2 maxDistance:(double*)arg3 startPoint:(CGPoint*)arg4 shadowStartPoint:(CGPoint*)arg5;
-(void)annotationContainerWillAnimateBubble:(id)arg1;
-(void)annotationContainerDidAnimateBubble:(id)arg1;
-(void)annotationContainerWillDropPins:(id)arg1;
-(void)annotationContainerDidDropPins:(id)arg1;
-(CGRect*)visibleCenteringRectInView:(id)arg1;
-(CGRect*)visibleRectInView:(id)arg1;
-(double)_zoomScale;
-(CGRect*)annotationContainerVisibleRect:(id)arg1;

@end

