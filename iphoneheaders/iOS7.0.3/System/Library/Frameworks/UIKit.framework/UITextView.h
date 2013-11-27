/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:29:36 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIScrollView.h>
#import <UIKit/UITextLinkInteraction.h>
#import <UIKit/UITextInputControllerDelegate.h>
#import <UIKit/UITextAutoscrolling.h>
#import <UIKit/UIKeyboardInput.h>
#import <UIKit/UITextInput.h>

@protocol UITextInputTokenizer;
@class NSTextStorage, NSTextContainer, NSLayoutManager, _UITextContainerView, , UITextInputController, UITextInteractionAssistant, UITextInputTraits, UIAutoscroll, _UITextViewRestorableScrollPosition, UIView, NSString, UIFont, UIColor, NSAttributedString, NSDictionary, UITextRange, UITextPosition;

@interface UITextView : UIScrollView <UITextLinkInteraction, UITextInputControllerDelegate, UITextAutoscrolling, UIKeyboardInput, UITextInput> {

	id _private;
	NSTextStorage* _textStorage;
	NSTextContainer* _textContainer;
	NSLayoutManager* _layoutManager;
	_UITextContainerView* _containerView;
	id _inputDelegate;
	<UITextInputTokenizer>* _tokenizer;
	UITextInputController* _inputController;
	UITextInteractionAssistant* _interactionAssistant;
	UITextInputTraits* _textInputTraits;
	UIAutoscroll* _autoscroll;
	struct {
		unsigned needsScrollToSelectionAfterLayout : 1;
		unsigned isInteractingWithLink : 1;
		unsigned linkInteractionIsLongPress : 1;
		unsigned editable : 1;
		unsigned reentrancyGuard : 1;
		unsigned usesExplicitPreferredMaxLayoutWidth : 1;
		unsigned determiningPreferredMaxLayoutWidth : 1;
		unsigned inSecondConstraintsPass : 1;
		unsigned interactiveSelectionDisabled : 1;
		unsigned selectable : 1;
	}  _tvFlags;
	id _linkInteractionItem;
	_UITextViewRestorableScrollPosition* _scrollTarget;
	CGPoint _scrollTargetOffset;
	unsigned _dataDetectorTypes;
	float _preferredMaxLayoutWidth;
	UIView* _inputAccessoryView;
	BOOL _clearsOnInsertion;
	UIView* _inputView;

}

