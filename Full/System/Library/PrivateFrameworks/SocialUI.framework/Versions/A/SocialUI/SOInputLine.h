/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:26 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SocialUI.framework/Versions/A/SocialUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SocialUI/SocialUI-Structs.h>
#import <AppKit/NSTextView.h>

@class NSDate, SOTimer, SOTimerCenter, NSColor, NSFont, NSString, NSNumber, NSView, NSMenuItem, SOInputLineAutoSender;

@interface SOInputLine : NSTextView {

	NSDate* _firstKey;
	NSDate* _lastKey;
	SOTimer* _timer;
	SOTimerCenter* _timerCenter;
	NSColor* _textColor;
	unsigned _nonEmpty : 1;
	unsigned _significantChange : 1;
	unsigned _sTermToggled : 1;
	char _delegateRespondsToInputLineDidChangeSignificantly;
	char _delegateRespondsToInputLineRequestedPriorOutgoingMessage;
	char _delegateRespondsToInputLineRequestedNextOutgoingMessage;
	char _delegateRespondsToDefaultTypingAttributesForInputLine;
	char _delegateRespondsToInputLineShouldInsertNewLine;
	char _canDisplayInlineFileTransfers;
	char _placeholderAttributedStringNeedsUpdate;
	char _dirty;
	char _automaticEmojiSubstitutionAllowed;
	char _automaticEmojiSubstitutionEnablediMessage;
	char _automaticEmojiSubstitutionEnabledLegacy;
	NSFont* _defaultFont;
	NSString* _transcriptStyleID;
	NSFont* _lastUsedSubstitutedFont;
	NSString* _placeholderText;
	NSNumber* _forcedMinimumHeight;
	NSColor* _transferTextColor;
	NSColor* _transferBackgroundColor;
	NSView* _keyForwardingView;
	NSMenuItem* _substituteEmojiMenuItem;
	double _lastChangedTime;
	SOInputLineAutoSender* _autoSender;

}

