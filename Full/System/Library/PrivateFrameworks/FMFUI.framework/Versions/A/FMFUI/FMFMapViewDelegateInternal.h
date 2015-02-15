/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:35 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FMFUI.framework/Versions/A/FMFUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FMFUI/FMFUI-Structs.h>
#import <FMFUI/MKMapViewDelegate.h>

@protocol FMFMapViewDelegateInternalDelegate;
@class FMFWildcardGestureRecognizer, NSString;

@interface FMFMapViewDelegateInternal : NSObject <MKMapViewDelegate> {

	char _respondingToUserTouch;
	id<FMFMapViewDelegateInternalDelegate> _delegate;
	FMFWildcardGestureRecognizer* _gr;

}

@property (__weak) id<FMFMapViewDelegateInternalDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char respondingToUserTouch;                         //@synthesize respondingToUserTouch=_respondingToUserTouch - In the implementation block
@property (nonatomic,retain) FMFWildcardGestureRecognizer * gr;                  //@synthesize gr=_gr - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)zoomToFitAnnotationsForMapView:(id)arg1 includeMe:(char)arg2 disallowAnimation:(char)arg3 ;
-(id)initWithDelegate:(id)arg1 mapView:(id)arg2 ;
-(void)updateOverlaysForAnnotationMove:(id)arg1 mapView:(id)arg2 ;
-(void)zoomToFitLocation:(id)arg1 forMapView:(id)arg2 ;
-(void)setGr:(FMFWildcardGestureRecognizer *)arg1 ;
-(void)handleGesture:(id)arg1 ;
-(void)endTouches;
-(void)setRespondingToUserTouch:(char)arg1 ;
-(id)accuracyCircleForLocation:(id)arg1 ;
-(void)slideAnnotation:(id)arg1 intoViewIfNeededForMapView:(id)arg2 ;
-(char)respondingToUserTouch;
-(id)fmfOverlayColorSatellite;
-(id)fmfOverlayColor;
-(void)_moveCenterByOffset:(CGPoint)arg1 from:(SCD_Struct_FM2)arg2 mapView:(id)arg3 ;
-(char)regionIsValid:(SCD_Struct_FM3)arg1 ;
-(NSEdgeInsets)edgeInsetsWithMinApplied:(NSEdgeInsets)arg1 ;
-(FMFWildcardGestureRecognizer *)gr;
-(void)mapView:(id)arg1 regionWillChangeAnimated:(char)arg2 ;
-(void)mapView:(id)arg1 regionDidChangeAnimated:(char)arg2 ;
-(void)mapViewDidFinishRenderingMap:(id)arg1 fullyRendered:(char)arg2 ;
-(id)mapView:(id)arg1 viewForAnnotation:(id)arg2 ;
-(void)mapView:(id)arg1 didSelectAnnotationView:(id)arg2 ;
-(void)mapView:(id)arg1 didDeselectAnnotationView:(id)arg2 ;
-(void)mapView:(id)arg1 didUpdateUserLocation:(id)arg2 ;
-(id)mapView:(id)arg1 rendererForOverlay:(id)arg2 ;
-(void)setDelegate:(id<FMFMapViewDelegateInternalDelegate>)arg1 ;
-(id<FMFMapViewDelegateInternalDelegate>)delegate;
@end

