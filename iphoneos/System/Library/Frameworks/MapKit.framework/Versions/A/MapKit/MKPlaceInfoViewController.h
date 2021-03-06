/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:50 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/_MKUIViewController.h>
#import <MapKit/MKPlaceAttributionCellProvider.h>

@protocol MKPlaceInfoViewControllerDelegate;
@class MKMapItem, MKInfoCardFooterViewController, _MKPlaceViewController, MKYelpDeal, MKInfoCardAttributesView, MKInfoCardYelpDealViewController, NSString, NSAttributedString;

@interface MKPlaceInfoViewController : _MKUIViewController <MKPlaceAttributionCellProvider> {

	char _showAttribution;
	id<MKPlaceInfoViewControllerDelegate> infoDelegate;
	MKMapItem* mapItem;
	MKInfoCardFooterViewController* footerViewController;
	_MKPlaceViewController* owner;
	MKYelpDeal* _deal;
	MKInfoCardAttributesView* attributesView;
	MKInfoCardYelpDealViewController* yelpController;
	NSString* _subtitle;

}

@property (assign,nonatomic,__weak) id<MKPlaceInfoViewControllerDelegate> infoDelegate; 
@property (nonatomic,retain) MKMapItem * mapItem; 
@property (nonatomic,retain) MKYelpDeal * deal;                                                      //@synthesize deal=_deal - In the implementation block
@property (nonatomic,readonly) NSAttributedString * infoAttributionString; 
@property (nonatomic,retain) MKInfoCardFooterViewController * footerViewController; 
@property (assign,nonatomic,__weak) _MKPlaceViewController * owner; 
@property (assign,nonatomic,__weak) MKInfoCardAttributesView * attributesView; 
@property (assign,nonatomic,__weak) MKInfoCardYelpDealViewController * yelpController; 
@property (nonatomic,copy) NSString * subtitle;                                                      //@synthesize subtitle=_subtitle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) char showAttribution;                                                   //@synthesize showAttribution=_showAttribution - In the implementation block
-(MKMapItem *)mapItem;
-(void)setMapItem:(MKMapItem *)arg1 ;
-(MKYelpDeal *)deal;
-(void)setDeal:(MKYelpDeal *)arg1 ;
-(void)setInfoDelegate:(id<MKPlaceInfoViewControllerDelegate>)arg1 ;
-(void)setShowAttribution:(char)arg1 ;
-(NSAttributedString *)infoAttributionString;
-(void)updateInlineMapWithRefinedMapItem:(id)arg1 ;
-(MKInfoCardFooterViewController *)footerViewController;
-(void)setFooterViewController:(MKInfoCardFooterViewController *)arg1 ;
-(MKInfoCardAttributesView *)attributesView;
-(id<MKPlaceInfoViewControllerDelegate>)infoDelegate;
-(char)showAttribution;
-(MKInfoCardYelpDealViewController *)yelpController;
-(void)setAttributesView:(MKInfoCardAttributesView *)arg1 ;
-(void)setYelpController:(MKInfoCardYelpDealViewController *)arg1 ;
-(id)initWithContact:(id)arg1 ;
-(void)viewDidLoad;
-(id)nibName;
-(id)nibBundle;
-(void)setOwner:(_MKPlaceViewController *)arg1 ;
-(_MKPlaceViewController *)owner;
-(NSString *)subtitle;
-(void)setSubtitle:(NSString *)arg1 ;
@end

