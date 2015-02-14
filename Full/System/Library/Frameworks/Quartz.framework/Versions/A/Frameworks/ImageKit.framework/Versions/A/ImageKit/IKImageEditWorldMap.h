/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:59 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ImageKit/ImageKit-Structs.h>
#import <AppKit/NSView.h>
#import <ImageKit/MKAnnotation.h>

@class NSString;

@interface IKImageEditWorldMap : NSView <MKAnnotation> {

	id _mapView;
	char _usesMapKit;
	unsigned long long _mapType;
	CGSize _coordinate;

}

@property (retain) id mapView;                                        //@synthesize mapView=_mapView - In the implementation block
@property (assign) unsigned long long mapType;                        //@synthesize mapType=_mapType - In the implementation block
@property (nonatomic,readonly) CGSize coordinate;                     //@synthesize coordinate=_coordinate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
-(void)commonInit;
-(unsigned long long)mapType;
-(void)setMapType:(unsigned long long)arg1 ;
-(CGSize)coordinate;
-(void)setLongitude:(double)arg1 latitude:(double)arg2 ;
-(void)setMapView:(id)arg1 ;
-(id)mapView;
-(void)setOldStyleLongitude:(double)arg1 latitude:(double)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSString *)title;
-(NSString *)subtitle;
@end

