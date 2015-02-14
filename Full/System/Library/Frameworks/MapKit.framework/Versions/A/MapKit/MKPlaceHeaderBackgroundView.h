/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:11 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <AppKit/NSView.h>
#import <MapKit/MKPlaceHeaderViewCinematics.h>

@protocol MKPlaceHeaderBackgroundViewDelegate;
@class MKMapItem, NSString;

@interface MKPlaceHeaderBackgroundView : NSView <MKPlaceHeaderViewCinematics> {

	long long _backgroundType;
	MKMapItem* _mapItem;
	id<MKPlaceHeaderBackgroundViewDelegate> _delegate;
	long long _preparationState;

}

@property (assign,nonatomic,__weak) id<MKPlaceHeaderBackgroundViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long backgroundType;                                             //@synthesize backgroundType=_backgroundType - In the implementation block
@property (assign,nonatomic) long long preparationState;                                           //@synthesize preparationState=_preparationState - In the implementation block
@property (nonatomic,retain) MKMapItem * mapItem;                                                  //@synthesize mapItem=_mapItem - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)classForBackgroundType:(long long)arg1 ;
+(long long)backgroundTypeForMapItem:(id)arg1 ;
+(id)backgroundViewForBackgroundType:(long long)arg1 mapItem:(id)arg2 headerView:(id)arg3 ;
+(id)backgroundViewForMapItem:(id)arg1 headerView:(id)arg2 ;
-(MKMapItem *)mapItem;
-(void)setMapItem:(MKMapItem *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 mapItem:(id)arg2 ;
-(void)prepareForPresentation;
-(void)setPreparationState:(long long)arg1 ;
-(long long)preparationState;
-(void)present;
-(long long)backgroundType;
-(void)setDelegate:(id<MKPlaceHeaderBackgroundViewDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<MKPlaceHeaderBackgroundViewDelegate>)delegate;
-(id)hitTest:(CGPoint)arg1 ;
-(void)resume;
-(void)reset;
-(void)setBackgroundType:(long long)arg1 ;
-(void)pause;
@end

