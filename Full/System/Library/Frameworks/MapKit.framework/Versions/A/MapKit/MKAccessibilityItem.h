/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:11 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <MapKit/MapKit-Structs.h>
@class MKMapView, NSString;

@interface MKAccessibilityItem : NSObject {

	MKMapView* _mapView;
	long long _type;
	NSString* _title;
	CGRect _frame;
	CGPoint _coordinate;
	char _selectable;

}

@property (nonatomic,retain) MKMapView * mapView;                              //@synthesize mapView=_mapView - In the implementation block
@property (assign,nonatomic) long long type;                                   //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) CGRect frame;                                     //@synthesize frame=_frame - In the implementation block
@property (nonatomic,copy) NSString * title;                                   //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) CGPoint coordinate;                               //@synthesize coordinate=_coordinate - In the implementation block
@property (assign,getter=isSelectable,nonatomic) char selectable;              //@synthesize selectable=_selectable - In the implementation block
-(CGRect)_frameForCoodinate:(CGPoint)arg1 size:(CGSize)arg2 mapView:(id)arg3 ;
-(id)positionValue;
-(id)initWithLabelMarker:(id)arg1 mapView:(id)arg2 ;
-(id)initWithAnnotationMarker:(id)arg1 mapView:(id)arg2 ;
-(CGPoint)coordinate;
-(void)setCoordinate:(CGPoint)arg1 ;
-(void)setMapView:(MKMapView *)arg1 ;
-(MKMapView *)mapView;
-(void)setFrame:(CGRect)arg1 ;
-(id)description;
-(CGRect)frame;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)sizeValue;
-(id)accessibilityHitTest:(CGPoint)arg1 ;
-(char)accessibilityIsIgnored;
-(id)accessibilityAttributeNames;
-(id)accessibilityAttributeValue:(id)arg1 ;
-(id)accessibilityActionDescription:(id)arg1 ;
-(char)accessibilityIsAttributeSettable:(id)arg1 ;
-(id)accessibilityActionNames;
-(void)accessibilityPerformAction:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(long long)type;
-(void)setSelectable:(char)arg1 ;
-(char)isSelectable;
-(void)setType:(long long)arg1 ;
@end