@property (assign,setter=_setDrawsDebugBaselines:,nonatomic) BOOL _drawsDebugBaselines; 
@property (assign,nonatomic) <UITextViewDelegate> * delegate; 
@property (nonatomic,copy) NSString * text; 
@property (nonatomic,retain) UIFont * font; 
@property (nonatomic,retain) UIColor * textColor; 
@property (assign,nonatomic) int textAlignment; 
@property (assign,nonatomic) NSRange selectedRange; 
@property (assign,getter=isEditable,nonatomic) BOOL editable; 
@property (assign,getter=isSelectable,nonatomic) BOOL selectable; 
@property (assign,nonatomic) unsigned dataDetectorTypes; 
@property (assign,nonatomic) BOOL allowsEditingTextAttributes; 
@property (nonatomic,copy) NSAttributedString * attributedText; 
@property (nonatomic,copy) NSDictionary * typingAttributes; 
@property (retain) UIView * inputView;                                                                                                                                   //@synthesize inputView=_inputView - In the implementation block
@property (retain) UIView * inputAccessoryView; 
@property (assign,nonatomic) BOOL clearsOnInsertion;                                                                                                                     //@synthesize clearsOnInsertion=_clearsOnInsertion - In the implementation block
@property (nonatomic,readonly) NSTextContainer * textContainer;                                                                                                          //@synthesize textContainer=_textContainer - In the implementation block
@property (assign,nonatomic) UIEdgeInsets textContainerInset; 
@property (nonatomic,readonly) NSLayoutManager * layoutManager;                                                                                                          //@synthesize layoutManager=_layoutManager - In the implementation block
@property (nonatomic,readonly) NSTextStorage * textStorage;                                                                                                              //@synthesize textStorage=_textStorage - In the implementation block
@property (nonatomic,copy) NSDictionary * linkTextAttributes; 
@property (assign,setter=_setInteractiveTextSelectionDisabled:,getter=_isInteractiveTextSelectionDisabled,nonatomic) BOOL interactiveTextSelectionDisabled; 
@property (assign,nonatomic,@dynamic) int autocapitalizationType; 
@property (assign,nonatomic,@dynamic) int autocorrectionType; 
@property (assign,nonatomic,@dynamic) int spellCheckingType; 
@property (assign,nonatomic,@dynamic) int keyboardType; 
@property (assign,nonatomic,@dynamic) int keyboardAppearance; 
@property (assign,nonatomic,@dynamic) int returnKeyType; 
@property (assign,nonatomic,@dynamic) BOOL enablesReturnKeyAutomatically; 
@property (assign,getter=isSecureTextEntry,nonatomic,@dynamic) BOOL secureTextEntry; 
@property (copy) UITextRange * selectedTextRange; 
@property (nonatomic,readonly) UITextRange * markedTextRange; 
@property (nonatomic,copy) NSDictionary * markedTextStyle; 
@property (nonatomic,readonly) UITextPosition * beginningOfDocument; 
@property (nonatomic,readonly) UITextPosition * endOfDocument; 
@property (assign,nonatomic) <UITextInputDelegate> * inputDelegate; 
@property (nonatomic,readonly) <UITextInputTokenizer> * tokenizer; 
@property (nonatomic,readonly) UIView * textInputView; 
@property (assign,nonatomic) int selectionAffinity; 
+(BOOL)_isCompatibilityTextView;
+(id)_bestInterpretationForDictationResult:(id)arg1 ;
+(id)_sharedHighlightView;
-(id)dd_newOperation;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)_populateArchivedSubviews:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(CGSize)_intrinsicSizeWithinSize:(CGSize)arg1 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setBounds:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(id)undoManager;
-(BOOL)resignFirstResponder;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)increaseSize:(id)arg1 ;
-(void)decreaseSize:(id)arg1 ;
-(BOOL)becomeFirstResponder;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(void)decodeRestorableStateWithCoder:(id)arg1 ;
-(BOOL)_isDisplayingShortcutViewController;
-(BOOL)isEditable;
-(float)lineHeight;
-(BOOL)canBecomeFirstResponder;
-(void)tintColorDidChange;
-(id)text;
-(void)setScrollEnabled:(BOOL)arg1 ;
-(void)_scrollViewAnimationEnded:(id)arg1 finished:(BOOL)arg2 ;
-(void)setFont:(id)arg1 ;
-(id)font;
-(CGSize)intrinsicContentSize;
-(void)setAttributedText:(id)arg1 ;
-(void)setTextColor:(id)arg1 ;
-(void)setText:(id)arg1 ;
-(id)attributedText;
-(void)setTextAlignment:(int)arg1 ;
-(BOOL)isEditing;
-(id)layoutManager;
-(void)_textStorageDidProcessEditing:(id)arg1 ;
-(id)textStorage;
-(id)interactionAssistant;
-(id)selectionView;
-(BOOL)keyboardInput:(id)arg1 shouldInsertText:(id)arg2 isMarkedText:(BOOL)arg3 ;
-(BOOL)keyboardInput:(id)arg1 shouldReplaceTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(BOOL)keyboardInputShouldDelete:(id)arg1 ;
-(BOOL)keyboardInputChanged:(id)arg1 ;
-(void)keyboardInputChangedSelection:(id)arg1 ;
-(void)scrollSelectionToVisible:(BOOL)arg1 ;
-(id)textColor;
-(void)cancelAutoscroll;
-(id)textInputView;
-(NSRange)selectedRange;
-(void)setTypingAttributes:(id)arg1 ;
-(id)_textInputTraits;
-(int)textAlignment;
-(id)typingAttributes;
-(id)beginningOfDocument;
-(id)endOfDocument;
-(id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2 ;
-(id)textInRange:(id)arg1 ;
-(id)inputDelegate;
-(void)setSelectedRange:(NSRange)arg1 ;
-(void)addTextAlternativesDisplayStyleToRange:(NSRange)arg1 ;
-(CGRect)caretRectForPosition:(id)arg1 ;
-(void)_scrollRangeToVisible:(NSRange)arg1 animated:(BOOL)arg2 ;
-(BOOL)hasText;
-(void)insertText:(id)arg1 ;
-(void)deleteBackward;
-(void)replaceRange:(id)arg1 withText:(id)arg2 ;
-(void)replaceRangeWithTextWithoutClosingTyping:(id)arg1 replacementText:(id)arg2 ;
-(id)selectedTextRange;
-(void)setSelectedTextRange:(id)arg1 ;
-(id)markedTextRange;
-(id)markedTextStyle;
-(void)setMarkedTextStyle:(id)arg1 ;
-(void)setMarkedText:(id)arg1 selectedRange:(NSRange)arg2 ;
-(void)unmarkText;
-(id)positionFromPosition:(id)arg1 offset:(int)arg2 ;
-(id)positionFromPosition:(id)arg1 inDirection:(int)arg2 offset:(int)arg3 ;
-(int)comparePosition:(id)arg1 toPosition:(id)arg2 ;
-(int)offsetFromPosition:(id)arg1 toPosition:(id)arg2 ;
-(id)positionWithinRange:(id)arg1 farthestInDirection:(int)arg2 ;
-(id)characterRangeByExtendingPosition:(id)arg1 inDirection:(int)arg2 ;
-(void)setInputDelegate:(id)arg1 ;
-(id)tokenizer;
-(int)baseWritingDirectionForPosition:(id)arg1 inDirection:(int)arg2 ;
-(void)setBaseWritingDirection:(int)arg1 forRange:(id)arg2 ;
-(CGRect)firstRectForRange:(id)arg1 ;
-(id)selectionRectsForRange:(id)arg1 ;
-(id)closestPositionToPoint:(CGPoint)arg1 ;
-(id)closestPositionToPoint:(CGPoint)arg1 withinRange:(id)arg2 ;
-(id)characterRangeAtPoint:(CGPoint)arg1 ;
-(void)insertDictationResult:(id)arg1 withCorrectionIdentifier:(id)arg2 ;
-(id)insertDictationResultPlaceholder;
-(CGRect)frameForDictationResultPlaceholder:(id)arg1 ;
-(void)removeDictationResultPlaceholder:(id)arg1 willInsertResult:(BOOL)arg2 ;
-(id)rangeWithTextAlternatives:(id*)arg1 atPosition:(id)arg2 ;
-(id)metadataDictionariesForDictationResults;
-(void)beginSelectionChange;
-(void)endSelectionChange;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(BOOL)textInput:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(void)textInputDidChange:(id)arg1 ;
-(void)textInputDidChangeSelection:(id)arg1 ;
-(CGRect)visibleRect;
-(UIEdgeInsets)textContainerInset;
-(id)textContainer;
-(id)linkTextAttributes;
-(id)textStylingAtPosition:(id)arg1 inDirection:(int)arg2 ;
-(int)selectionAffinity;
-(void)startAutoscroll:(CGPoint)arg1 ;
-(void)updateConstraints;
-(id)_containerView;
-(BOOL)canResignFirstResponder;
-(id)inputView;
-(id)inputAccessoryView;
-(void)setAllowsEditingTextAttributes:(BOOL)arg1 ;
-(void)setEditable:(BOOL)arg1 ;
-(void)setLineHeight:(float)arg1 ;
-(void)setDataDetectorTypes:(unsigned)arg1 ;
-(BOOL)allowsEditingTextAttributes;
-(unsigned)dataDetectorTypes;
-(id)webView;
-(void)setInputView:(id)arg1 ;
-(void)setInputAccessoryView:(id)arg1 ;
-(void)selectAll:(id)arg1 ;
-(CGRect)visibleTextRect;
-(void)setClearsOnInsertion:(BOOL)arg1 ;
-(void)makeTextWritingDirectionRightToLeft:(id)arg1 ;
-(void)makeTextWritingDirectionLeftToRight:(id)arg1 ;
-(void)replace:(id)arg1 ;
-(void)cut:(id)arg1 ;
-(void)copy:(id)arg1 ;
-(void)paste:(id)arg1 ;
-(void)_define:(id)arg1 ;
-(void)_addShortcut:(id)arg1 ;
-(void)toggleBoldface:(id)arg1 ;
-(void)toggleItalics:(id)arg1 ;
-(void)toggleUnderline:(id)arg1 ;
-(void)_showTextStyleOptions:(id)arg1 ;
-(void)setContentToHTMLString:(id)arg1 ;
-(BOOL)mightHaveLinks;
-(void)tapLinkAtPoint:(CGPoint)arg1 ;
-(BOOL)isInteractingWithLink;
-(void)startInteractionWithLinkAtPoint:(CGPoint)arg1 ;
-(void)updateInteractionWithLinkAtPoint:(CGPoint)arg1 ;
-(void)validateInteractionWithLinkAtPoint:(CGPoint)arg1 ;
-(void)cancelInteractionWithLink;
-(void)startLongInteractionWithLinkAtPoint:(CGPoint)arg1 ;
-(BOOL)willInteractWithLinkAtPoint:(CGPoint)arg1 ;
-(id)initWithFrame:(CGRect)arg1 font:(id)arg2 ;
-(void)_setDictationResult:(id)arg1 withCorrectionIdentifier:(id)arg2 ;
-(BOOL)clearsOnInsertion;
-(void)disableClearsOnInsertion;
-(void)updateSelection;
-(id)selectedText;
-(void)select:(id)arg1 ;
-(void)_promptForReplace:(id)arg1 ;
-(void)setBecomesEditableWithGestures:(BOOL)arg1 ;
-(unsigned)marginTop;
-(void)setMarginTop:(unsigned)arg1 ;
-(void)scrollRangeToVisible:(NSRange)arg1 ;
-(id)automaticallySelectedOverlay;
-(Class)_printFormatterClass;
-(BOOL)_isDisplayingReferenceLibraryViewController;
-(float)_preferredMaxLayoutWidth;
-(BOOL)_needsDoubleUpdateConstraintsPass;
-(void)nsis_valueOfVariable:(id)arg1 didChangeInEngine:(id)arg2 ;
-(void)_prepareForFirstIntrinsicContentSizeCalculation;
-(void)_prepareForSecondIntrinsicContentSizeCalculationWithEngine:(id)arg1 ;
-(void)_setDrawsDebugBaselines:(BOOL)arg1 ;
-(BOOL)_drawsDebugBaselines;
-(void)_setInSecondConstraintsPass:(BOOL)arg1 ;
-(void)setContinuousSpellCheckingEnabled:(BOOL)arg1 ;
-(void)_insertAttributedTextWithoutClosingTyping:(id)arg1 ;
-(BOOL)isAccessibilityElementByDefault;
-(BOOL)isElementAccessibilityExposedToInterfaceBuilder;
-(id)_textInputViewForAddingGestureRecognizers;
-(BOOL)_isInteractiveTextSelectionDisabled;
-(id)initWithFrame:(CGRect)arg1 textContainer:(id)arg2 ;
-(void)drawRect:(CGRect)arg1 forViewPrintFormatter:(id)arg2 ;
-(void)_setInteractiveTextSelectionDisabled:(BOOL)arg1 ;
-(void)_observedTextViewDidChange:(id)arg1 ;
-(void)setSelectable:(BOOL)arg1 ;
-(void)_commonInitWithTextContainer:(id)arg1 isDecoding:(BOOL)arg2 isEditable:(BOOL)arg3 isSelectable:(BOOL)arg4 ;
-(void)setUsesTiledViews:(BOOL)arg1 ;
-(BOOL)isSelectable;
-(BOOL)_shouldStartDataDetectors;
-(void)_startDataDetectors;
-(unsigned)_totalNumberOfTextViewsInLayoutManager;
-(NSRange)_visibleRangeWithLayout:(BOOL)arg1 ;
-(CGPoint)_contentOffsetForScrollToVisible:(NSRange)arg1 ;
-(void)_setScrollTarget:(id)arg1 ;
-(CGRect)visibleRectIgnoringKeyboard;
-(void)_resyncContainerFrameForNonAutolayout;
-(void)_ensureSelectionVisible;
-(BOOL)_shouldScrollEnclosingScrollView;
-(void)_scrollSelectionToVisibleInContainingScrollView;
-(float)_currentPreferredMaxLayoutWidth;
-(CGRect)_rectForScrollToVisible:(NSRange)arg1 ;
-(void)_resetDataDetectorsResults;
-(BOOL)usesTiledViews;
-(void)_restoreScrollPosition:(id)arg1 animated:(BOOL)arg2 ;
-(void)setTextContainerInset:(UIEdgeInsets)arg1 ;
-(void)setLinkTextAttributes:(id)arg1 ;
-(void)_selectionMayChange:(id)arg1 ;
-(void)_registerUndoOperationForReplacementWithActionName:(id)arg1 replacementText:(id)arg2 ;
-(unsigned)_effectiveDataDetectorTypes;
-(id)initReadonlyAndUnselectableWithFrame:(CGRect)arg1 textContainer:(id)arg2 ;
-(void)_setPreferredMaxLayoutWidth:(float)arg1 ;
-(id)_restorableScrollPosition;
-(BOOL)_mightHaveSelection;
-(void)_cancelDataDetectors;
-(id)_interactableItemAtPoint:(CGPoint)arg1 ;
-(void)_highlightLinkAtPoint:(CGPoint)arg1 ;
-(void)_resetLinkInteraction;
-(CGRect)_presentationRectForLinkAtRange:(NSRange)arg1 ;
-(void)_finishHandlingInteraction:(id)arg1 ;
@end
