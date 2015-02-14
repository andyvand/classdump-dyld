/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:12 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/_MKUIViewControllerRootView.h>

@class NSTextField, MKMapItem, NSView, NSLayoutConstraint, MKImageView, NSString, NSAttributedString;

@interface MKInfoCardAttributesView : _MKUIViewControllerRootView {

	char _loaded;
	NSTextField* _subtitleField;
	MKMapItem* _mapItem;
	NSView* bottomView;
	NSLayoutConstraint* bottomConstraint;
	MKImageView* mapSnapshotView;
	NSView* _actionsButtonContainer;
	NSString* _subtitle;
	NSAttributedString* _attributionString;

}

@property (nonatomic,retain) MKMapItem * mapItem;                                       //@synthesize mapItem=_mapItem - In the implementation block
@property (assign,nonatomic,__weak) NSView * bottomView; 
@property (assign,nonatomic,__weak) NSLayoutConstraint * bottomConstraint; 
@property (assign,nonatomic,__weak) MKImageView * mapSnapshotView; 
@property (assign,nonatomic,__weak) NSView * actionsButtonContainer;                    //@synthesize actionsButtonContainer=_actionsButtonContainer - In the implementation block
@property (nonatomic,copy) NSAttributedString * attributionString;                      //@synthesize attributionString=_attributionString - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                                         //@synthesize subtitle=_subtitle - In the implementation block
-(MKMapItem *)mapItem;
-(void)setMapItem:(MKMapItem *)arg1 ;
-(void)setAttributionString:(NSAttributedString *)arg1 ;
-(void)updateInlineMapWithRefinedMapItem:(id)arg1 ;
-(NSAttributedString *)attributionString;
-(NSView *)bottomView;
-(void)setBottomView:(NSView *)arg1 ;
-(void)refreshContent:(char)arg1 showTitleAndSubtitle:(char)arg2 ;
-(NSView *)actionsButtonContainer;
-(MKImageView *)mapSnapshotView;
-(id)_textField;
-(id)_clickableTextField;
-(id)tintedImageForGlyphName:(id)arg1 ;
-(void)setMapSnapshotView:(MKImageView *)arg1 ;
-(void)setActionsButtonContainer:(NSView *)arg1 ;
-(void)computeMapSnapshotWithMapItem:(id)arg1 ;
-(NSLayoutConstraint *)bottomConstraint;
-(void)setBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(void)viewDidMoveToWindow;
-(NSString *)subtitle;
-(void)setSubtitle:(NSString *)arg1 ;
@end

