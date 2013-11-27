/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:28:29 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol MKAnnotationContainerViewDelegate <NSObject>
@optional
-(void)annotationContainerDidFinishMapsTransitionExpanding:(id)arg1;

@required
-(SCD_Struct_MK1*)convertPoint:(CGPoint)arg1 toCoordinateFromView:(id)arg2;
-(BOOL)annotationContainerShouldAlignToPixels:(id)arg1;
-(BOOL)annotationContainerIsRotated:(id)arg1;
-(void)annotationContainer:(id)arg1 annotationView:(id)arg2 calloutAccessoryControlTapped:(id)arg3;
-(void)annotationContainer:(id)arg1 scrollToRevealCalloutWithOffset:(CGPoint)arg2 annotationCoordinate:(SCD_Struct_MK1)arg3 completionHandler:(/*^block*/ id)arg4;
-(float)annotationContainer:(id)arg1 pinDropDistanceForCoordinate:(SCD_Struct_MK1)arg2 maxDistance:(float*)arg3 startPoint:(CGPoint*)arg4 shadowStartPoint:(CGPoint*)arg5;
-(void)annotationContainerWillAnimateBubble:(id)arg1;
-(void)annotationContainerDidAnimateBubble:(id)arg1;
-(void)annotationContainerWillDropPins:(id)arg1;
-(void)annotationContainerDidDropPins:(id)arg1;
-(CGRect*)visibleCenteringRectInView:(id)arg1;
-(CGRect*)visibleRectInView:(id)arg1;
-(CGRect*)annotationContainerVisibleRect:(id)arg1;
-(float)_zoomScale;
-(CGPoint*)convertCoordinate:(SCD_Struct_MK1)arg1 toPointToView:(id)arg2;
@end
