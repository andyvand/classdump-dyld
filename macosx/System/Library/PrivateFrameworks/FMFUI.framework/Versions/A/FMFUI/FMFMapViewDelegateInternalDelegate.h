/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:16 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FMFUI.framework/Versions/A/FMFUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol FMFMapViewDelegateInternalDelegate <NSObject>
@required
-(char)shouldZoomToFitMeAndLocations;
-(void)didSelectLocation:(id)arg1;
-(void)didDeselectLocation:(id)arg1;
-(void)regionWillChangeAnimated:(char)arg1;
-(void)regionDidChangeAnimated:(char)arg1;
-(void)reZoomToFit;
-(void)didUpdateUserLocation:(id)arg1;
-(void)mapViewDidFinishRenderingMap;
-(char)viewWillAppearCalled;
-(id)_internalAnnotationTintColor;
-(void)setShouldZoomToFitNewLocations:(char)arg1;
-(id)annotationImageForHandle:(id)arg1;
-(NSEdgeInsets*)edgeInsets;

@end

