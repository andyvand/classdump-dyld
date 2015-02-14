/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:50 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol VKMapViewDelegate <NSObject>
@optional
-(void)mapLayer:(id)arg1 annotationMarker:(id)arg2 didChangeDragState:(long long)arg3 fromOldState:(long long)arg4;
-(void)mapLayer:(id)arg1 canEnter3DModeDidChange:(char)arg2;
-(void)mapLayer:(id)arg1 canShowFlyoverDidChange:(char)arg2;
-(void)mapLayer:(id)arg1 showingFlyoverDidChange:(char)arg2;
-(void)mapLayer:(id)arg1 willChangeRegionAnimated:(char)arg2;
-(void)mapLayerDidChangeVisibleRegion:(id)arg1;
-(void)mapLayer:(id)arg1 didChangeRegionAnimated:(char)arg2;
-(void)mapLayer:(id)arg1 didStopFlyoverTourCompleted:(char)arg2;
-(void)mapLayer:(id)arg1 flyoverTourLabelDidChange:(id)arg2;
-(void)mapLayerWillStartFlyoverTour:(id)arg1;
-(void)mapLayerDidStartLoadingTiles:(id)arg1;
-(void)mapLayerDidFinishLoadingTiles:(id)arg1;
-(void)mapLayerDidFailLoadingTiles:(id)arg1 withError:(id)arg2;
-(id)mapLayer:(id)arg1 presentationForAnnotation:(id)arg2;
-(id)mapLayer:(id)arg1 painterForOverlay:(id)arg2;
-(void)mapLayerDidBecomeFullyDrawn:(id)arg1 hasFailedTiles:(char)arg2;
-(void)mapLayerDidBecomePartiallyDrawn:(id)arg1;
-(void)mapLayer:(id)arg1 didBecomePitched:(char)arg2;
-(void)mapLayer:(id)arg1 canZoomInDidChange:(char)arg2;
-(void)mapLayer:(id)arg1 canZoomOutDidChange:(char)arg2;
-(void)mapLayer:(id)arg1 didFinishChangingMapDisplayStyle:(unsigned long long)arg2;
-(void)mapLayer:(id)arg1 selectedLabelMarkerWillDisappear:(id)arg2;
-(void)mapLayer:(id)arg1 willTransitionFrom:(long long)arg2 to:(long long)arg3 duration:(double)arg4;
-(void)mapLayerDidDraw:(id)arg1;
-(void)mapLayer:(id)arg1 didUpdateVerticalYawTo:(double)arg2;

@end

