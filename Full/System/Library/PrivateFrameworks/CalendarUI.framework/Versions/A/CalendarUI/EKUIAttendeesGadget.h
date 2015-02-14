/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:21 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarUI.framework/Versions/A/CalendarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarUI/EKUISingleViewGadget.h>
#import <CalendarUI/EKUIAttendeesViewController.h>
#import <CalendarUI/CalAutoCompleteDelegate.h>

@class EKUIAttendeeFieldDelegate, EKUIAttendeesControlContainer, EKUIAttendeesTokenField, EKUIAttendeesEditingField, NSProgressIndicator, EKUIPlusButton, EKUITextButton, NSView, NSDictionary, CalAutoCompleteOperation, NSString, NSArray;

@interface EKUIAttendeesGadget : EKUISingleViewGadget <EKUIAttendeesViewController, CalAutoCompleteDelegate> {

	char _sortAttendeeTokensOnNextUpdate;
	char _canShowAvailabilityButton;
	EKUIAttendeeFieldDelegate* _attendeeFieldDelegate;
	EKUIAttendeesControlContainer* _controlContainer;
	EKUIAttendeesTokenField* _attendeesField;
	EKUIAttendeesEditingField* _editingField;
	NSProgressIndicator* _progressIndicator;
	EKUIPlusButton* _plusButton;
	EKUITextButton* _linkButton;
	NSView* _separator;
	NSDictionary* _viewMetrics;
	CalAutoCompleteOperation* _acOperation;
	NSString* _lastEventID;
	NSArray* _attendeeConstraints;

}

@property (retain) EKUIAttendeeFieldDelegate * attendeeFieldDelegate;              //@synthesize attendeeFieldDelegate=_attendeeFieldDelegate - In the implementation block
@property (retain) EKUIAttendeesControlContainer * controlContainer;               //@synthesize controlContainer=_controlContainer - In the implementation block
@property (retain) EKUIAttendeesTokenField * attendeesField;                       //@synthesize attendeesField=_attendeesField - In the implementation block
@property (retain) EKUIAttendeesEditingField * editingField;                       //@synthesize editingField=_editingField - In the implementation block
@property (retain) NSProgressIndicator * progressIndicator;                        //@synthesize progressIndicator=_progressIndicator - In the implementation block
@property (retain) EKUIPlusButton * plusButton;                                    //@synthesize plusButton=_plusButton - In the implementation block
@property (retain) EKUITextButton * linkButton;                                    //@synthesize linkButton=_linkButton - In the implementation block
@property (retain) NSView * separator;                                             //@synthesize separator=_separator - In the implementation block
@property (retain) NSDictionary * viewMetrics;                                     //@synthesize viewMetrics=_viewMetrics - In the implementation block
@property (retain) CalAutoCompleteOperation * acOperation;                         //@synthesize acOperation=_acOperation - In the implementation block
@property (retain) NSString * lastEventID;                                         //@synthesize lastEventID=_lastEventID - In the implementation block
@property (assign) char sortAttendeeTokensOnNextUpdate;                            //@synthesize sortAttendeeTokensOnNextUpdate=_sortAttendeeTokensOnNextUpdate - In the implementation block
@property (retain) NSArray * attendeeConstraints;                                  //@synthesize attendeeConstraints=_attendeeConstraints - In the implementation block
@property (assign) char canShowAvailabilityButton;                                 //@synthesize canShowAvailabilityButton=_canShowAvailabilityButton - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)interestedChangeKeys;
-(void)setProgressIndicator:(NSProgressIndicator *)arg1 ;
-(double)maxHeight;
-(NSView *)separator;
-(id)control;
-(char)isFreeBusySupported;
-(EKUIAttendeesEditingField *)editingField;
-(void)updateAttendeesWithAttendeestoAdd:(id)arg1 attendeesToRemove:(id)arg2 ;
-(id)matchWithPrefix:(id)arg1 ;
-(void)attendeesFieldDidEndEditing;
-(void)relayout;
-(void)userDidDismissFromEditingField;
-(id)displayedAttendees;
-(char)updateAttendeesFromPasteboard:(id)arg1 ;
-(void)attendeesFieldDidBeginGroupExpansion;
-(void)attendeesFieldDidEndGroupExpansion;
-(char)shouldDisplayForEvent:(id)arg1 ;
-(id)initWithEventViewController:(id)arg1 ;
-(char)needsExpansion;
-(double)horizontalInset;
-(id)claimedPboardTypes;
-(void)updateWithChanges:(id)arg1 ;
-(double)horizontalPadding;
-(CalAutoCompleteOperation *)acOperation;
-(void)setAcOperation:(CalAutoCompleteOperation *)arg1 ;
-(NSDictionary *)viewMetrics;
-(char)_shouldShowPlusButton;
-(void)setViewMetrics:(NSDictionary *)arg1 ;
-(id)representedObjectsFromPasteboard:(id)arg1 ;
-(NSString *)lastEventID;
-(void)setLastEventID:(NSString *)arg1 ;
-(void)setControlContainer:(EKUIAttendeesControlContainer *)arg1 ;
-(EKUIAttendeesControlContainer *)controlContainer;
-(void)setAttendeesField:(EKUIAttendeesTokenField *)arg1 ;
-(EKUIAttendeesTokenField *)attendeesField;
-(void)setEditingField:(EKUIAttendeesEditingField *)arg1 ;
-(void)_setupPlusButton;
-(void)_setupLinkButton;
-(void)setAttendeeFieldDelegate:(EKUIAttendeeFieldDelegate *)arg1 ;
-(EKUIAttendeeFieldDelegate *)attendeeFieldDelegate;
-(void)setAttendeeConstraints:(NSArray *)arg1 ;
-(void)sessionStatusChanged:(id)arg1 ;
-(void)selectEditingField;
-(void)setLinkButton:(EKUITextButton *)arg1 ;
-(EKUITextButton *)linkButton;
-(void)linkButtonClicked:(id)arg1 ;
-(char)sortAttendeeTokensOnNextUpdate;
-(void)setSortAttendeeTokensOnNextUpdate:(char)arg1 ;
-(id)_sortedAttendeesPreservingCurrentOrderFromAttendees:(id)arg1 ;
-(void)setCanShowAvailabilityButton:(char)arg1 ;
-(NSArray *)attendeeConstraints;
-(char)_hasAttendeesToDisplay;
-(char)_shouldShowEditingField;
-(char)_shouldShowAvailabilityLink;
-(id)_attendeesToDisplayForEvent:(id)arg1 ;
-(void)_startProgressIndicatorWithTimeout;
-(void)_stopProgressIndicator;
-(id)_existingAttendeeURLs;
-(char)_isValidNewAttendee:(id)arg1 meAddress:(id)arg2 existingAttendeeURLs:(id)arg3 ;
-(void)_startProgressIndicator;
-(char)canShowAvailabilityButton;
-(void)setSeparator:(NSView *)arg1 ;
-(void)updateConstraints;
-(char)isEditable;
-(char)performDragOperation:(id)arg1 ;
-(EKUIPlusButton *)plusButton;
-(void)setPlusButton:(EKUIPlusButton *)arg1 ;
-(void)setExpanded:(char)arg1 ;
-(NSProgressIndicator *)progressIndicator;
-(id)textField;
-(void)setEvent:(id)arg1 ;
-(void)startedAutoComplete:(id)arg1 ;
-(void)finishedAutoComplete:(id)arg1 ;
-(void)cancelSearch;
@end

