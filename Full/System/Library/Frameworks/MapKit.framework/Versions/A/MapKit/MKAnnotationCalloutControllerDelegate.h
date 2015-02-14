/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:11 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MKAnnotationCalloutControllerDelegate <NSObject>
@optional
-(void)calloutControllerDidFinishMapsTransitionExpanding:(id)arg1;

@required
-(CGRect*)calloutController:(id)arg1 visibleCenteringRectInAnnotationView:(id)arg2;
-(void)calloutController:(id)arg1 scrollToRevealCalloutWithOffset:(CGPoint)arg2 annotationCoordinate:(CGPoint)arg3 completionHandler:(/*^block*/id)arg4;

@end

