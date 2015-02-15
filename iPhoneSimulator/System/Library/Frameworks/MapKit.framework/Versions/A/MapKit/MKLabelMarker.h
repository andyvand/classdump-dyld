/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:05 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKAnnotation.h>

@class NSString, VKLabelMarker, NSView, NSColor;

@interface MKLabelMarker : NSObject <MKAnnotation> {

	VKLabelMarker* _vkLabelMarker;
	NSView* leftCalloutAccessoryView;
	NSColor* leftCalloutAccessoryViewBackgroundColor;
	NSView* rightCalloutAccessoryView;
	NSView* detailCalloutAccessoryView;
	id representedObject;

}

@property (nonatomic,retain) NSView * leftCalloutAccessoryView; 
@property (nonatomic,retain) NSColor * leftCalloutAccessoryViewBackgroundColor; 
@property (nonatomic,retain) NSView * rightCalloutAccessoryView; 
@property (nonatomic,retain) NSView * detailCalloutAccessoryView; 
@property (readonly) CGRect calloutAnchorRect; 
@property (nonatomic,retain) id representedObject; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CGPoint coordinate; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
-(id)initWithLabelMarker:(id)arg1 ;
-(id)vkLabelMarker;
-(NSView *)leftCalloutAccessoryView;
-(void)setLeftCalloutAccessoryView:(NSView *)arg1 ;
-(NSColor *)leftCalloutAccessoryViewBackgroundColor;
-(void)setLeftCalloutAccessoryViewBackgroundColor:(NSColor *)arg1 ;
-(NSView *)rightCalloutAccessoryView;
-(void)setRightCalloutAccessoryView:(NSView *)arg1 ;
-(NSView *)detailCalloutAccessoryView;
-(void)setDetailCalloutAccessoryView:(NSView *)arg1 ;
-(CGPoint)coordinate;
-(CGPoint)calloutAnchorPointWithCanvasSize:(CGSize)arg1 canvasScale:(double)arg2 snapToPixels:(char)arg3 ;
-(CGPoint)screenPointToScrollRelativeToWithCanvasSize:(CGSize)arg1 canvasScale:(double)arg2 ;
-(id)debugAnchorPointString;
-(CGRect)calloutAnchorRect;
-(char)isEqual:(id)arg1 ;
-(NSString *)title;
-(id)representedObject;
-(void)setRepresentedObject:(id)arg1 ;
@end

