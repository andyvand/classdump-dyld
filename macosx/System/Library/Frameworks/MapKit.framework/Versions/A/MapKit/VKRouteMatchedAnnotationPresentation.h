/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:19 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class GEORouteMatch;


@protocol VKRouteMatchedAnnotationPresentation <VKTrackableAnnotationPresentation>
@property (nonatomic,retain) GEORouteMatch * routeMatch; 
@required
-(void)removePresentationCoordinateChangedObserver:(id)arg1;
-(void)addPresentationCoordinateChangedObserver:(id)arg1;
-(GEORouteMatch *)routeMatch;
-(void)setRouteMatch:(id)arg1;

@end
