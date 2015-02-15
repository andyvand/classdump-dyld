/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:44 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/CoreServices/Applications/Feedback Assistant.app/Contents/MacOS/Feedback Assistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSViewController.h>
#import <Feedback Assistant/FBAFollowupDelegate.h>

@class FBAJSONEncoding, FBARestInterface, NSScrollView, NSView, FBAStackView, FBAFollowupListView, NSProgressIndicator, FBATextViewWithPlaceHolder, NSButton, NSArray, FBAFeedbackSummaryViewController, FBACorrespondenceViewController, NSSet, FBAFileCollectionView, FBAFormResponse, NSString;

@interface FBAResponseDetailViewController : NSViewController <FBAFollowupDelegate> {

	char _loaded;
	char _chronological;
	FBAJSONEncoding* _JSONContext;
	FBARestInterface* _restInterface;
	NSScrollView* _scrollView;
	NSView* _documentView;
	FBAStackView* _stackView;
	NSView* _tileBackground;
	NSView* _formResponseView;
	NSView* _draftEditControls;
	FBAFollowupListView* _followupListView;
	NSView* _unsolicitedFollowupView;
	NSProgressIndicator* _unsolicitedSpinner;
	FBATextViewWithPlaceHolder* _additionalFeedbackTextView;
	NSButton* _additionalFeedbackSubmitButton;
	NSView* _addFilesArea;
	NSButton* _addFilesButton;
	NSView* _addFilesView;
	NSArray* _viewConfigurationConstraints;
	FBAFeedbackSummaryViewController* _feedbackSummaryViewController;
	FBACorrespondenceViewController* _feedbackSummaryCorrespondence;
	NSView* _feedbackSummaryContentView;
	NSSet* _stagedURLs;
	FBAFileCollectionView* _fileCollectionView;
	/*^block*/id _promptForPendingContentCompletionHandler;

}

