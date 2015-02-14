/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:54 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <AppKit/NSTextField.h>
#import <Safari/RolloverTrackingButtonDelegate.h>
#import <Safari/WBSFluidProgressControllerDelegate.h>
#import <Safari/NSAnimationDelegate.h>

@class UnifiedFieldComponent, NSArray, NSTimer, NSString, NSView, NSTextField, NSEvent, WebBookmark, InteriorUnifiedField, TextFieldThatIgnoresClicks, WBSFluidProgressState, CALayer, RolloverImageButton, NSImageView, NSTrackingArea, OneStepBookmarkingBasicButton, NSURL, NSImage, NSColor, CompletionListTableView;

@interface UnifiedField : NSTextField <RolloverTrackingButtonDelegate, WBSFluidProgressControllerDelegate, NSAnimationDelegate> {

	UnifiedFieldComponent* _siteIconComponent;
	UnifiedFieldComponent* _urlComponent;
	UnifiedFieldComponent* _securityPillComponent;
	UnifiedFieldComponent* _stopReloadButtonComponent;
	NSArray* _orderedComponents;
	UnifiedFieldComponent* _firstVisibleComponentAfterURL;
	NSTimer* _truncationUpdateTimer;
	NSString* _reflectedURLString;
	NSString* _reflectedURLStringWhenNotEditing;
	char _overlayStaticTextFieldShowingExpandedURLWithHiddenTextInClearColor;
	double _overlayStaticTextFieldVisibleTextOffsetX;
	double _overlayStaticTextFieldVisibleWidth;
	NSView* _containerForTextFieldForAnimation;
	NSTextField* _textFieldForAnimation;
	NSTextField* _overlayStaticTextFieldCloneForAnimation;
	char _animatingToBecomeFirstResponder;
	char _animatingToResignFirstResponder;
	char _animateToResignFirstResponderSoon;
	char _inSelectTextAsFirstResponder;
	NSTextField* _buttonDescriptionTextField;
	NSTimer* _showButtonDescriptionTimer;
	char _isSettingReflectedURL;
	char _windowDidClose;
	char _appendingSlashAndCollapsingSelection;
	char _inTextDidEndEditing;
	char _becomingFirstResponder;
	char _settingStringValue;
	char _updatingTruncation;
	NSEvent* _currentMouseDownEvent;
	CGSize _leftCapSize;
	CGSize _rightCapSize;
	NSString* _originalString;
	NSString* _detailString;
	NSString* _pageTitle;
	char _updatingDetailString;
	char _toolTipRectanglesUpToDate;
	char _stopReloadButtonIsForReader;
	char _stopReloadButtonShowsStopOnReader;
	char _stopReloadButtonIsForTopSites;
	char _stopReloadButtonShowsStopOnTopSites;
	char _siteIconIsUnderMouse;
	WebBookmark* _bookmarkToDragFromSiteIcon;
	char _securityPillIsUnderMouse;
	NSString* _evCertificateTitle;
	double _minProgressPosition;
	InteriorUnifiedField* _overlayStaticTextField;
	TextFieldThatIgnoresClicks* _hintTextField;
	char _loadInProgress;
	char _fluidAnimationInProgress;
	WBSFluidProgressState* _currentFluidProgressState;
	CALayer* _rootLayer;
	CALayer* _textAndControlsLayer;
	CALayer* _progressFillLayer;
	CALayer* _hintTextBackground;
	NSString* _rawPageStatus;
	NSString* _displayedPageStatus;
	NSString* _displayedPageTitleWithStatus;
	NSView* _mainContentView;
	NSView* _overlayStaticTextFieldClipView;
	CALayer* _overlayStaticTextFieldOverflowFadeOutMaskLayer;
	char _overlayStaticTextFieldNeedsResize;
	char _pageStatusTextFieldNeedUpdate;
	TextFieldThatIgnoresClicks* _pageStatusTextField;
	RolloverImageButton* _stopReloadButton;
	RolloverImageButton* _magnifyingGlassButton;
	RolloverImageButton* _lockButton;
	RolloverImageButton* _readerButton;
	NSImageView* _faviconView;
	NSTrackingArea* _unifiedFieldTrackingArea;
	char _mouseIsInsideUnifiedField;
	OneStepBookmarkingBasicButton* _oneStepBookmarkingButton;
	NSView* _dividerBetweenReaderButtonAndOneStepButton;
	NSTimer* _showOneStepBookmarkingButtonTimer;
	char _shouldLayOutAsFirstResponder;
	char _showingMagnifyingGlass;
	char _showingSecurityUI;
	char _usesPrivateBrowsing;
	char _detailStringIsHighlighted;
	char _reflectingSearchTerms;
	char _showingEditedText;
	NSURL* _reflectedURL;
	NSImage* _icon;
	long long _readerButtonState;

}

