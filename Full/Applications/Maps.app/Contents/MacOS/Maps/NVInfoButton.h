/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:39:43 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Maps.app/Contents/MacOS/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <AppKit/NSButton.h>

@class NVPlace, MKAnnotationView, MKLabelMarker;

@interface NVInfoButton : NSButton {

	NVPlace* _place;
	MKAnnotationView* _annotationView;
	MKLabelMarker* _labelMarker;

}

@property (retain) NVPlace * place;                                //@synthesize place=_place - In the implementation block
@property (__weak) MKAnnotationView * annotationView;              //@synthesize annotationView=_annotationView - In the implementation block
@property (retain) MKLabelMarker * labelMarker;                    //@synthesize labelMarker=_labelMarker - In the implementation block
-(MKLabelMarker *)labelMarker;
-(void)setLabelMarker:(MKLabelMarker *)arg1 ;
-(MKAnnotationView *)annotationView;
-(void)setAnnotationView:(MKAnnotationView *)arg1 ;
-(void)setPlace:(NVPlace *)arg1 ;
-(NVPlace *)place;
-(id)initWithFrame:(CGRect)arg1 ;
-(char)canBecomeKeyView;
@end
