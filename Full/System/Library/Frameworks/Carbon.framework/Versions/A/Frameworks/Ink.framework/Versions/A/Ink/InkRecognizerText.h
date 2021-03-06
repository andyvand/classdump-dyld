/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:33:24 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Carbon.framework/Versions/A/Frameworks/Ink.framework/Versions/A/Ink
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Ink/Ink-Structs.h>
#import <Ink/InkRecognizerBase.h>
#import <Ink/NSCopying.h>
#import <Ink/NSCoding.h>

@class NSMutableArray, NSValue;

@interface InkRecognizerText : InkRecognizerBase <NSCopying, NSCoding> {

	NSMutableArray* _strokeArray;
	char _firstWordOfPhrase;
	NSMutableArray* _textArray;
	NSMutableArray* _leadingSpacesArray;
	NSMutableArray* _charInfoArray;
	NSValue* _refCon;
	unsigned long long _remainingWords;

}
-(id)stringAtIndex:(unsigned long long)arg1 ;
-(id)initWithPhrase:(InkPhrase*)arg1 andPhraseWord:(InkPhraseWord*)arg2 andIsFirstWordOfAGroup:(char)arg3 ;
-(void)setRemainingWords:(unsigned long long)arg1 ;
-(long long)leadingSpacesCountAtIndex:(unsigned long long)arg1 ;
-(id)initWithInkTextRef:(OpaqueInkTextRefRef)arg1 ;
-(id)initWithInkTextPtr:(InkText*)arg1 ;
-(OpaqueInkTextRefRef)createInkTextRef;
-(unsigned long long)remainingWords;
-(void)dealloc;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

