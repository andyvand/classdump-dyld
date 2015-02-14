/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:19 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/_MKUIViewController.h>

@protocol MKPlaceActionsViewControllerDelegate;
@class _MKPlaceViewController, MKMapItem, MKLinkTextField, MKInfoCardFooterViewController, NSView, NSLayoutConstraint, NSAttributedString;

@interface MKPlaceActionsViewController : _MKUIViewController {

	char showContactActions;
	char showRemovePin;
	char showReportAProblem;
	char showSharing;
	char showCreateReminder;
	char showSimulateLocation;
	char showOpenInSkyline;
	_MKPlaceViewController* _owner;
	MKMapItem* mapItem;
	id<MKPlaceActionsViewControllerDelegate> actionDelegate;
	MKLinkTextField* moreInfoTextField;
	MKInfoCardFooterViewController* footerViewController;
	NSView* actionsContainer;
	NSLayoutConstraint* bottomConstraint;
	NSAttributedString* _attributionString;

}

@property (assign,nonatomic,__weak) _MKPlaceViewController * owner;                                       //@synthesize owner=_owner - In the implementation block
@property (assign,nonatomic,__weak) MKInfoCardFooterViewController * footerViewController; 
@property (nonatomic,copy) NSAttributedString * attributionString;                                        //@synthesize attributionString=_attributionString - In the implementation block
@property (nonatomic,retain) MKMapItem * mapItem; 
@property (assign,nonatomic,__weak) id<MKPlaceActionsViewControllerDelegate> actionDelegate; 
@property (assign,nonatomic) char showContactActions; 
@property (assign,nonatomic) char showRemovePin; 
@property (assign,nonatomic) char showReportAProblem; 
@property (assign,nonatomic) char showSharing; 
@property (assign,nonatomic) char showCreateReminder; 
@property (assign,nonatomic) char showSimulateLocation; 
@property (assign,nonatomic) char showOpenInSkyline; 
@property (assign,nonatomic,__weak) MKLinkTextField * moreInfoTextField; 
@property (assign,nonatomic,__weak) NSView * actionsContainer; 
@property (assign,nonatomic,__weak) NSLayoutConstraint * bottomConstraint; 
+(id)keyPathsForValuesAffectingMoreInfoAttributedString;
-(MKMapItem *)mapItem;
-(void)setMapItem:(MKMapItem *)arg1 ;
-(void)setAttributionString:(NSAttributedString *)arg1 ;
-(MKInfoCardFooterViewController *)footerViewController;
-(char)showContactActions;
-(void)setShowContactActions:(char)arg1 ;
-(char)showRemovePin;
-(void)setShowRemovePin:(char)arg1 ;
-(void)setShowSharing:(char)arg1 ;
-(char)showReportAProblem;
-(void)setShowReportAProblem:(char)arg1 ;
-(char)showCreateReminder;
-(void)setShowCreateReminder:(char)arg1 ;
-(char)showSimulateLocation;
-(void)setShowSimulateLocation:(char)arg1 ;
-(char)showOpenInSkyline;
-(void)setShowOpenInSkyline:(char)arg1 ;
-(void)setActionDelegate:(id<MKPlaceActionsViewControllerDelegate>)arg1 ;
-(void)updateActions;
-(NSAttributedString *)attributionString;
-(MKLinkTextField *)moreInfoTextField;
-(NSView *)actionsContainer;
-(id<MKPlaceActionsViewControllerDelegate>)actionDelegate;
-(char)showSharing;
-(void)setMoreInfoTextField:(MKLinkTextField *)arg1 ;
-(void)setFooterViewController:(MKInfoCardFooterViewController *)arg1 ;
-(void)setActionsContainer:(NSView *)arg1 ;
-(NSLayoutConstraint *)bottomConstraint;
-(void)setBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(id)init;
-(void)viewDidLoad;
-(id)nibName;
-(id)nibBundle;
-(void)setOwner:(_MKPlaceViewController *)arg1 ;
-(_MKPlaceViewController *)owner;
@end

