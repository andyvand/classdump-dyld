/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:57 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Calendar.app/Contents/MacOS/Calendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Calendar/Calendar-Structs.h>
#import <Calendar/CalUIOccurrence.h>

@class NSView, CalUIFontSmoothedTextField, NSLayoutConstraint, NSString, CalUILayerBackedView, NSDictionary, NSFont;

@interface CalUIDotOccurrence : CalUIOccurrence {

	char _startsInThisRow;
	char _endsInThisRow;
	char _implicitResizePending;
	char _initialized;
	char _updateConstraintsPending;
	char _showsStartTime;
	char _showsEndTime;
	long long _startColumn;
	long long _endColumn;
	double _dotDiameter;
	double _occurrenceHeight;
	double _topInset;
	NSView* _leadingDayView;
	NSView* _trailingDayView;
	CalUIFontSmoothedTextField* _titleField;
	CalUIFontSmoothedTextField* _leftTimeField;
	CalUIFontSmoothedTextField* _rightTimeField;
	NSLayoutConstraint* _multiDayTimedStartTimeConstraint;
	NSLayoutConstraint* _dotHeightConstraint;
	NSLayoutConstraint* _dotWidthConstraint;
	NSLayoutConstraint* _dotLeftInsetConstraint;
	NSLayoutConstraint* _titleRightInsetConstraint;
	NSLayoutConstraint* _rightTimeFieldBottomSpacingConstraint;
	NSLayoutConstraint* _rightTimeFieldRightInsetConstraint;
	NSLayoutConstraint* _leftTimeFieldBottomSpacingConstraint;
	NSLayoutConstraint* _dotBottomInsetConstraint;
	NSLayoutConstraint* _dotVerticalCenteringConstraint;
	NSString* _cachedStartTimeString;
	NSString* _cachedEndTimeString;
	CalUILayerBackedView* _dot;
	NSDictionary* _views;
	NSDictionary* _metrics;
	NSFont* _fontForTitleField;
	NSFont* _fontForTimeFields;

}

