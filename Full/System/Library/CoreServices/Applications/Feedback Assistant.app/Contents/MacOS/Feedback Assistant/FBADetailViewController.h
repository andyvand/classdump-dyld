/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:44 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/CoreServices/Applications/Feedback Assistant.app/Contents/MacOS/Feedback Assistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSViewController.h>

@protocol FBAWindowDelegate;
@class FBANoResponseViewController, FBANoProjectViewController, FBASignedOutViewController, FBAResponseDetailViewController, FBAAnnouncementViewController, FBASurveyDetailViewController, NSViewController;

@interface FBADetailViewController : NSViewController {

	id<FBAWindowDelegate> _windowDelegate;
	FBANoResponseViewController* _noResponseViewController;
	FBANoProjectViewController* _noProjectViewController;
	FBASignedOutViewController* _signedOutViewController;
	FBAResponseDetailViewController* _responseDetailViewController;
	FBAAnnouncementViewController* _announcementViewController;
	FBASurveyDetailViewController* _surveyViewController;
	NSViewController* _currentViewController;

}

@property (nonatomic,retain) id<FBAMailboxContent> representedItem; 
@property (__weak) id<FBAWindowDelegate> windowDelegate;                                                  //@synthesize windowDelegate=_windowDelegate - In the implementation block
@property (nonatomic,retain) FBANoResponseViewController * noResponseViewController;                      //@synthesize noResponseViewController=_noResponseViewController - In the implementation block
@property (nonatomic,retain) FBANoProjectViewController * noProjectViewController;                        //@synthesize noProjectViewController=_noProjectViewController - In the implementation block
@property (nonatomic,retain) FBASignedOutViewController * signedOutViewController;                        //@synthesize signedOutViewController=_signedOutViewController - In the implementation block
@property (nonatomic,retain) FBAResponseDetailViewController * responseDetailViewController;              //@synthesize responseDetailViewController=_responseDetailViewController - In the implementation block
@property (nonatomic,retain) FBAAnnouncementViewController * announcementViewController;                  //@synthesize announcementViewController=_announcementViewController - In the implementation block
@property (nonatomic,retain) FBASurveyDetailViewController * surveyViewController;                        //@synthesize surveyViewController=_surveyViewController - In the implementation block
@property (__weak) NSViewController * currentViewController;                                              //@synthesize currentViewController=_currentViewController - In the implementation block
+(id)keyPathsForValuesAffectingRepresentedItem;
-(char)hasPendingContent;
-(void)updateDetailView;
-(NSViewController *)currentViewController;
-(FBAResponseDetailViewController *)responseDetailViewController;
-(void)promptForPendingContentWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)showSignedOut;
-(void)showNoProjects;
-(void)showResponse:(id)arg1 ;
-(void)showAnnouncement:(id)arg1 ;
-(void)showSurvey:(id)arg1 ;
-(void)showNoResponse;
-(void)swapToViewController:(id)arg1 ;
-(void)ensureCompleteFormResponse:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(FBAAnnouncementViewController *)announcementViewController;
-(FBASurveyDetailViewController *)surveyViewController;
-(FBANoResponseViewController *)noResponseViewController;
-(FBANoProjectViewController *)noProjectViewController;
-(FBASignedOutViewController *)signedOutViewController;
-(void)setCurrentViewController:(NSViewController *)arg1 ;
-(void)setRepresentedItem:(id<FBAMailboxContent>)arg1 ;
-(void)setNoResponseViewController:(FBANoResponseViewController *)arg1 ;
-(void)setNoProjectViewController:(FBANoProjectViewController *)arg1 ;
-(void)setSignedOutViewController:(FBASignedOutViewController *)arg1 ;
-(void)setResponseDetailViewController:(FBAResponseDetailViewController *)arg1 ;
-(void)setAnnouncementViewController:(FBAAnnouncementViewController *)arg1 ;
-(void)setSurveyViewController:(FBASurveyDetailViewController *)arg1 ;
-(void)commonInit;
-(void)setWindowDelegate:(id<FBAWindowDelegate>)arg1 ;
-(id<FBAWindowDelegate>)windowDelegate;
-(id<FBAMailboxContent>)representedItem;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

