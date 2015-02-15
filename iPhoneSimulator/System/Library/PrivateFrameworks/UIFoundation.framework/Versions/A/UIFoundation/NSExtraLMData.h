/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:35 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/Versions/A/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <UIFoundation/UIFoundation-Structs.h>
@class NSRunStorage, NSTextContainer, NSMutableArray, NSLayoutManagerTextBlockRowArrayCache;

@interface NSExtraLMData : NSObject {

	NSRunStorage* _attachmentSizesRun;
	CGRect _currentAttachmentRect;
	unsigned long long _currentAttachmentIndex;
	id _fillHoleLock;
	NSRunStorage* _fragmentRunsExtras;
	id _temporaryAttributes;
	NSTextContainer* _firstTextContainer;
	CFDictionaryRef _textContainerIndexes;
	CFDictionaryRef _textContainerGlyphIndexes;
	long long _typesetterBehavior;
	CGRect _cachedFontBounds;
	double _cachedUnderlineThickness;
	double _cachedUnderlinePosition;
	double _cachedUnderlineAdjustment;
	NSRange _cachedUnderlineRange;
	NSMutableArray* _blockRunsArray;
	double _hyphenationFactor;
	NSMutableArray* _insertionPointCache;
	NSGlyphTree* _glyphTree;
	NSLayoutTree* _layoutTree;
	NSRange _firstTextViewVisibleCharRange;
	CGSize _firstTextViewVisibleOffset;
	NSRange _lastInvalidatedCharRange;
	double _lastInvalidatedLongitudinalPosition;
	NSTextContainer* _lastInvalidatedTextContainer;
	NSLayoutManagerTextBlockRowArrayCache* _rowArrayCache;
	struct {
		unsigned glyphCause : 6;
		unsigned layoutCause : 6;
		unsigned delegateRespondsToTempAttrs : 1;
		unsigned processingFirstTextViewVisible : 1;
		unsigned temporarySpacingChange : 1;
		unsigned alwaysDrawsActive : 1;
		unsigned usesOldShowPackedGlyphs : 1;
		unsigned drawsUnderlinesLikeWebKit : 1;
		unsigned drawsDebugBaselines : 1;
		unsigned reserved : 13;
	}  _lmFlags2;

}
@end

