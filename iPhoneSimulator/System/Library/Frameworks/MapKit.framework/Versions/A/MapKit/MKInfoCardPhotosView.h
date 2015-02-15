/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:06 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/_MKUIViewControllerRootView.h>

@class NSCollectionView, NSLayoutConstraint, NSArrayController, NSArray, MKMapItem, MKPlaceAttributionCell, NSAttributedString;

@interface MKInfoCardPhotosView : _MKUIViewControllerRootView {

	NSCollectionView* collectionView;
	NSLayoutConstraint* _constraintToRemove;
	NSArrayController* photosArrayController;
	NSLayoutConstraint* _constraint;
	NSArray* _attributionConstraints;
	NSArray* _nonattributionConstraints;
	MKMapItem* mapItem;
	MKPlaceAttributionCell* _attribution;
	NSAttributedString* _attributionString;

}

@property (nonatomic,retain) MKMapItem * mapItem; 
@property (nonatomic,copy) NSAttributedString * attributionString;              //@synthesize attributionString=_attributionString - In the implementation block
@property (nonatomic,retain) MKPlaceAttributionCell * attribution;              //@synthesize attribution=_attribution - In the implementation block
-(MKMapItem *)mapItem;
-(void)setMapItem:(MKMapItem *)arg1 ;
-(void)setAttributionString:(NSAttributedString *)arg1 ;
-(void)refreshContent;
-(NSAttributedString *)attributionString;
-(MKPlaceAttributionCell *)attribution;
-(void)setAttribution:(MKPlaceAttributionCell *)arg1 ;
-(void)updateConstraints;
-(void)awakeFromNib;
@end

