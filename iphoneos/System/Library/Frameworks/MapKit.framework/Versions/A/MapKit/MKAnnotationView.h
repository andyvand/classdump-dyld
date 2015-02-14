/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:50 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <AppKit/NSView.h>
#import <MapKit/MKAnnotationRepresentation.h>
#import <MapKit/MKLocatableObject.h>

@protocol MKAnnotation;
@class MKUserLocationAnnotationViewProxy, _MKAnnotationViewAnchor, GEORouteMatch, MKAnnotationManager, MKCalloutView, NSView, NSString, NSImage, NSColor, VKAnchorWrapper;

@interface MKAnnotationView : NSView <MKAnnotationRepresentation, MKLocatableObject> {

	char _customTransformApplied;
	char _internalTransformApplied;
	char _animatingToCoordinate;
	char _tracking;
	CGPoint _presentationCoordinate;
	double _presentationCourse;
	/*^block*/id _presentationCoordinateChangedCallback;
	MKUserLocationAnnotationViewProxy* _userLocationProxy;
	double _rotationRadians;
	_MKAnnotationViewAnchor* _anchor;
	GEORouteMatch* _routeMatch;
	double _mapRotationRadians;
	char _explicitlyHidden;
	char _hiddenForOffscreen;
	char _hiddenForInvalidPoint;
	double _mapPitchRadians;
	unsigned long long _mapDisplayStyle;
	MKAnnotationManager* _annotationManager;
	id<MKAnnotation> _annotation;
	MKCalloutView* _calloutView;
	NSView* _leftCalloutAccessoryView;
	NSView* _rightCalloutAccessoryView;
	NSView* _detailCalloutAccessoryView;
	NSString* _reuseIdentifier;
	NSImage* _image;
	unsigned long long _mapType;
	unsigned long long _zIndex;
	CGPoint _centerOffset;
	CGPoint _calloutOffset;
	CGPoint _leftCalloutOffset;
	CGPoint _rightCalloutOffset;
	unsigned long long _dragState;
	/*^block*/id _calloutHitTest;
	struct {
		unsigned disabled : 1;
		unsigned selected : 1;
		unsigned canShowCallout : 1;
		unsigned isHighlighted : 1;
		unsigned canDisplayDisclosureInCallout : 1;
		unsigned canDisplayPlacemarkInCallout : 1;
		unsigned draggable : 1;
	}  _flags;
	NSColor* _leftCalloutAccessoryViewBackgroundColor;

}

