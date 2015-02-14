/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:51 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSViewController.h>

@class _MKPlaceViewController, MKInfoCardReportAProblemController, NSView, NSButton;

@interface MKInfoCardFooterViewController : NSViewController {

	char showAddBookmark;
	char showAddContact;
	char showFlyoverTour;
	_MKPlaceViewController* infoCardViewController;
	MKInfoCardReportAProblemController* reportAProblemController;
	NSView* writeAReviewContainer;
	NSView* directionsToFromHereContainer;
	NSView* dropPinContainer;
	NSView* bookmarkContactsContainer;
	NSButton* flyoverTourButton;
	NSButton* directionsToHereButton;
	NSView* reportAProblemContainer;

}

@property (assign,nonatomic,__weak) _MKPlaceViewController * infoCardViewController; 
@property (assign,nonatomic) char showAddBookmark; 
@property (assign,nonatomic) char showAddContact; 
@property (assign,nonatomic) char showFlyoverTour; 
@property (assign,nonatomic,__weak) MKInfoCardReportAProblemController * reportAProblemController; 
@property (assign,nonatomic,__weak) NSView * writeAReviewContainer; 
@property (assign,nonatomic,__weak) NSView * directionsToFromHereContainer; 
@property (assign,nonatomic,__weak) NSView * dropPinContainer; 
@property (assign,nonatomic,__weak) NSView * bookmarkContactsContainer; 
@property (assign,nonatomic,__weak) NSView * reportAProblemContainer; 
@property (assign,nonatomic,__weak) NSButton * flyoverTourButton; 
@property (assign,nonatomic,__weak) NSButton * directionsToHereButton; 
-(void)removeBookmark:(id)arg1 ;
-(void)addBookmark:(id)arg1 ;
-(void)setShowAddBookmark:(char)arg1 ;
-(char)showFlyoverTour;
-(void)computeDirections:(id)arg1 ;
-(void)setShowFlyoverTour:(char)arg1 ;
-(void)setInfoCardViewController:(_MKPlaceViewController *)arg1 ;
-(void)updateFooterViewForTab:(unsigned long long)arg1 ;
-(void)insertAndFillView:(id)arg1 ;
-(void)insertAtBottomOfView:(id)arg1 inView:(id)arg2 constraintToRemove:(id)arg3 ;
-(_MKPlaceViewController *)infoCardViewController;
-(void)setShowAddContact:(char)arg1 ;
-(MKInfoCardReportAProblemController *)reportAProblemController;
-(NSView *)writeAReviewContainer;
-(NSView *)directionsToFromHereContainer;
-(NSView *)dropPinContainer;
-(NSView *)bookmarkContactsContainer;
-(NSView *)reportAProblemContainer;
-(void)addToContacts:(id)arg1 ;
-(void)removePin:(id)arg1 ;
-(void)writeAReview:(id)arg1 ;
-(void)startFlyoverTour:(id)arg1 ;
-(char)showAddBookmark;
-(char)showAddContact;
-(void)setReportAProblemController:(MKInfoCardReportAProblemController *)arg1 ;
-(void)setWriteAReviewContainer:(NSView *)arg1 ;
-(void)setDirectionsToFromHereContainer:(NSView *)arg1 ;
-(void)setDropPinContainer:(NSView *)arg1 ;
-(void)setBookmarkContactsContainer:(NSView *)arg1 ;
-(NSButton *)flyoverTourButton;
-(void)setFlyoverTourButton:(NSButton *)arg1 ;
-(NSButton *)directionsToHereButton;
-(void)setDirectionsToHereButton:(NSButton *)arg1 ;
-(void)setReportAProblemContainer:(NSView *)arg1 ;
-(id)nibName;
-(id)nibBundle;
@end

