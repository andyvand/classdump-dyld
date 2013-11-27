/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:30:13 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <CommunicationsSetupUI/CNFRegListController.h>
#import <CommunicationsSetupUI/CNFRegFirstRunExperience.h>

@protocol CNFRegFirstRunDelegate;
@class UIBarButtonItem, , NSTimer, IMAccount;

@interface CNFRegFirstRunController : CNFRegListController <CNFRegFirstRunExperience> {

	Class _completionControllerClass;
	BOOL _showingActivityIndicator;
	BOOL _previousHidesBackButton;
	UIBarButtonItem* _previousLeftButton;
	UIBarButtonItem* _previousRightButton;
	<CNFRegFirstRunDelegate>* _delegate;
	UIBarButtonItem* _customRightButton;
	UIBarButtonItem* _customLeftButton;
	NSTimer* _timeoutTimer;
	BOOL _timedOut;
	BOOL _cancelled;
	IMAccount* _account;

}

@property (assign,nonatomic) Class completionControllerClass;                    //@synthesize completionControllerClass=_completionControllerClass - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * customLeftButton;                 //@synthesize customLeftButton=_customLeftButton - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * customRightButton;                //@synthesize customRightButton=_customRightButton - In the implementation block
@property (nonatomic,retain) IMAccount * account;                                //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * previousLeftButton;               //@synthesize previousLeftButton=_previousLeftButton - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * previousRightButton;              //@synthesize previousRightButton=_previousRightButton - In the implementation block
@property (assign,nonatomic) BOOL previousHidesBackButton;                       //@synthesize previousHidesBackButton=_previousHidesBackButton - In the implementation block
@property (assign,nonatomic) BOOL timedOut;                                      //@synthesize timedOut=_timedOut - In the implementation block
@property (assign,nonatomic) <CNFRegFirstRunDelegate> * delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) int currentAppearanceStyle; 
-(void)setSpecifier:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)initWithRegController:(id)arg1 ;
-(int)currentAppearanceStyle;
-(void)_setupEventHandlers;
-(void)_stopValidationModeAnimated:(BOOL)arg1 ;
-(id)initWithRegController:(id)arg1 account:(id)arg2 ;
-(void)setCompletionControllerClass:(Class)arg1 ;
-(void)setCustomLeftButton:(id)arg1 ;
-(void)setCustomRightButton:(id)arg1 ;
-(void)_stopTimeout;
-(void)_handleTimeout;
-(void)_timeoutFired:(id)arg1 ;
-(void)_startTimeoutWithDuration:(double)arg1 ;
-(BOOL)dismissWithState:(unsigned)arg1 ;
-(void)_refreshNavBarAnimated:(BOOL)arg1 ;
-(Class)completionControllerClass;
-(void)_handleReturnKeyTapped:(id)arg1 ;
-(void)_returnKeyPressed;
-(void)_refreshCurrentState;
-(void)_startListeningForReturnKey;
-(void)_stopListeningForReturnKey;
-(id)titleString;
-(id)_leftButtonItem;
-(id)_rightButtonItem;
-(BOOL)_hidesBackButton;
-(void)_rightButtonTapped;
-(void)_handleValidationModeCancelled;
-(void)_leftButtonTapped;
-(void)setTimedOut:(BOOL)arg1 ;
-(void)_cancelValidationMode;
-(void)setPreviousLeftButton:(id)arg1 ;
-(void)setPreviousRightButton:(id)arg1 ;
-(void)setPreviousHidesBackButton:(BOOL)arg1 ;
-(id)_validationModeCancelButton;
-(void)_startActivityIndicatorWithTitle:(id)arg1 animated:(BOOL)arg2 allowCancel:(BOOL)arg3 ;
-(id)previousLeftButton;
-(id)previousRightButton;
-(BOOL)previousHidesBackButton;
-(void)_stopActivityIndicatorWithTitle:(id)arg1 animated:(BOOL)arg2 ;
-(id)validationString;
-(void)_startValidationModeAnimated:(BOOL)arg1 allowCancel:(BOOL)arg2 ;
-(void)_stopActivityIndicatorAnimated:(BOOL)arg1 ;
-(BOOL)pushCompletionControllerIfPossible;
-(void)_updateControllerState;
-(id)customLeftButton;
-(id)customRightButton;
-(id)initWithParentController:(id)arg1 account:(id)arg2 ;
-(void)_startActivityIndicatorWithTitle:(id)arg1 animated:(BOOL)arg2 ;
-(void)_startValidationModeAnimated:(BOOL)arg1 ;
-(void)setCellsChecked:(BOOL)arg1 ;
-(void)_executeDismissBlock:(/*^block*/ id)arg1 ;
-(void)systemApplicationDidEnterBackground;
-(void)systemApplicationWillEnterForeground;
-(BOOL)timedOut;
-(id)account;
-(void)setAccount:(id)arg1 ;
-(id)customTitle;
-(void)_updateUI;
@end
