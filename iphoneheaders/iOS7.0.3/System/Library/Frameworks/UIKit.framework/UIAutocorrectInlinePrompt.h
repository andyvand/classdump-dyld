/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:29:10 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIKeyboardCandidateList.h>

@class NSString, NSArray, NSMutableArray, UIView, TIKeyboardCandidateResultSet;

@interface UIAutocorrectInlinePrompt : UIView <UIKeyboardCandidateList> {

	CGRect m_originalTypedTextRect;
	NSString* m_typedText;
	NSString* m_correction;
	NSArray* m_usageTrackingTypes;
	NSMutableArray* m_typedTextViews;
	UIView* m_correctionView;
	UIView* m_correctionAnimationView;
	UIView* m_typedTextAnimationView;
	UIView* m_correctionShadowView;
	BOOL m_fits;
	BOOL m_mouseDown;
	id m_delegate;
	int m_index;
	int m_promptTextType;
	float m_originalTypedTextRectCorrectionAmount;
	float m_maxX;
	BOOL _showHiddenCandidatesOnly;
	unsigned m_usageTrackingMask;
	TIKeyboardCandidateResultSet* _candidateResultSet;

}

@property (assign,nonatomic) unsigned usageTrackingMask; 
@property (nonatomic,readonly) TIKeyboardCandidateResultSet * candidates; 
@property (nonatomic,retain) TIKeyboardCandidateResultSet * candidateResultSet;              //@synthesize candidateResultSet=_candidateResultSet - In the implementation block
@property (assign,nonatomic) BOOL showHiddenCandidatesOnly;                                  //@synthesize showHiddenCandidatesOnly=_showHiddenCandidatesOnly - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)pointInside:(CGPoint)arg1 forEvent:(GSEventRef)arg2 ;
-(void)setSelectedItem:(unsigned)arg1 ;
-(int)textEffectsVisibilityLevel;
-(BOOL)hasCandidates;
-(id)candidates;
-(id)candidateResultSet;
-(void)setCandidateResultSet:(id)arg1 ;
-(void)setCandidates:(id)arg1 inlineText:(id)arg2 inlineRect:(CGRect)arg3 maxX:(float)arg4 layout:(BOOL)arg5 ;
-(BOOL)isExtendedList;
-(BOOL)isHiddenCandidatesList;
-(void)setUIKeyboardCandidateListDelegate:(id)arg1 ;
-(void)showCandidateAtIndex:(unsigned)arg1 ;
-(void)showCandidate:(id)arg1 ;
-(void)showNextCandidate;
-(void)showPreviousCandidate;
-(void)showNextPage;
-(void)showPreviousPage;
-(void)showNextRow;
-(void)showPreviousRow;
-(id)currentCandidate;
-(unsigned)currentIndex;
-(void)candidateAcceptedAtIndex:(unsigned)arg1 ;
-(id)keyboardBehaviors;
-(id)statisticsIdentifier;
-(unsigned)selectedSortIndex;
-(void)setCandidates:(id)arg1 type:(int)arg2 inlineText:(id)arg3 inlineRect:(CGRect)arg4 maxX:(float)arg5 layout:(BOOL)arg6 ;
-(void)candidatesDidChange;
-(void)revealHiddenCandidates;
-(id)inlineText;
-(unsigned)index;
-(BOOL)showHiddenCandidatesOnly;
-(void)setShowHiddenCandidatesOnly:(BOOL)arg1 ;
-(unsigned)usageTrackingMask;
-(id)activeCandidateList;
-(void)setUsageTrackingMask:(unsigned)arg1 ;
-(void)setCorrection:(id)arg1 typedText:(id)arg2 inRect:(CGRect)arg3 maxX:(float)arg4 ;
-(void)addTypedTextRect:(CGRect)arg1 ;
-(BOOL)prepareForAnimation:(CGRect)arg1 ;
-(id)typedTextView;
-(id)correctionView;
-(id)correctionAnimationView;
-(id)correctionShadowView;
-(id)typedText;
-(id)correction;
-(void)removePromptSubviews;
-(void)setCandidateObject:(id)arg1 candidateSet:(id)arg2 type:(int)arg3 typedText:(id)arg4 inRect:(CGRect)arg5 maxX:(float)arg6 showHiddenCandidatesOnly:(BOOL)arg7 ;
-(unsigned)numberOfShownItems;
-(void)setCandidateSet:(id)arg1 showHiddenCandidatesOnly:(BOOL)arg2 ;
-(float)maximumCandidateWidth;
-(void)_candidateSelected:(id)arg1 ;
-(CGRect)horizontallySquishedCorrectionFrame:(CGRect)arg1 ;
-(CGRect)correctionFrameFromDesiredFrame:(CGRect)arg1 textHeight:(int)arg2 withExtraGap:(float)arg3 ;
-(BOOL)isAcceptableTextEffectsFrame:(CGRect)arg1 afterScrollBy:(float)arg2 ;
-(void)dismiss;
-(int)textEffectsVisibilityLevelInKeyboardWindow;
-(CGRect)shadowFrameForFrame:(CGRect)arg1 ;
-(id)typedTextAnimationView;
@end