@property (retain) FBAFormResponse * formResponse; 
@property (retain) FBAJSONEncoding * JSONContext;                                                 //@synthesize JSONContext=_JSONContext - In the implementation block
@property (getter=isChronological) char chronological;                                            //@synthesize chronological=_chronological - In the implementation block
@property (retain) FBARestInterface * restInterface;                                              //@synthesize restInterface=_restInterface - In the implementation block
@property (__weak) NSScrollView * scrollView;                                                     //@synthesize scrollView=_scrollView - In the implementation block
@property (__weak) NSView * documentView;                                                         //@synthesize documentView=_documentView - In the implementation block
@property (__weak) FBAStackView * stackView;                                                      //@synthesize stackView=_stackView - In the implementation block
@property (retain) NSView * tileBackground;                                                       //@synthesize tileBackground=_tileBackground - In the implementation block
@property (__weak) NSView * formResponseView;                                                     //@synthesize formResponseView=_formResponseView - In the implementation block
@property (__weak) NSView * draftEditControls;                                                    //@synthesize draftEditControls=_draftEditControls - In the implementation block
@property (retain) FBAFollowupListView * followupListView;                                        //@synthesize followupListView=_followupListView - In the implementation block
@property (retain) NSView * unsolicitedFollowupView;                                              //@synthesize unsolicitedFollowupView=_unsolicitedFollowupView - In the implementation block
@property (__weak) NSProgressIndicator * unsolicitedSpinner;                                      //@synthesize unsolicitedSpinner=_unsolicitedSpinner - In the implementation block
@property (assign) FBATextViewWithPlaceHolder * additionalFeedbackTextView;                       //@synthesize additionalFeedbackTextView=_additionalFeedbackTextView - In the implementation block
@property (__weak) NSButton * additionalFeedbackSubmitButton;                                     //@synthesize additionalFeedbackSubmitButton=_additionalFeedbackSubmitButton - In the implementation block
@property (__weak) NSView * addFilesArea;                                                         //@synthesize addFilesArea=_addFilesArea - In the implementation block
@property (__weak) NSButton * addFilesButton;                                                     //@synthesize addFilesButton=_addFilesButton - In the implementation block
@property (retain) NSView * addFilesView;                                                         //@synthesize addFilesView=_addFilesView - In the implementation block
@property (retain) NSArray * viewConfigurationConstraints;                                        //@synthesize viewConfigurationConstraints=_viewConfigurationConstraints - In the implementation block
@property (retain) FBAFeedbackSummaryViewController * feedbackSummaryViewController;              //@synthesize feedbackSummaryViewController=_feedbackSummaryViewController - In the implementation block
@property (retain) FBACorrespondenceViewController * feedbackSummaryCorrespondence;               //@synthesize feedbackSummaryCorrespondence=_feedbackSummaryCorrespondence - In the implementation block
@property (retain) NSView * feedbackSummaryContentView;                                           //@synthesize feedbackSummaryContentView=_feedbackSummaryContentView - In the implementation block
@property (retain) NSSet * stagedURLs;                                                            //@synthesize stagedURLs=_stagedURLs - In the implementation block
@property (retain) FBAFileCollectionView * fileCollectionView;                                    //@synthesize fileCollectionView=_fileCollectionView - In the implementation block
@property (copy) id promptForPendingContentCompletionHandler;                                     //@synthesize promptForPendingContentCompletionHandler=_promptForPendingContentCompletionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)keyPathsForValuesAffectingFormResponse;
+(char)automaticallyNotifiesObserversOfCornerView;
+(void)initialize;
-(FBAFormResponse *)formResponse;
-(void)clearPendingContent;
-(char)hasPendingContent;
-(void)promptForPendingContentWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setFormResponse:(FBAFormResponse *)arg1 ;
-(FBAJSONEncoding *)JSONContext;
-(void)setJSONContext:(FBAJSONEncoding *)arg1 ;
-(FBAFileCollectionView *)fileCollectionView;
-(NSSet *)stagedURLs;
-(void)setStagedURLs:(NSSet *)arg1 ;
-(void)setFileCollectionView:(FBAFileCollectionView *)arg1 ;
-(FBARestInterface *)restInterface;
-(void)setRestInterface:(FBARestInterface *)arg1 ;
-(FBAFeedbackSummaryViewController *)feedbackSummaryViewController;
-(void)setChronological:(char)arg1 ;
-(void)updateViewConfiguration;
-(char)isChronological;
-(void)submitFollowupResponse:(id)arg1 attachments:(id)arg2 optedOut:(char)arg3 followup:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(NSView *)formResponseView;
-(FBATextViewWithPlaceHolder *)additionalFeedbackTextView;
-(void)setFollowupListView:(FBAFollowupListView *)arg1 ;
-(FBAFollowupListView *)followupListView;
-(void)updateForFormResponseChange;
-(void)configureEditControls;
-(void)updateAdditionalInfoSubmitButton;
-(void)showFilesArea;
-(NSButton *)addFilesButton;
-(NSView *)addFilesArea;
-(NSView *)addFilesView;
-(void)configureUnsolicitedForSubmission;
-(void)configureUnsolicitedForUse;
-(char)hasPendingUnsolicitedFollowup;
-(char)hasPendingFollowup;
-(void)setPromptForPendingContentCompletionHandler:(id)arg1 ;
-(void)closeWithPendingFollowupAlertDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void*)arg3 ;
-(id)promptForPendingContentCompletionHandler;
-(NSButton *)additionalFeedbackSubmitButton;
-(void)updateScrollBackground;
-(void)replaceFormResponseViewFor:(id)arg1 ;
-(void)replaceFollowupListViewFor:(id)arg1 ;
-(void)hideFilesArea;
-(char)shouldShowCards;
-(NSView *)unsolicitedFollowupView;
-(NSView *)tileBackground;
-(id)createTileBackground;
-(void)setTileBackground:(NSView *)arg1 ;
-(void)setFeedbackSummaryViewController:(FBAFeedbackSummaryViewController *)arg1 ;
-(void)setFeedbackSummaryCorrespondence:(FBACorrespondenceViewController *)arg1 ;
-(FBACorrespondenceViewController *)feedbackSummaryCorrespondence;
-(void)setFormResponseView:(NSView *)arg1 ;
-(NSView *)draftEditControls;
-(NSProgressIndicator *)unsolicitedSpinner;
-(void)didClickEditDraft:(id)arg1 ;
-(void)didClickDeleteDraft:(id)arg1 ;
-(void)addFilesClicked:(id)arg1 ;
-(void)submitUnsolicitedFeedback:(id)arg1 ;
-(char)isSubmitting;
-(void)notifyOfSubmitting;
-(void)setDraftEditControls:(NSView *)arg1 ;
-(void)setUnsolicitedFollowupView:(NSView *)arg1 ;
-(void)setUnsolicitedSpinner:(NSProgressIndicator *)arg1 ;
-(void)setAdditionalFeedbackTextView:(FBATextViewWithPlaceHolder *)arg1 ;
-(void)setAdditionalFeedbackSubmitButton:(NSButton *)arg1 ;
-(void)setAddFilesArea:(NSView *)arg1 ;
-(void)setAddFilesButton:(NSButton *)arg1 ;
-(void)setAddFilesView:(NSView *)arg1 ;
-(NSArray *)viewConfigurationConstraints;
-(void)setViewConfigurationConstraints:(NSArray *)arg1 ;
-(NSView *)feedbackSummaryContentView;
-(void)setFeedbackSummaryContentView:(NSView *)arg1 ;
-(id)init;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2 delegate:(id)arg3 didRecoverSelector:(SEL)arg4 contextInfo:(void*)arg5 ;
-(NSView *)documentView;
-(void)setDocumentView:(NSView *)arg1 ;
-(void)loadView;
-(void)textDidChange:(id)arg1 ;
-(void)didPresentErrorWithRecovery:(char)arg1 contextInfo:(void*)arg2 ;
-(NSScrollView *)scrollView;
-(void)setScrollView:(NSScrollView *)arg1 ;
-(FBAStackView *)stackView;
-(void)setStackView:(FBAStackView *)arg1 ;
@end

