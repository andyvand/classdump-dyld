/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:01 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <AppKit/NSView.h>
#import <MapKit/MKLocationManagerObserver.h>

@protocol _MKResultViewDelegate;
@class NSArray, CLLocation, NSMutableArray, MKLocationManager, NSString, NSTimer, MKUILabel, NSColor, MKImageView, MKMapItem;

@interface _MKResultView : NSView <MKLocationManagerObserver> {

	NSArray* _mapItems;
	CLLocation* _referenceLocation;
	char _alwaysUsesBusinessLayout;
	int _layoutType;
	id<_MKResultViewDelegate> delegate;
	char _selected;
	char _showsDistance;
	NSMutableArray* _resultConstraints;
	MKLocationManager* _locManager;
	NSString* _primaryLabelText;
	NSString* _secondaryLabelText;
	NSTimer* _refLocationTimer;
	char _isResizableImage;
	MKUILabel* _nameLabel;
	MKUILabel* _secondaryLabel;
	MKUILabel* _tertiaryLabel;
	id<_MKResultViewDelegate> _delegate;
	double _fallbackDistance;
	NSColor* _primaryTextColor;
	NSColor* _secondaryTextColor;
	MKImageView* _imageView;

}

@property (assign,nonatomic,__weak) id<_MKResultViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) double preferredHeight; 
@property (nonatomic,retain) NSColor * primaryTextColor;                             //@synthesize primaryTextColor=_primaryTextColor - In the implementation block
@property (nonatomic,retain) NSColor * secondaryTextColor;                           //@synthesize secondaryTextColor=_secondaryTextColor - In the implementation block
@property (nonatomic,retain) MKMapItem * mapItem; 
@property (nonatomic,retain) NSString * primaryLabelText; 
@property (nonatomic,retain) NSString * secondaryLabelText; 
@property (nonatomic,retain) NSArray * mapItems; 
@property (nonatomic,retain) CLLocation * referenceLocation;                         //@synthesize referenceLocation=_referenceLocation - In the implementation block
@property (assign,nonatomic) char selected; 
@property (assign,nonatomic) char showsDistance; 
@property (assign,nonatomic) double fallbackDistance;                                //@synthesize fallbackDistance=_fallbackDistance - In the implementation block
@property (assign,nonatomic) char alwaysUsesBusinessLayout;                          //@synthesize alwaysUsesBusinessLayout=_alwaysUsesBusinessLayout - In the implementation block
@property (nonatomic,retain) MKImageView * imageView;                                //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) MKUILabel * nameLabel;                                  //@synthesize nameLabel=_nameLabel - In the implementation block
@property (nonatomic,retain) MKUILabel * secondaryLabel;                             //@synthesize secondaryLabel=_secondaryLabel - In the implementation block
@property (nonatomic,retain) MKUILabel * tertiaryLabel;                              //@synthesize tertiaryLabel=_tertiaryLabel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)requiresConstraintBasedLayout;
-(void)commonInit;
-(void)locationManagerDidPauseLocationUpdates:(id)arg1 ;
-(void)locationManagerDidResumeLocationUpdates:(id)arg1 ;
-(MKMapItem *)mapItem;
-(id)initWithMapItem:(id)arg1 ;
-(void)setReferenceLocation:(CLLocation *)arg1 ;
-(void)setMapItem:(MKMapItem *)arg1 ;
-(double)preferredHeight;
-(void)locationManagerUpdatedLocation:(id)arg1 ;
-(void)locationManagerFailedToUpdateLocation:(id)arg1 withError:(id)arg2 ;
-(void)locationManagerDidReset:(id)arg1 ;
-(char)locationManagerShouldPauseLocationUpdates:(id)arg1 ;
-(void)setMapItems:(NSArray *)arg1 ;
-(void)setPrimaryLabelText:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 highlightsOnTouch:(char)arg2 ;
-(void)setPrimaryTextColor:(NSColor *)arg1 ;
-(void)setSecondaryTextColor:(NSColor *)arg1 ;
-(void)setShowsDistance:(char)arg1 ;
-(MKUILabel *)nameLabel;
-(MKUILabel *)secondaryLabel;
-(MKUILabel *)tertiaryLabel;
-(id)_labelWithFontSize:(double)arg1 ;
-(void)_updateColors;
-(void)_updatePrimaryColors;
-(void)_updateSecondaryColors;
-(NSColor *)primaryTextColor;
-(NSColor *)secondaryTextColor;
-(CGSize)_imageSize;
-(double)_expectedHeightForLabels;
-(void)addLabelIfNecessary:(id)arg1 ;
-(unsigned long long)_maxSecondaryStringLengthForEndingString:(id)arg1 ;
-(unsigned long long)_maxNameLengthForEndingString:(id)arg1 ;
-(id)_defaultPrimaryLabel;
-(id)_defaultSecondaryCategoryLabel;
-(char)showsDistance;
-(CLLocation *)referenceLocation;
-(double)fallbackDistance;
-(void)_updateLayoutForAddress;
-(void)_updateLayoutForBusinessOrCategory;
-(void)updateImageView;
-(void)setNeedsUpdateConstraints;
-(void)_cancelReferenceLocationTimer;
-(void)_fireReferenceLocationTimer;
-(id)initWithMapItems:(id)arg1 primaryLabelText:(id)arg2 ;
-(NSString *)primaryLabelText;
-(NSString *)secondaryLabelText;
-(void)setSecondaryLabelText:(NSString *)arg1 ;
-(void)setNameLabel:(MKUILabel *)arg1 ;
-(void)setSecondaryLabel:(MKUILabel *)arg1 ;
-(void)setTertiaryLabel:(MKUILabel *)arg1 ;
-(char)alwaysUsesBusinessLayout;
-(void)setAlwaysUsesBusinessLayout:(char)arg1 ;
-(void)setFallbackDistance:(double)arg1 ;
-(char)selected;
-(void)updateSubviews;
-(NSArray *)mapItems;
-(id)init;
-(void)setDelegate:(id<_MKResultViewDelegate>)arg1 ;
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)updateConstraints;
-(CGSize)intrinsicContentSize;
-(id<_MKResultViewDelegate>)delegate;
-(void)mouseUp:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setSelected:(char)arg1 ;
-(void)setImageView:(MKImageView *)arg1 ;
-(MKImageView *)imageView;
-(void)updateLayout;
@end

