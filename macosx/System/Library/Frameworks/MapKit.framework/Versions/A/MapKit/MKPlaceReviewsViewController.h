/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:20 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/_MKUIViewController.h>
#import <MapKit/NSTableViewDelegate.h>

@protocol MKPlaceCardReviewsControllerDelegate;
@class MKInfoCardReviewCellView, MKMapItem, _MKPlaceViewController, MKInfoCardFooterViewController, NSArrayController, NSArray, NSString;

@interface MKPlaceReviewsViewController : _MKUIViewController <NSTableViewDelegate> {

	MKInfoCardReviewCellView* _reusableCell;
	MKMapItem* mapItem;
	id<MKPlaceCardReviewsControllerDelegate> reviewsControllerDelegate;
	_MKPlaceViewController* _owner;
	MKInfoCardFooterViewController* footerViewController;
	NSArrayController* reviewsController;

}

@property (nonatomic,retain) MKMapItem * mapItem; 
@property (assign,nonatomic,__weak) id<MKPlaceCardReviewsControllerDelegate> reviewsControllerDelegate; 
@property (assign,nonatomic,__weak) _MKPlaceViewController * owner;                                                  //@synthesize owner=_owner - In the implementation block
@property (assign,nonatomic,__weak) MKInfoCardFooterViewController * footerViewController; 
@property (assign,nonatomic,__weak) NSArrayController * reviewsController; 
@property (nonatomic,readonly) NSArray * reviews; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)keyPathsForValuesAffectingReviews;
-(MKMapItem *)mapItem;
-(void)setMapItem:(MKMapItem *)arg1 ;
-(void)setReviewsControllerDelegate:(id<MKPlaceCardReviewsControllerDelegate>)arg1 ;
-(MKInfoCardFooterViewController *)footerViewController;
-(void)setFooterViewController:(MKInfoCardFooterViewController *)arg1 ;
-(NSArrayController *)reviewsController;
-(id<MKPlaceCardReviewsControllerDelegate>)reviewsControllerDelegate;
-(void)setReviewsController:(NSArrayController *)arg1 ;
-(NSArray *)reviews;
-(id)init;
-(id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3 ;
-(void)tableView:(id)arg1 didAddRowView:(id)arg2 forRow:(long long)arg3 ;
-(double)tableView:(id)arg1 heightOfRow:(long long)arg2 ;
-(void)viewDidLoad;
-(id)nibName;
-(id)nibBundle;
-(void)setOwner:(_MKPlaceViewController *)arg1 ;
-(_MKPlaceViewController *)owner;
@end