@property (assign,getter=isShowingMagnifyingGlass,nonatomic) char showingMagnifyingGlass;              //@synthesize showingMagnifyingGlass=_showingMagnifyingGlass - In the implementation block
@property (assign,getter=isShowingSecurityUI,nonatomic) char showingSecurityUI;                        //@synthesize showingSecurityUI=_showingSecurityUI - In the implementation block
@property (assign,nonatomic) char usesPrivateBrowsing;                                                 //@synthesize usesPrivateBrowsing=_usesPrivateBrowsing - In the implementation block
@property (nonatomic,readonly) char detailStringIsHighlighted;                                         //@synthesize detailStringIsHighlighted=_detailStringIsHighlighted - In the implementation block
@property (nonatomic,retain) NSURL * reflectedURL;                                                     //@synthesize reflectedURL=_reflectedURL - In the implementation block
@property (getter=isReflectingSearchTerms,nonatomic,readonly) char reflectingSearchTerms;              //@synthesize reflectingSearchTerms=_reflectingSearchTerms - In the implementation block
@property (nonatomic,readonly) CGRect urlTextFrame; 
@property (assign,getter=isShowingEditedText,nonatomic) char showingEditedText;                        //@synthesize showingEditedText=_showingEditedText - In the implementation block
@property (nonatomic,retain) NSImage * icon;                                                           //@synthesize icon=_icon - In the implementation block
@property (nonatomic,readonly) NSColor * textSelectionBackgroundColor; 
@property (assign,nonatomic) long long readerButtonState;                                              //@synthesize readerButtonState=_readerButtonState - In the implementation block
@property (nonatomic,readonly) OneStepBookmarkingBasicButton * oneStepBookmarkingButton; 
@property (nonatomic,readonly) NSArray * cellsOfAccessibleControls; 
@property (nonatomic,readonly) CompletionListTableView * autocompleteDropDownTableView; 
@property (__weak) id<UnifiedFieldDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)simplificationsForReflectedURL;
-(char)usesPrivateBrowsing;
-(void)setUsesPrivateBrowsing:(char)arg1 ;
-(BrowserContentViewController*)_currentBrowserContentViewController;
-(void)showProgressFillLayerIfNeeded;
-(void)setPageTitle:(id)arg1 pageStatus:(id)arg2 ;
-(void)setReflectedURL:(NSURL *)arg1 ;
-(char)isShowingMagnifyingGlass;
-(OneStepBookmarkingBasicButton *)oneStepBookmarkingButton;
-(void)windowWillClose;
-(NSURL *)reflectedURL;
-(void)setShowingEditedText:(char)arg1 ;
-(void)setStopReloadButtonIsVisible:(char)arg1 ;
-(void)setStopReloadButtonIsForTopSites:(char)arg1 ;
-(void)setStopReloadButtonShowsStopOnTopSites:(char)arg1 ;
-(void)setStopReloadButtonIsForReader:(char)arg1 ;
-(void)setStopReloadButtonShowsStopOnReader:(char)arg1 ;
-(void)updateStopReloadButton;
-(char)isShowingEditedText;
-(char)isReflectingSearchTerms;
-(void)prepareToNavigateToURL:(id)arg1 ;
-(char)isUpdatingDisplayForDetailString;
-(void)appendSlashAndCollapseSelection;
-(void)setDetailString:(id)arg1 ;
-(void)setExtendedValidationCertificateTitle:(id)arg1 ;
-(void)setShowingSecurityUI:(char)arg1 ;
-(void)setShowingMagnifyingGlass:(char)arg1 ;
-(id)untruncatedStringValue;
-(CGPoint)oneStepBookmarkingHopAnimationStartPointInScreenCoordinates;
-(void)setReaderButtonState:(long long)arg1 ;
-(long long)readerButtonState;
-(void)startDragFromEvent:(id)arg1 withBookmark:(id)arg2 atImageOffset:(CGSize)arg3 ;
-(void)oneStepBookmarkingMenuWasDismissed;
-(id)_animationWithKeyPath:(id)arg1 ;
-(void)rolloverTrackingButton:(id)arg1 mouseDidEnterOrExit:(char)arg2 ;
-(void)_clearReflectedURL;
-(void)_computeReflectedText;
-(void)_updateTextToMatchReflectedURL;
-(void)_updateMagnifyingGlassButtonVisibility;
-(void)_updateFaviconViewVisibility;
-(void)_removeAllTrackingAreas;
-(void)_cancelTruncationUpdateTimer;
-(char)_isAnimatingURL;
-(void)_updateTextAndButtonsVisibility;
-(void)_stopAllAnimations;
-(void)_animateToBecomeFirstResponder;
-(char)_shouldAnimateStateChange;
-(id)_bestReflectedURLForUserTypedString;
-(char)_shouldAnimateResignFirstResponder;
-(void)_animateToResignFirstResponder;
-(void)_notifyDelegateOfResignedFirstResponderSoon;
-(id)_componentForMouseDownEvent:(id)arg1 ;
-(void)_updateTruncationSoon;
-(char)_dragFaviconForMouseDownEvent:(id)arg1 ;
-(char)_dragOverlayStaticTextForMouseDownEvent:(id)arg1 ;
-(void)_selectAllInCurrentEditor;
-(void)_mouseDown:(id)arg1 inComponentWithTag:(int)arg2 ;
-(void)_updateMouseForTrackingArea:(id)arg1 isInside:(char)arg2 ;
-(char)_hitTestComponent:(id)arg1 withEvent:(id)arg2 ;
-(void)_drawBackground;
-(void)_drawTopUnifiedField:(CGRect)arg1 ;
-(char)stopReloadButtonIsVisible;
-(void)_updateToolTipRects;
-(void)_updateComponentLayout;
-(unsigned long long)_dragOperationForUnifiedField:(id)arg1 ;
-(void)_internalSetStringValue:(id)arg1 ;
-(void)_editorSelectionDidChange:(id)arg1 ;
-(id)_componentForTag:(int)arg1 ;
-(char)_extendedValidationCertificateIsAvailable;
-(id)_securityPillTitle;
-(double)_editableTextLeftMargin;
-(double)_editableTextRightMargin;
-(void)_updateLockButtonImageAndToolTip;
-(void)_updateDisplayedEVTitleIfNeeded;
-(void)_updateSecurityUIPlacementAndVisibility;
-(void)_iconDidChange;
-(void)_createStopReloadButtonIfNeeded;
-(void)_updateStopReloadButtonToolTip;
-(CGRect)_textRect;
-(void)_adjustFieldEditorFrameIfNecessaryWithOldTextRect:(CGRect)arg1 ;
-(char)stopReloadButtonShowsStop;
-(char)stopReloadButtonIsForTopSites;
-(void)_updateDetailStringIsHighlighted;
-(void)_updateTruncationNow;
-(char)_showsPageStatus;
-(void)_updateDisplayedPageTitleWithStatus;
-(CGRect)_adjustedProgressBarRectForValue:(double)arg1 ;
-(void)_setProgressFillFrame:(CGRect)arg1 headFillLength:(double)arg2 initialPosition:(double)arg3 ;
-(CGRect)_progressBarRectForValue:(double)arg1 ;
-(void)_drawPrivateBrowsingBackground;
-(void)_updateFaviconViewImage;
-(NSColor *)textSelectionBackgroundColor;
-(id)_hintStringColor;
-(void)_drawComponent:(id)arg1 clipRect:(CGRect)arg2 ;
-(char)_securityPillWillRespondToClick;
-(void)_drawSecurityPillWithText:(id)arg1 textAttributes:(id)arg2 lockImage:(id)arg3 leftCapImage:(id)arg4 fillImage:(id)arg5 rightCapImage:(id)arg6 ;
-(CGImageRef)_siteIconMask;
-(id)_displayedSiteIconImage;
-(id)_hintString;
-(void)_drawHintString:(id)arg1 mainString:(id)arg2 textRect:(CGRect)arg3 isEditing:(char)arg4 ;
-(void)_drawComponentsWithClipRect:(CGRect)arg1 ;
-(void)_shouldShowFullURLPreferenceDidChange:(id)arg1 ;
-(CGSize)_securityPillSize;
-(char)_shouldShowFullURL;
-(void)_clearReflectedText;
-(id)_simplifiedUserVisibleStringForURLWhenNotEditing:(id)arg1 ;
-(id)_attributedStringWithDimmedPathForURL:(id)arg1 includeHiddenHTTPSProtocol:(char)arg2 ;
-(id)_urlStringWithOnlyHostNameVisible:(id)arg1 expandedURLString:(id)arg2 ;
-(void)_updateMinimumProgressPosition;
-(void)_updateLockButtonVisibility;
-(char)_hasHintString;
-(void)_clearOriginalStringIfItMatchesDisplay;
-(void)_updateOneStepBookmarkingButtonVisibility;
-(char)_hintStringIsDetailString;
-(void)_updateStringTruncationAndPlacement;
-(void)_expandTruncatedStringIfNeeded;
-(void)_truncationUpdateTimerFired:(id)arg1 ;
-(double)_startMarginForComponent:(id)arg1 withPreviousComponent:(id)arg2 ;
-(double)_endMarginForComponent:(id)arg1 withNextComponent:(id)arg2 ;
-(void)_componentVisibilityOrFrameHasChanged;
-(void)_drawIcon;
-(id)_stopReloadButtonImage;
-(void)_drawSecurityPill;
-(void)_setComponent:(id)arg1 isHighlighted:(char)arg2 ;
-(id)_proxyIconDraggingImageWithTitle:(id)arg1 ;
-(void)_hideFaviconViewAnimated:(char)arg1 ;
-(void)_layOutFaviconAndMainContentView;
-(void)_layOutOneStepBookmarkingButtonAndDividerIfNeeded;
-(char)_shouldReserveSpaceForOneStepBookmarkingButton;
-(id)_pageStatusString;
-(id)_pageStatusStringColor;
-(char)_shouldLeftAlignContent;
-(void)_installOverlayStaticTextFieldFadeOutMaskLayerIfNecessary;
-(void)_setBasicUnifiedFieldButtonProperties:(id)arg1 ;
-(void)_stopReloadButtonClicked:(id)arg1 ;
-(id)_createBasicUnifiedFieldButton;
-(void)_magnifyingGlassButtonClicked:(id)arg1 ;
-(char)_magnifyingGlassButtonIsVisible;
-(void)_createMagnifyingGlassButtonIfNeeded;
-(void)_lockButtonClicked:(id)arg1 ;
-(void)_createLockButtonIfNeeded;
-(char)_lockButtonIsVisible;
-(char)_readerButtonIsVisible;
-(void)_updateDividerBetweenReaderButtonAndOneStepButtonVisibility;
-(void)_updateButtonDescriptionTextFieldVisibility;
-(void)_createReaderButtonIfNeeded;
-(void)_updateReaderButtonVisibility;
-(void)_updateButtonDescriptionTextFieldStringValue;
-(char)_oneStepBookmarkingButtonShouldBeVisible;
-(char)_dividerBetweenReaderButtonAndOneStepButtonIsVisible;
-(void)_createDividerBetweenReaderButtonAndOneStepButtonIfNeeded;
-(void)_createOneStepBookmarkingButtonIfNeeded;
-(char)_canShowFaviconView;
-(void)_showOneStepBookmarkingButtonSoon;
-(void)_cancelShowButtonDescriptionTimer;
-(void)_hideOneStepBookmarkingButtonWithAnimation;
-(void)_showOneStepBookmarkingButtonNow:(id)arg1 ;
-(void)_cancelShowOneStepBookmarkingButtonTimer;
-(void)_showOneStepBookmarkingButtonWithAnimation;
-(void)_createFaviconViewIfNeeded;
-(void)_showFaviconViewAnimated:(char)arg1 ;
-(id)_createTextField;
-(void)_createButtonDescriptionTextFieldIfNeeded;
-(void)_showButtonDescriptionNow:(id)arg1 ;
-(char)_buttonDescriptionTextFieldShouldBeVisible;
-(void)_setUpButtonDescriptionTextField;
-(void)_showButtonDescriptionSoon;
-(id)_urlParagraphStyle;
-(id)_springAnimationWithKeyPath:(id)arg1 ;
-(void)_setUpOverlayStaticTextFieldCloneForAnimation;
-(CGRect)urlTextFrame;
-(id)_animationWithFromValuesByKeyPathDictionary:(id)arg1 ;
-(void)_setUpTextFieldForAnimationWithTextSelected:(char)arg1 ;
-(void)_animatePlaceholderTextOrSearchTermsToResignFirstResponder;
-(void)_updateMouseForTrackingArea:(id)arg1 ;
-(void)fluidProgressController:(id)arg1 updateFluidProgressBar:(id)arg2 ;
-(void)fluidProgressController:(id)arg1 startFluidProgressBar:(id)arg2 animateFillFade:(char)arg3 ;
-(void)fluidProgressControllerFinishProgressBar:(id)arg1 animateFillFade:(char)arg2 ;
-(void)fluidProgressController:(id)arg1 setProgressToCurrentPosition:(id)arg2 ;
-(id)fluidProgressController:(id)arg1 windowImageForRect:(CGRect)arg2 ;
-(void)fieldEditorDidBecomeFirstResponder;
-(void)fieldEditorIsResigningFirstResponder;
-(void)willInsertText;
-(void)willDoCommandBySelector:(SEL)arg1 ;
-(void)willPaste;
-(void)markedTextDidChange;
-(char)isShowingComponent:(int)arg1 ;
-(void)performActionForComponent:(int)arg1 ;
-(CGRect)_siteIconFrame;
-(id)detailString;
-(id)_unifiedFieldTrackingArea;
-(char)_canDragFromSiteIcon;
-(char)_mouseInsideRect:(CGRect)arg1 ;
-(void)_notifyDelegateOfBecameFirstResponderSoon;
-(id)_colorLocationsForProgressFillMaskLayer:(double)arg1 blurryHeadLength:(double)arg2 widthOfProgressFill:(double)arg3 ;
-(void)_setComponent:(id)arg1 isShown:(char)arg2 ;
-(NSArray *)cellsOfAccessibleControls;
-(CompletionListTableView *)autocompleteDropDownTableView;
-(char)isShowingSecurityUI;
-(char)detailStringIsHighlighted;
-(void)setDelegate:(id<UnifiedFieldDelegate>)arg1 ;
-(void)dealloc;
-(void)drawLayer:(id)arg1 inContext:(CGContextRef)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setStringValue:(id)arg1 ;
-(void)layout;
-(void)setFrameOrigin:(CGPoint)arg1 ;
-(void)setNeedsDisplay:(char)arg1 ;
-(id<UnifiedFieldDelegate>)delegate;
-(void)setIcon:(NSImage *)arg1 ;
-(NSImage *)icon;
-(char)performKeyEquivalent:(id)arg1 ;
-(char)isAccessibilitySelectorAllowed:(SEL)arg1 ;
-(char)isFlipped;
-(void)setNeedsDisplayInRect:(CGRect)arg1 ;
-(void)setFrameSize:(CGSize)arg1 ;
-(void)setEditable:(char)arg1 ;
-(char)isOpaque;
-(void)setKeyboardFocusRingNeedsDisplayInRect:(CGRect)arg1 ;
-(void)_windowChangedKeyState;
-(char)acceptsFirstResponder;
-(char)acceptsFirstMouse:(id)arg1 ;
-(char)becomeFirstResponder;
-(void)draggedImage:(id)arg1 endedAt:(CGPoint)arg2 operation:(unsigned long long)arg3 ;
-(unsigned long long)draggingEntered:(id)arg1 ;
-(unsigned long long)draggingUpdated:(id)arg1 ;
-(char)performDragOperation:(id)arg1 ;
-(id)namesOfPromisedFilesDroppedAtDestination:(id)arg1 ;
-(void)resetCursorRects;
-(void)mouseDown:(id)arg1 ;
-(void)setAttributedStringValue:(id)arg1 ;
-(void)mouseEntered:(id)arg1 ;
-(void)mouseExited:(id)arg1 ;
-(void)textDidChange:(id)arg1 ;
-(void)textDidEndEditing:(id)arg1 ;
-(void)textDidBeginEditing:(id)arg1 ;
-(void)selectText:(id)arg1 ;
-(void)setPlaceholderString:(id)arg1 ;
-(void)viewWillMoveToWindow:(id)arg1 ;
-(char)shouldDelayWindowOrderingForEvent:(id)arg1 ;
-(void)updateTrackingAreas;
-(char)prepareForDragOperation:(id)arg1 ;
-(void)concludeDragOperation:(id)arg1 ;
-(void)removeAllToolTips;
-(id)view:(id)arg1 stringForToolTip:(long long)arg2 point:(CGPoint)arg3 userData:(void*)arg4 ;
-(char)_isEditing;
-(char)layer:(id)arg1 shouldInheritContentsScale:(double)arg2 fromWindow:(id)arg3 ;
-(void)_finishInitialization;
-(void)animationDidStop:(id)arg1 finished:(char)arg2 ;
@end

