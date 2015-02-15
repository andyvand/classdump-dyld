/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:31 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol NSTextInput
@required
-(void)doCommandBySelector:(SEL)arg1;
-(char)hasMarkedText;
-(NSRange*)selectedRange;
-(void)insertText:(id)arg1;
-(id)attributedSubstringFromRange:(NSRange)arg1;
-(unsigned long long)characterIndexForPoint:(CGPoint)arg1;
-(void)unmarkText;
-(id)validAttributesForMarkedText;
-(CGRect*)firstRectForCharacterRange:(NSRange)arg1;
-(NSRange*)markedRange;
-(long long)conversationIdentifier;
-(void)setMarkedText:(id)arg1 selectedRange:(NSRange)arg2;

@end