@property (assign,nonatomic) char dirty;                                                                                     //@synthesize dirty=_dirty - In the implementation block
@property (nonatomic,retain) NSString * transcriptStyleID;                                                                   //@synthesize transcriptStyleID=_transcriptStyleID - In the implementation block
@property (nonatomic,retain) NSFont * defaultFont;                                                                           //@synthesize defaultFont=_defaultFont - In the implementation block
@property (nonatomic,retain) NSFont * lastUsedSubstitutedFont;                                                               //@synthesize lastUsedSubstitutedFont=_lastUsedSubstitutedFont - In the implementation block
@property (nonatomic,retain) NSString * placeholderText;                                                                     //@synthesize placeholderText=_placeholderText - In the implementation block
@property (nonatomic,retain) NSNumber * forcedMinimumHeight;                                                                 //@synthesize forcedMinimumHeight=_forcedMinimumHeight - In the implementation block
@property (nonatomic,retain) NSColor * transferTextColor;                                                                    //@synthesize transferTextColor=_transferTextColor - In the implementation block
@property (nonatomic,retain) NSColor * transferBackgroundColor;                                                              //@synthesize transferBackgroundColor=_transferBackgroundColor - In the implementation block
@property (assign,nonatomic,__weak) id<SOInputLineDelegate> delegate; 
@property (retain) NSView * keyForwardingView;                                                                               //@synthesize keyForwardingView=_keyForwardingView - In the implementation block
@property (nonatomic,retain) NSMenuItem * substituteEmojiMenuItem;                                                           //@synthesize substituteEmojiMenuItem=_substituteEmojiMenuItem - In the implementation block
@property (assign,getter=isAutomaticEmojiSubstitutionEnabled,nonatomic) char automaticEmojiSubstitutionEnabled; 
@property (assign,getter=isAutomaticEmojiSubstitutionAllowed,nonatomic) char automaticEmojiSubstitutionAllowed;              //@synthesize automaticEmojiSubstitutionAllowed=_automaticEmojiSubstitutionAllowed - In the implementation block
@property (assign,nonatomic) double lastChangedTime;                                                                         //@synthesize lastChangedTime=_lastChangedTime - In the implementation block
@property (nonatomic,retain) SOInputLineAutoSender * autoSender;                                                             //@synthesize autoSender=_autoSender - In the implementation block
@property (assign,nonatomic) char automaticEmojiSubstitutionEnablediMessage;                                                 //@synthesize automaticEmojiSubstitutionEnablediMessage=_automaticEmojiSubstitutionEnablediMessage - In the implementation block
@property (assign,nonatomic) char automaticEmojiSubstitutionEnabledLegacy;                                                   //@synthesize automaticEmojiSubstitutionEnabledLegacy=_automaticEmojiSubstitutionEnabledLegacy - In the implementation block
+(double)minimumFontSize;
+(char)isFileTransferObject:(id)arg1 ;
+(id)_updateCharacterSet;
-(void)_postNotification:(id)arg1 ;
-(NSString *)placeholderText;
-(void)setPlaceholderText:(NSString *)arg1 ;
-(void)_updatePlaceholderAttributedString;
-(void)_updateFontChange;
-(NSColor *)transferTextColor;
-(NSColor *)transferBackgroundColor;
-(NSString *)transcriptStyleID;
-(void)_initializeInputLineSettings:(id)arg1 ;
-(void)updateAutomaticEmojiSubstitutionState;
-(void)_fixAttrsOnSelectionChange:(id)arg1 ;
-(void)_textSizeDidChange:(id)arg1 ;
-(void)toggleAutomaticEmojiSubstitution:(id)arg1 ;
-(void)_updateMaps:(id)arg1 ;
-(char)insertFileURL:(id)arg1 previewImage:(id)arg2 ;
-(char)_applyDragAndDropFormatting:(id)arg1 ;
-(char)isAutomaticEmojiSubstitutionEnabled;
-(void)setAutomaticEmojiSubstitutionEnabled:(char)arg1 ;
-(void)copySelectionToFindPboard:(id)arg1 ;
-(void)pasteAndMatchStyle:(id)arg1 ;
-(void)setLastUsedSubstitutedFont:(NSFont *)arg1 ;
-(char)textIsNonEmpty;
-(void)_autoSend:(int)arg1 ;
-(void)_placeholderAttributedStringNeedsUpdate;
-(void)_updateValue:(id)arg1 forSettingsKey:(id)arg2 ;
-(void)setAutomaticEmojiSubstitutionEnablediMessage:(char)arg1 ;
-(void)setAutomaticEmojiSubstitutionEnabledLegacy:(char)arg1 ;
-(NSFont *)defaultFont;
-(char)insertAttributedStringWithAttachments:(id)arg1 ;
-(void)applyLinkToSelection:(id)arg1 withText:(id)arg2 ;
-(void)_helperDefaultsDidChange:(id)arg1 ;
-(void)_settingsDidChange;
-(char)isAutomaticEmojiSubstitutionAllowed;
-(void)makeTextLarger:(id)arg1 ;
-(void)makeTextSmaller:(id)arg1 ;
-(void)makeTextStandardSize:(id)arg1 ;
-(void)_commonSOInputLineInit;
-(NSNumber *)forcedMinimumHeight;
-(void)_fetchPriorSentMessage;
-(void)_fetchNextSentMessage;
-(NSView *)keyForwardingView;
-(char)canAttachFile;
-(char)insertAttributedString:(id)arg1 intoRange:(NSRange)arg2 ;
-(char)canBeReceivedInline:(id)arg1 ;
-(void)ensureTextNotInsertedAdjacentToFileTransfer;
-(char)pasteAttributedStringFromPasteboard:(id)arg1 ;
-(void)_getIMHandleURL:(id*)arg1 andText:(id*)arg2 fromPasteboard:(id)arg3 ;
-(char)insertLinkAtSelection:(id)arg1 withText:(id)arg2 ;
-(id)_attachedFileURLs;
-(char)insertFileURLs:(id)arg1 ;
-(char)pasteRtfdFromPasteboard:(id)arg1 ;
-(char)pasteRtfFromPasteboard:(id)arg1 ;
-(char)pasteStringFromPasteboard:(id)arg1 withAttributes:(id)arg2 ;
-(void)_showErrorSheetWithTitle:(id)arg1 message:(id)arg2 helpAnchor:(id)arg3 ;
-(void)_clearParagraphStyle;
-(char)writeAttributedStringSelectionToPasteboard:(id)arg1 ;
-(char)writeSelectedURLsToPasteboard:(id)arg1 ;
-(char)insertAttributedString:(id)arg1 ;
-(void)protectFileTransferObjectsFromSelectionInCopyOrPaste;
-(void)_setTypingAttributesForSelection:(NSRange)arg1 ;
-(void)setDefaultFont:(NSFont *)arg1 ;
-(void)setTranscriptStyleID:(NSString *)arg1 ;
-(void)setTransferTextColor:(NSColor *)arg1 ;
-(void)setTransferBackgroundColor:(NSColor *)arg1 ;
-(id)rawAttributedStringValue;
-(void)setAutomaticEmojiSubstitutionAllowed:(char)arg1 ;
-(void)stopTimers;
-(char)canRenderInline:(id)arg1 ;
-(char)containsAudioMessage;
-(void)setCanDisplayInlineFileTransfers:(char)arg1 ;
-(NSFont *)lastUsedSubstitutedFont;
-(void)setForcedMinimumHeight:(NSNumber *)arg1 ;
-(void)setKeyForwardingView:(NSView *)arg1 ;
-(NSMenuItem *)substituteEmojiMenuItem;
-(void)setSubstituteEmojiMenuItem:(NSMenuItem *)arg1 ;
-(double)lastChangedTime;
-(void)setLastChangedTime:(double)arg1 ;
-(SOInputLineAutoSender *)autoSender;
-(void)setAutoSender:(SOInputLineAutoSender *)arg1 ;
-(char)automaticEmojiSubstitutionEnablediMessage;
-(char)automaticEmojiSubstitutionEnabledLegacy;
-(void)addLink:(id)arg1 ;
-(void)_timerFired;
-(void)setDelegate:(id<SOInputLineDelegate>)arg1 ;
-(void)dealloc;
-(void)clear;
-(id)initWithCoder:(id)arg1 ;
-(id)accessibilityAttributeNames;
-(id)accessibilityAttributeValue:(id)arg1 ;
-(id<SOInputLineDelegate>)delegate;
-(char)validateUserInterfaceItem:(id)arg1 ;
-(char)validateMenuItem:(id)arg1 ;
-(void)doCommandBySelector:(SEL)arg1 ;
-(void)setTextColor:(id)arg1 ;
-(char)canSmoothFontsInLayer;
-(id)textColor;
-(void)keyDown:(id)arg1 ;
-(char)resignFirstResponder;
-(char)becomeFirstResponder;
-(char)performDragOperation:(id)arg1 ;
-(void)cut:(id)arg1 ;
-(void)paste:(id)arg1 ;
-(char)shouldChangeTextInRange:(NSRange)arg1 replacementString:(id)arg2 ;
-(void)didChangeText;
-(void)setTypingAttributes:(id)arg1 ;
-(void)setMinSize:(CGSize)arg1 ;
-(void)deleteForward:(id)arg1 ;
-(void)awakeFromNib;
-(void)updateDraggingItemsForDrag:(id)arg1 ;
-(void)concludeDragOperation:(id)arg1 ;
-(unsigned long long)validModesForFontPanel:(id)arg1 ;
-(char)acceptsPreviewPanelControl:(id)arg1 ;
-(void)beginPreviewPanelControl:(id)arg1 ;
-(void)endPreviewPanelControl:(id)arg1 ;
-(void)setSmartInsertDeleteEnabled:(char)arg1 ;
-(void)insertText:(id)arg1 replacementRange:(NSRange)arg2 ;
-(id)writablePasteboardTypes;
-(char)writeSelectionToPasteboard:(id)arg1 type:(id)arg2 ;
-(void)setGrammarCheckingEnabled:(char)arg1 ;
-(void)setAutomaticQuoteSubstitutionEnabled:(char)arg1 ;
-(void)setAutomaticDashSubstitutionEnabled:(char)arg1 ;
-(void)setAutomaticTextReplacementEnabled:(char)arg1 ;
-(void)setAutomaticDataDetectionEnabled:(char)arg1 ;
-(void)setAutomaticLinkDetectionEnabled:(char)arg1 ;
-(void)setAutomaticSpellingCorrectionEnabled:(char)arg1 ;
-(void)insertNewline:(id)arg1 ;
-(void)setContinuousSpellCheckingEnabled:(char)arg1 ;
-(id)acceptableDragTypes;
-(unsigned long long)characterIndexForInsertionAtPoint:(CGPoint)arg1 ;
-(char)_readSelectionFromPasteboard:(id)arg1 types:(id)arg2 ;
-(void)deleteBackward:(id)arg1 ;
-(id)readablePasteboardTypes;
-(char)readSelectionFromPasteboard:(id)arg1 type:(id)arg2 ;
-(id)smartInsertBeforeStringForString:(id)arg1 replacingRange:(NSRange)arg2 ;
-(id)smartInsertAfterStringForString:(id)arg1 replacingRange:(NSRange)arg2 ;
-(char)dirty;
-(void)setDirty:(char)arg1 ;
@end