@property (assign) char startsInThisRow; 
@property (assign) char endsInThisRow; 
@property (assign) long long startColumn;                                                   //@synthesize startColumn=_startColumn - In the implementation block
@property (assign) long long endColumn;                                                     //@synthesize endColumn=_endColumn - In the implementation block
@property (assign,nonatomic,__weak) id<CalUIDotOccurrenceDelegate> delegate; 
@property (assign) char implicitResizePending;                                              //@synthesize implicitResizePending=_implicitResizePending - In the implementation block
@property (assign) double dotDiameter;                                                      //@synthesize dotDiameter=_dotDiameter - In the implementation block
@property (assign) double occurrenceHeight;                                                 //@synthesize occurrenceHeight=_occurrenceHeight - In the implementation block
@property (assign) double topInset;                                                         //@synthesize topInset=_topInset - In the implementation block
@property (__weak) NSView * leadingDayView;                                                 //@synthesize leadingDayView=_leadingDayView - In the implementation block
@property (__weak) NSView * trailingDayView;                                                //@synthesize trailingDayView=_trailingDayView - In the implementation block
@property (retain) CalUIFontSmoothedTextField * titleField;                                 //@synthesize titleField=_titleField - In the implementation block
@property (retain) CalUIFontSmoothedTextField * leftTimeField;                              //@synthesize leftTimeField=_leftTimeField - In the implementation block
@property (retain) CalUIFontSmoothedTextField * rightTimeField;                             //@synthesize rightTimeField=_rightTimeField - In the implementation block
@property (retain) NSLayoutConstraint * multiDayTimedStartTimeConstraint;                   //@synthesize multiDayTimedStartTimeConstraint=_multiDayTimedStartTimeConstraint - In the implementation block
@property (retain) NSLayoutConstraint * dotHeightConstraint;                                //@synthesize dotHeightConstraint=_dotHeightConstraint - In the implementation block
@property (retain) NSLayoutConstraint * dotWidthConstraint;                                 //@synthesize dotWidthConstraint=_dotWidthConstraint - In the implementation block
@property (retain) NSLayoutConstraint * dotLeftInsetConstraint;                             //@synthesize dotLeftInsetConstraint=_dotLeftInsetConstraint - In the implementation block
@property (retain) NSLayoutConstraint * titleRightInsetConstraint;                          //@synthesize titleRightInsetConstraint=_titleRightInsetConstraint - In the implementation block
@property (retain) NSLayoutConstraint * rightTimeFieldBottomSpacingConstraint;              //@synthesize rightTimeFieldBottomSpacingConstraint=_rightTimeFieldBottomSpacingConstraint - In the implementation block
@property (retain) NSLayoutConstraint * rightTimeFieldRightInsetConstraint;                 //@synthesize rightTimeFieldRightInsetConstraint=_rightTimeFieldRightInsetConstraint - In the implementation block
@property (retain) NSLayoutConstraint * leftTimeFieldBottomSpacingConstraint;               //@synthesize leftTimeFieldBottomSpacingConstraint=_leftTimeFieldBottomSpacingConstraint - In the implementation block
@property (retain) NSLayoutConstraint * dotBottomInsetConstraint;                           //@synthesize dotBottomInsetConstraint=_dotBottomInsetConstraint - In the implementation block
@property (retain) NSLayoutConstraint * dotVerticalCenteringConstraint;                     //@synthesize dotVerticalCenteringConstraint=_dotVerticalCenteringConstraint - In the implementation block
@property (retain) NSString * cachedStartTimeString;                                        //@synthesize cachedStartTimeString=_cachedStartTimeString - In the implementation block
@property (retain) NSString * cachedEndTimeString;                                          //@synthesize cachedEndTimeString=_cachedEndTimeString - In the implementation block
@property (retain) CalUILayerBackedView * dot;                                              //@synthesize dot=_dot - In the implementation block
@property (assign) char initialized;                                                        //@synthesize initialized=_initialized - In the implementation block
@property (assign) char updateConstraintsPending;                                           //@synthesize updateConstraintsPending=_updateConstraintsPending - In the implementation block
@property (retain) NSDictionary * views;                                                    //@synthesize views=_views - In the implementation block
@property (retain) NSDictionary * metrics;                                                  //@synthesize metrics=_metrics - In the implementation block
@property (assign) char showsStartTime;                                                     //@synthesize showsStartTime=_showsStartTime - In the implementation block
@property (assign) char showsEndTime;                                                       //@synthesize showsEndTime=_showsEndTime - In the implementation block
@property (retain) NSFont * fontForTitleField;                                              //@synthesize fontForTitleField=_fontForTitleField - In the implementation block
@property (retain) NSFont * fontForTimeFields;                                              //@synthesize fontForTimeFields=_fontForTimeFields - In the implementation block
+(id)interestedDragTypes;
+(void)initialize;
-(void)refreshAppearance;
-(void)setImplicitResizePending:(char)arg1 ;
-(id)realHitTest:(CGPoint)arg1 ;
-(long long)startColumn;
-(long long)endColumn;
-(void)setStartColumn:(long long)arg1 ;
-(void)setLeadingDayView:(NSView *)arg1 ;
-(void)setEndColumn:(long long)arg1 ;
-(void)setTrailingDayView:(NSView *)arg1 ;
-(void)setStartsInThisRow:(char)arg1 ;
-(void)setEndsInThisRow:(char)arg1 ;
-(void)readyForDisplay;
-(NSView *)leadingDayView;
-(NSView *)trailingDayView;
-(void)timeFieldVisibilitySettingDidChange;
-(char)startsInThisRow;
-(char)endsInThisRow;
-(id)imageForInternalDragOperation;
-(CGPoint)offsetForDragImage:(id)arg1 ;
-(id)stringForEventTime:(id)arg1 inEventTimeZone:(char)arg2 ;
-(id)newDesiredTrackingAreas;
-(CGRect)inspectorTargetRectInScreenCoordinates;
-(id)initWithEvent:(id)arg1 container:(id)arg2 delegate:(id)arg3 viewController:(id)arg4 ;
-(double)dotDiameter;
-(double)occurrenceHeight;
-(void)setDot:(CalUILayerBackedView *)arg1 ;
-(void)setLeftTimeField:(CalUIFontSmoothedTextField *)arg1 ;
-(void)setRightTimeField:(CalUIFontSmoothedTextField *)arg1 ;
-(CalUILayerBackedView *)dot;
-(CalUIFontSmoothedTextField *)leftTimeField;
-(CalUIFontSmoothedTextField *)rightTimeField;
-(void)setDotVerticalCenteringConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setDotBottomInsetConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setRightTimeFieldBottomSpacingConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setLeftTimeFieldBottomSpacingConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setRightTimeFieldRightInsetConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setTitleRightInsetConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setDotLeftInsetConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setDotHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setDotWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)dotVerticalCenteringConstraint;
-(NSLayoutConstraint *)titleRightInsetConstraint;
-(NSLayoutConstraint *)dotLeftInsetConstraint;
-(NSLayoutConstraint *)dotHeightConstraint;
-(NSLayoutConstraint *)dotWidthConstraint;
-(void)updateDotVerticalConstraints;
-(char)hasNonStandardDotIcon;
-(void)setCachedStartTimeString:(NSString *)arg1 ;
-(void)setCachedEndTimeString:(NSString *)arg1 ;
-(NSLayoutConstraint *)dotBottomInsetConstraint;
-(void)updateDotVerticalConstraintsConstant;
-(NSFont *)fontForTitleField;
-(NSFont *)fontForTimeFields;
-(void)updateShowsTime;
-(char)implicitResizePending;
-(void)initializeLayoutForTimeFieldsIfNeeded;
-(void)setShowsStartTime:(char)arg1 ;
-(void)setShowsEndTime:(char)arg1 ;
-(void)updateTimeText;
-(void)setNeedsUpdateFieldConstraints:(char)arg1 ;
-(char)showsStartTime;
-(char)showsEndTime;
-(char)shouldUseLeftTimeFieldForStartTime;
-(id)timeAttributes;
-(NSString *)cachedStartTimeString;
-(void)setUpdateConstraintsPending:(char)arg1 ;
-(char)updateConstraintsPending;
-(NSLayoutConstraint *)rightTimeFieldRightInsetConstraint;
-(NSLayoutConstraint *)rightTimeFieldBottomSpacingConstraint;
-(NSLayoutConstraint *)leftTimeFieldBottomSpacingConstraint;
-(NSLayoutConstraint *)multiDayTimedStartTimeConstraint;
-(void)setMultiDayTimedStartTimeConstraint:(NSLayoutConstraint *)arg1 ;
-(void)updateMultiDayTimedStartTimeConstraint;
-(void)updateRightConstraintsForTimeFields;
-(void)updateBottomConstraintSpacingForTimeFields;
-(void)setFontForTitleField:(NSFont *)arg1 ;
-(void)setFontForTimeFields:(NSFont *)arg1 ;
-(void)updateFontForTextAttributes;
-(void)updateSelection;
-(CGSize)occurrenceImageSize;
-(void)setDotDiameter:(double)arg1 ;
-(void)setOccurrenceHeight:(double)arg1 ;
-(NSString *)cachedEndTimeString;
-(char)resizesHorizontally;
-(void)setTopInset:(double)arg1 ;
-(double)topInset;
-(void)updateTextFields;
-(NSDictionary *)metrics;
-(char)updateWithEvent:(id)arg1 ;
-(void)setMetrics:(NSDictionary *)arg1 ;
-(id)titleAttributes;
-(CalUIFontSmoothedTextField *)titleField;
-(void)setTitleField:(CalUIFontSmoothedTextField *)arg1 ;
-(char)initialized;
-(void)setInitialized:(char)arg1 ;
-(void)updateConstraints;
-(void)setFont:(id)arg1 ;
-(void)layout;
-(void)updateLayer;
-(id)hitTest:(CGPoint)arg1 ;
-(long long)compare:(id)arg1 ;
-(char)wantsUpdateLayer;
-(void)mouseDragged:(id)arg1 ;
-(id)viewController;
-(NSDictionary *)views;
-(void)setViews:(NSDictionary *)arg1 ;
@end

