/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:51 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarUI.framework/Versions/A/CalendarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSViewController.h>
#import <CalendarUI/EKCommitDelegate.h>
#import <CalendarUI/EKEditingContextObserver.h>

@protocol EKEventViewWindowController, EKEventViewApplicationDelegate;
@class EKEvent, EKEventViewControllerSettings, EKEventView, EKUIGadgetContainer, EKUITitleCalendarCompositeGadget, EKUIGadget, EKEditingContext, NSResponder, EKEventViewScrollView, NSLayoutConstraint, NSDictionary, NSFont, NSArray, NSString;

@interface EKEventViewController : NSViewController <EKCommitDelegate, EKEditingContextObserver> {

	char _isReadOnly;
	char _isClosing;
	char _isAwaitingSaveResponseFromEditingContext;
	char _canResizeWindow;
	char _footerVisible;
	EKEvent* _event;
	EKEventViewControllerSettings* _settings;
	EKEventView* _viewContainer;
	EKUIGadgetContainer* _headerContainer;
	EKUIGadgetContainer* _topLevelContainer;
	EKUIGadgetContainer* _footerContainer;
	EKUITitleCalendarCompositeGadget* _titleGadget;
	EKUIGadget* _attachmentGadget;
	EKUIGadget* _urlGadget;
	EKUIGadget* _attendeesGadget;
	EKUIGadget* _notesGadget;
	EKEditingContext* _editingContext;
	NSResponder* _lastResponder;
	EKEvent* _lastSnapshottedEvent;
	EKEventViewScrollView* _scrollView;
	NSLayoutConstraint* _bottomConstraint;
	id<EKEventViewWindowController> _windowController;
	id<EKEventViewApplicationDelegate> _applicationDelegate;
	long long _numOccurrencesSelected;
	NSDictionary* _gadgetContentTextAttributes;
	NSDictionary* _gadgetContentParagraphAttributes;
	NSDictionary* _gadgetPlaceholderTextAttributes;
	NSFont* _gadgetFont;
	NSFont* _titleFont;
	NSFont* _labelFont;
	NSArray* _registeredDragTypes;

}

