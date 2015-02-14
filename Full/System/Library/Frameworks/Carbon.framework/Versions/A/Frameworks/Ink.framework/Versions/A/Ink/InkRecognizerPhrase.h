/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:47 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Carbon.framework/Versions/A/Frameworks/Ink.framework/Versions/A/Ink
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Ink/Ink-Structs.h>
#import <Ink/InkRecognizerBase.h>
#import <Ink/NSCopying.h>
#import <Ink/NSCoding.h>

@class NSMutableArray, InkRecognizerGesture, NSValue;

@interface InkRecognizerPhrase : InkRecognizerBase <NSCopying, NSCoding> {

	NSMutableArray* _strokeArray;
	InkRecognizerGesture* _gesture;
	NSMutableArray* _wordGroupArray;
	NSValue* _refCon;
	unsigned _gestureKind;
	char _isPhraseText;

}
+(unsigned)gestureKindForGesturePtr:(InkGesture*)arg1 ;
-(id)initWithInkPhraseTextRef:(void*)arg1 andGestureKind:(unsigned)arg2 ;
-(id)initWithInkPhraseRef:(void*)arg1 andGestureKind:(unsigned)arg2 ;
-(id)initWithInkPhrasePtr:(InkPhrase*)arg1 ;
-(void*)createInkPhraseRef;
-(void*)createInkPhraseTextRef;
-(char)isGesturePhrase;
-(unsigned)gestureKind;
-(void)setAppGestureKind:(unsigned)arg1 ;
-(char)isPhraseText;
-(void)dealloc;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