@property (nonatomic,readonly) NSString * reuseIdentifier; 
@property (nonatomic,retain) id<MKAnnotation> annotation; 
@property (nonatomic,retain) NSImage * image; 
@property (assign,nonatomic) CGPoint centerOffset; 
@property (assign,nonatomic) CGPoint calloutOffset; 
@property (assign,nonatomic) CGPoint leftCalloutOffset;                                                                                  //@synthesize leftCalloutOffset=_leftCalloutOffset - In the implementation block
@property (assign,nonatomic) CGPoint rightCalloutOffset;                                                                                 //@synthesize rightCalloutOffset=_rightCalloutOffset - In the implementation block
@property (assign,getter=isEnabled,nonatomic) char enabled; 
@property (assign,getter=isHighlighted,nonatomic) char highlighted; 
@property (assign,getter=isSelected,nonatomic) char selected; 
@property (assign,nonatomic) char canShowCallout; 
@property (nonatomic,retain) NSView * leftCalloutAccessoryView;                                                                          //@synthesize leftCalloutAccessoryView=_leftCalloutAccessoryView - In the implementation block
@property (nonatomic,retain) NSView * rightCalloutAccessoryView;                                                                         //@synthesize rightCalloutAccessoryView=_rightCalloutAccessoryView - In the implementation block
@property (assign,getter=isDraggable,nonatomic) char draggable; 
@property (assign,nonatomic) unsigned long long dragState; 
@property (getter=_significantBounds,nonatomic,readonly) CGRect significantBounds; 
@property (nonatomic,readonly) CGRect _significantFrame; 
@property (nonatomic,retain) NSView * detailCalloutAccessoryView;                                                                        //@synthesize detailCalloutAccessoryView=_detailCalloutAccessoryView - In the implementation block
@property (nonatomic,retain) NSColor * leftCalloutAccessoryViewBackgroundColor;                                                          //@synthesize leftCalloutAccessoryViewBackgroundColor=_leftCalloutAccessoryViewBackgroundColor - In the implementation block
@property (assign,setter=_setPresentationCoordinate:,nonatomic) CGPoint _presentationCoordinate;                                         //@synthesize presentationCoordinate=_presentationCoordinate - In the implementation block
@property (setter=_setPresentationCoordinateChangedCallback:,nonatomic,copy) id _presentationCoordinateChangedCallback;                  //@synthesize presentationCoordinateChangedCallback=_presentationCoordinateChangedCallback - In the implementation block
@property (assign,setter=_setPresentationCourse:,nonatomic) double _presentationCourse;                                                  //@synthesize presentationCourse=_presentationCourse - In the implementation block
@property (assign,setter=_setAnimatingToCoordinate:,getter=_isAnimatingToCoordinate,nonatomic) char _animatingToCoordinate;              //@synthesize animatingToCoordinate=_animatingToCoordinate - In the implementation block
@property (assign,setter=_setTracking:,getter=_isTracking,nonatomic) char _tracking;                                                     //@synthesize tracking=_tracking - In the implementation block
@property (assign,setter=_setMapDisplayStyle:,getter=_mapDisplayStyle,nonatomic) unsigned long long mapDisplayStyle;                     //@synthesize mapDisplayStyle=_mapDisplayStyle - In the implementation block
@property (assign,setter=_setMapRotationRadians:,getter=_mapRotationRadians,nonatomic) double mapRotationRadians;                        //@synthesize mapRotationRadians=_mapRotationRadians - In the implementation block
@property (assign,setter=_setMapPitchRadians:,getter=_mapPitchRadians,nonatomic) double mapPitchRadians;                                 //@synthesize mapPitchRadians=_mapPitchRadians - In the implementation block
@property (nonatomic,copy) id _calloutHitTest;                                                                                           //@synthesize calloutHitTest=_calloutHitTest - In the implementation block
@property (assign,setter=_setAnnotationManager:,nonatomic,__weak) MKAnnotationManager * _annotationManager;                              //@synthesize annotationManager=_annotationManager - In the implementation block
@property (nonatomic,readonly) VKAnchorWrapper * anchor; 
@property (assign,setter=_setHiddenForInvalidPoint:,getter=_isHiddenForInvalidPoint,nonatomic) char hiddenForInvalidPoint;               //@synthesize hiddenForInvalidPoint=_hiddenForInvalidPoint - In the implementation block
@property (assign) CGPoint center; 
@property (setter=_setRouteMatch:,nonatomic,retain) GEORouteMatch * _routeMatch;                                                         //@synthesize routeMatch=_routeMatch - In the implementation block
@property (nonatomic,readonly) MKUserLocationAnnotationViewProxy * _userLocationProxy; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CGPoint coordinate; 
+(char)_followsTerrain;
+(id)currentLocationTitle;
+(id)droppedPinTitle;
+(unsigned long long)_zIndex;
+(unsigned long long)_selectedZIndex;
+(char)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(MKUserLocationAnnotationViewProxy *)_userLocationProxy;
-(CGRect)_significantFrame;
-(id)_vkMarker;
-(MKAnnotationManager *)_annotationManager;
-(id)_annotationContainer;
-(unsigned long long)_mapType;
-(CGPoint)_presentationCoordinate;
-(void)_setPresentationCoordinate:(CGPoint)arg1 ;
-(double)_presentationCourse;
-(void)_setPresentationCourse:(double)arg1 ;
-(void)_setAnimatingToCoordinate:(char)arg1 ;
-(char)_isTracking;
-(void)_setTracking:(char)arg1 ;
-(GEORouteMatch *)_routeMatch;
-(void)_setRouteMatch:(id)arg1 ;
-(CGRect)_significantBounds;
-(void)_setMapPitchRadians:(double)arg1 ;
-(void)_setMapType:(unsigned long long)arg1 ;
-(void)_setMapDisplayStyle:(unsigned long long)arg1 ;
-(void)_setRotationRadians:(double)arg1 withAnimation:(id)arg2 ;
-(void)setSelected:(char)arg1 animated:(char)arg2 ;
-(void)_setZIndex:(unsigned long long)arg1 ;
-(void)_updateFromMap;
-(void)_didUpdatePosition;
-(unsigned long long)_orientationCount;
-(CGPoint)_draggingDropOffset;
-(void)_setPresentationCoordinateChangedCallback:(/*^block*/id)arg1 ;
-(void)_enableRotationForHeadingMode:(double)arg1 ;
-(void)_transitionFrom:(long long)arg1 to:(long long)arg2 duration:(double)arg3 ;
-(double)_mapPitchRadians;
-(unsigned long long)_mapDisplayStyle;
-(char)_hasAlternateOrientation;
-(char)_canChangeOrientation;
-(double)_pointsForDistance:(double)arg1 ;
-(id)_calloutView;
-(CGRect)_mapkit_visibleRect;
-(void)setLeftCalloutOffset:(CGPoint)arg1 ;
-(void)setRightCalloutOffset:(CGPoint)arg1 ;
-(double)_mapRotationRadians;
-(void)_setMapRotationRadians:(double)arg1 ;
-(NSView *)leftCalloutAccessoryView;
-(void)setLeftCalloutAccessoryView:(NSView *)arg1 ;
-(NSColor *)leftCalloutAccessoryViewBackgroundColor;
-(void)setLeftCalloutAccessoryViewBackgroundColor:(NSColor *)arg1 ;
-(NSView *)rightCalloutAccessoryView;
-(void)setRightCalloutAccessoryView:(NSView *)arg1 ;
-(NSView *)detailCalloutAccessoryView;
-(void)setDetailCalloutAccessoryView:(NSView *)arg1 ;
-(void)_setCalloutView:(id)arg1 ;
-(void)set_calloutHitTest:(id)arg1 ;
-(CGPoint)rightCalloutOffset;
-(CGPoint)leftCalloutOffset;
-(void)_setHiddenForOffscreen:(char)arg1 ;
-(id)_contentLayer;
-(id)_containerView;
-(void)_resetZIndex;
-(void)_setAnnotationManager:(id)arg1 ;
-(id)_presentationCoordinateChangedCallback;
-(void)_setZIndex:(unsigned long long)arg1 notify:(char)arg2 ;
-(char)_canDisplayDisclosureInCallout;
-(void)_setCanDisplayDisclosureInCallout:(char)arg1 ;
-(char)_canDisplayPlacemarkInCallout;
-(void)_setCanDisplayPlacemarkInCallout:(char)arg1 ;
-(void)_resetZIndexNotify:(char)arg1 ;
-(void)_setHiddenForInvalidPoint:(char)arg1 ;
-(char)_isAnimatingToCoordinate;
-(id)_calloutHitTest;
-(char)_isHiddenForInvalidPoint;
-(unsigned long long)_zIndex;
-(CGPoint)coordinate;
-(void)setDragState:(unsigned long long)arg1 animated:(char)arg2 ;
-(CGPoint)calloutOffset;
-(id<MKAnnotation>)annotation;
-(id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2 ;
-(void)setAnnotation:(id<MKAnnotation>)arg1 ;
-(void)setDragState:(unsigned long long)arg1 ;
-(char)isPersistent;
-(NSString *)reuseIdentifier;
-(char)canShowCallout;
-(void)setCanShowCallout:(char)arg1 ;
-(unsigned long long)dragState;
-(char)isDraggable;
-(void)setDraggable:(char)arg1 ;
-(void)setCalloutOffset:(CGPoint)arg1 ;
-(void)setCenterOffset:(CGPoint)arg1 ;
-(CGPoint)centerOffset;
-(void)dealloc;
-(void)setHidden:(char)arg1 ;
-(char)accessibilityIsIgnored;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSImage *)image;
-(void)setImage:(NSImage *)arg1 ;
-(void)setEnabled:(char)arg1 ;
-(id)accessibilityAttributeNames;
-(id)accessibilityAttributeValue:(id)arg1 ;
-(id)accessibilityActionDescription:(id)arg1 ;
-(void)accessibilityPerformAction:(id)arg1 ;
-(char)isEnabled;
-(id)hitTest:(CGPoint)arg1 ;
-(CGPoint)center;
-(char)isFlipped;
-(char)isHighlighted;
-(void)setHighlighted:(char)arg1 ;
-(char)isSelected;
-(void)setSelected:(char)arg1 ;
-(void)prepareForReuse;
-(void)setCenter:(CGPoint)arg1 ;
-(VKAnchorWrapper *)anchor;
@end