@property (nonatomic,retain) EKEvent * event;                                           //@synthesize event=_event - In the implementation block
@property (assign) char isReadOnly;                                                     //@synthesize isReadOnly=_isReadOnly - In the implementation block
@property (retain) EKEventViewControllerSettings * settings;                            //@synthesize settings=_settings - In the implementation block
@property (retain) EKEventView * viewContainer;                                         //@synthesize viewContainer=_viewContainer - In the implementation block
@property (retain) EKUIGadgetContainer * headerContainer;                               //@synthesize headerContainer=_headerContainer - In the implementation block
@property (retain) EKUIGadgetContainer * topLevelContainer;                             //@synthesize topLevelContainer=_topLevelContainer - In the implementation block
@property (retain) EKUIGadgetContainer * footerContainer;                               //@synthesize footerContainer=_footerContainer - In the implementation block
@property (retain) EKUITitleCalendarCompositeGadget * titleGadget;                      //@synthesize titleGadget=_titleGadget - In the implementation block
@property (retain) EKUIGadget * attachmentGadget;                                       //@synthesize attachmentGadget=_attachmentGadget - In the implementation block
@property (retain) EKUIGadget * urlGadget;                                              //@synthesize urlGadget=_urlGadget - In the implementation block
@property (retain) EKUIGadget * attendeesGadget;                                        //@synthesize attendeesGadget=_attendeesGadget - In the implementation block
@property (retain) EKUIGadget * notesGadget;                                            //@synthesize notesGadget=_notesGadget - In the implementation block
@property (retain) EKEditingContext * editingContext;                                   //@synthesize editingContext=_editingContext - In the implementation block
@property (retain) NSResponder * lastResponder;                                         //@synthesize lastResponder=_lastResponder - In the implementation block
@property (assign) char isClosing;                                                      //@synthesize isClosing=_isClosing - In the implementation block
@property (assign) char isAwaitingSaveResponseFromEditingContext;                       //@synthesize isAwaitingSaveResponseFromEditingContext=_isAwaitingSaveResponseFromEditingContext - In the implementation block
@property (retain) EKEvent * lastSnapshottedEvent;                                      //@synthesize lastSnapshottedEvent=_lastSnapshottedEvent - In the implementation block
@property (assign) char canResizeWindow;                                                //@synthesize canResizeWindow=_canResizeWindow - In the implementation block
@property (retain) EKEventViewScrollView * scrollView;                                  //@synthesize scrollView=_scrollView - In the implementation block
@property (retain) NSLayoutConstraint * bottomConstraint;                               //@synthesize bottomConstraint=_bottomConstraint - In the implementation block
@property (__weak) id<EKEventViewWindowController> windowController;                    //@synthesize windowController=_windowController - In the implementation block
@property (__weak) id<EKEventViewApplicationDelegate> applicationDelegate;              //@synthesize applicationDelegate=_applicationDelegate - In the implementation block
@property (assign) long long numOccurrencesSelected;                                    //@synthesize numOccurrencesSelected=_numOccurrencesSelected - In the implementation block
@property (retain) NSDictionary * gadgetContentTextAttributes;                          //@synthesize gadgetContentTextAttributes=_gadgetContentTextAttributes - In the implementation block
@property (retain) NSDictionary * gadgetContentParagraphAttributes;                     //@synthesize gadgetContentParagraphAttributes=_gadgetContentParagraphAttributes - In the implementation block
@property (retain) NSDictionary * gadgetPlaceholderTextAttributes;                      //@synthesize gadgetPlaceholderTextAttributes=_gadgetPlaceholderTextAttributes - In the implementation block
@property (retain) NSFont * gadgetFont;                                                 //@synthesize gadgetFont=_gadgetFont - In the implementation block
@property (retain) NSFont * titleFont;                                                  //@synthesize titleFont=_titleFont - In the implementation block
@property (retain) NSFont * labelFont;                                                  //@synthesize labelFont=_labelFont - In the implementation block
@property (retain) NSArray * registeredDragTypes;                                       //@synthesize registeredDragTypes=_registeredDragTypes - In the implementation block
@property (assign) char footerVisible;                                                  //@synthesize footerVisible=_footerVisible - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)contentTextColor;
+(id)hyperlinkBlue;
+(id)defaultNewEventString;
+(void)initialize;
+(id)placeholderTextColor;
+(id)strokeColor;
-(void)setSettings:(EKEventViewControllerSettings *)arg1 ;
-(EKEventViewControllerSettings *)settings;
-(id<EKEventViewApplicationDelegate>)applicationDelegate;
-(void)applicationWillTerminate:(id)arg1 ;
-(double)leftDividerMargin;
-(double)rightDividerMargin;
-(NSFont *)labelFont;
-(char)isSaving;
-(char)isReadOnly;
-(id)contentParagraphAttributes;
-(id)placeholderTextAttributes;
-(char)saveCompleteChange;
-(NSFont *)gadgetFont;
-(void)deleteEvent;
-(void)revert;
-(char)commitButtonPressed;
-(char)canResizeWindow;
-(id)contentTextAttributes;
-(NSArray *)registeredDragTypes;
-(void)setCanResizeWindow:(char)arg1 ;
-(char)useWideSpacing;
-(void)updateBottomConstraint;
-(id)initCanResizeWindow:(char)arg1 withMarginsTop:(double)arg2 bottom:(double)arg3 left:(double)arg4 right:(double)arg5 ;
-(id)initWithSettings:(id)arg1 ;
-(void)configureFonts;
-(void)setAttendeesGadget:(EKUIGadget *)arg1 ;
-(void)setNotesGadget:(EKUIGadget *)arg1 ;
-(void)setUrlGadget:(EKUIGadget *)arg1 ;
-(void)setAttachmentGadget:(EKUIGadget *)arg1 ;
-(void)updateFooter;
-(void)updateTopLevelContainer;
-(void)setGadgetFont:(NSFont *)arg1 ;
-(void)setLabelFont:(NSFont *)arg1 ;
-(void)setGadgetContentTextAttributes:(NSDictionary *)arg1 ;
-(void)setGadgetContentParagraphAttributes:(NSDictionary *)arg1 ;
-(void)setGadgetPlaceholderTextAttributes:(NSDictionary *)arg1 ;
-(EKEventView *)viewContainer;
-(NSLayoutConstraint *)bottomConstraint;
-(EKUIGadgetContainer *)footerContainer;
-(void)setBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(EKUIGadgetContainer *)topLevelContainer;
-(EKUIGadgetContainer *)headerContainer;
-(void)calculateKeyViewLoop;
-(void)updateButtons;
-(void)setRegisteredDragTypes:(NSArray *)arg1 ;
-(EKUIGadget *)attendeesGadget;
-(EKUIGadget *)attachmentGadget;
-(EKUIGadget *)urlGadget;
-(EKUIGadget *)notesGadget;
-(EKUITitleCalendarCompositeGadget *)titleGadget;
-(NSResponder *)lastResponder;
-(void)setLastResponder:(NSResponder *)arg1 ;
-(char)closeAndCommit;
-(id)editingContextForEvent:(id)arg1 ;
-(void)setEditingContext:(EKEditingContext *)arg1 ;
-(EKEditingContext *)editingContext;
-(void)setLastSnapshottedEvent:(EKEvent *)arg1 ;
-(void)updateSuddenTerminationWithNewEvent:(id)arg1 ;
-(void)updateContainersWithChanges:(id)arg1 ;
-(char)footerVisible;
-(void)setFooterVisible:(char)arg1 ;
-(char)isClosing;
-(id)lastVisibleGadget;
-(NSDictionary *)gadgetPlaceholderTextAttributes;
-(NSDictionary *)gadgetContentTextAttributes;
-(NSDictionary *)gadgetContentParagraphAttributes;
-(char)hasUnsentChanges;
-(char)saveCompleteChangeWithImpliedCommitDecision:(char)arg1 ;
-(void)setIsAwaitingSaveResponseFromEditingContext:(char)arg1 ;
-(char)commitFromCommitButton:(char)arg1 ;
-(void)setIsClosing:(char)arg1 ;
-(char)isAwaitingSaveResponseFromEditingContext;
-(EKEvent *)lastSnapshottedEvent;
-(void)commitDeferredForObjects:(id)arg1 ;
-(char)contextShouldStayOpenWhenCommitIsDeferred;
-(char)contextShouldStayOpenWhenCommitIsCanceled;
-(char)contextShouldStayOpenWhenCommitIsReverted;
-(void)oldEvent:(id)arg1 didUpdateTo:(id)arg2 inEditingContext:(id)arg3 ;
-(void)updateDragTypes;
-(void)makeFirstResponder;
-(void)selectTitleText;
-(char)topLevelIsScrollEnabled;
-(double)transparentBorderSize;
-(void)gadgetContainer:(id)arg1 didMouseUpWithEvent:(id)arg2 ;
-(void)setRangeOfInterest:(id)arg1 ;
-(void)animator:(id)arg1 calculatedHeightChange:(double)arg2 ;
-(void)setEventStartDate:(id)arg1 endDate:(id)arg2 ;
-(void)updateWithChangesFromEvent:(id)arg1 ;
-(char)savePartialChange;
-(char)saveCompleteChangeWithoutPromptingUserAboutDecline;
-(void)setViewContainer:(EKEventView *)arg1 ;
-(void)setHeaderContainer:(EKUIGadgetContainer *)arg1 ;
-(void)setTopLevelContainer:(EKUIGadgetContainer *)arg1 ;
-(void)setFooterContainer:(EKUIGadgetContainer *)arg1 ;
-(void)setTitleGadget:(EKUITitleCalendarCompositeGadget *)arg1 ;
-(void)setApplicationDelegate:(id<EKEventViewApplicationDelegate>)arg1 ;
-(long long)numOccurrencesSelected;
-(void)setNumOccurrencesSelected:(long long)arg1 ;
-(void)setIsReadOnly:(char)arg1 ;
-(id)init;
-(void)dealloc;
-(char)isActive;
-(char)isVisible;
-(id<EKEventViewWindowController>)windowController;
-(void)setWindowController:(id<EKEventViewWindowController>)arg1 ;
-(NSFont *)titleFont;
-(void)setTitleFont:(NSFont *)arg1 ;
-(char)performDragOperation:(id)arg1 ;
-(void)loadView;
-(id)animator;
-(EKEventViewScrollView *)scrollView;
-(void)windowDidUpdate:(id)arg1 ;
-(double)leftMargin;
-(double)rightMargin;
-(void)setScrollView:(EKEventViewScrollView *)arg1 ;
-(EKEvent *)event;
-(void)setEvent:(EKEvent *)arg1 ;
@end

