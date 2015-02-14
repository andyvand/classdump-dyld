/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:47 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Carbon.framework/Versions/A/Frameworks/Ink.framework/Versions/A/Ink
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Ink/Ink-Structs.h>
@class NSMutableArray;

@interface InkRecognizerWordGroup : NSObject {

	NSMutableArray* _phraseWordArray;

}
-(id)initWithInkPhraseWordGroup:(InkPhraseWordGroup*)arg1 ;
-(InkPhraseWordGroup*)createInkPhraseWordGroupWithParent:(InkPhrase*)arg1 ;
-(unsigned long long)phraseWordGroupCount;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

