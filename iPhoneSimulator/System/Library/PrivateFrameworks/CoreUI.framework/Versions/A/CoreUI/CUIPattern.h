/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:33 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/Versions/A/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CoreUI/CoreUI-Structs.h>
@interface CUIPattern : NSObject {

	CGImageRef _patternImage;
	CGPatternRef _pattern;
	double _alpha;

}

@property (assign,nonatomic) double alpha;              //@synthesize alpha=_alpha - In the implementation block
-(CGPatternRef)_newPattern;
-(id)initWithImageRef:(CGImageRef)arg1 ;
-(void)setPatternInContext:(CGContextRef)arg1 ;
-(CGImageRef)patternImageRef;
-(void)dealloc;
-(id)description;
-(void)setAlpha:(double)arg1 ;
-(double)alpha;
-(CGPatternRef)pattern;
@end

