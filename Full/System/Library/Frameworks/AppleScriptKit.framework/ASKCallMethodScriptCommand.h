/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:32:29 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppleScriptKit.framework/AppleScriptKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppleScriptKit/AppleScriptKit-Structs.h>
#import <AppleScriptKit/ASKScriptCommand.h>

@interface ASKCallMethodScriptCommand : ASKScriptCommand
-(id)arrayFromSize:(CGSize)arg1 ;
-(CGSize)sizeFromArray:(id)arg1 ;
-(id)arrayFromRect:(CGRect)arg1 ;
-(CGRect)rectFromArray:(id)arg1 ;
-(char)isValueType:(id)arg1 equalTo:(id)arg2 ;
-(double)floatFromValue:(id)arg1 ;
-(void)evaluateSpecifiersInArray:(id)arg1 ;
-(char)setArgumentOfInvocation:(id)arg1 atIndex:(unsigned long long)arg2 withParameter:(id)arg3 ofType:(char)arg4 ;
-(char)isRectType:(id)arg1 ;
-(char)isPointType:(id)arg1 ;
-(CGPoint)pointFromArray:(id)arg1 ;
-(char)isSizeType:(id)arg1 ;
-(char)isRangeType:(id)arg1 ;
-(NSRange)rangeFromArray:(id)arg1 ;
-(id)getResultOfInvocation:(id)arg1 withType:(char)arg2 ;
-(id)arrayFromPoint:(CGPoint)arg1 ;
-(id)arrayFromRange:(NSRange)arg1 ;
-(id)performDefaultImplementation;
@end

