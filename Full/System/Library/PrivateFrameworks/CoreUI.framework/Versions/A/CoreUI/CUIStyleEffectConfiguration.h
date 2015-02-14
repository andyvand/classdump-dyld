/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:54 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/Versions/A/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/NSCopying.h>

@interface CUIStyleEffectConfiguration : NSObject <NSCopying> {

	long long _state;
	long long _presentationState;
	long long _value;
	char _useSimplifiedEffect;
	char _foregroundColorShouldTintEffects;

}

@property (assign,nonatomic) long long state;                                    //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) long long presentationState;                        //@synthesize presentationState=_presentationState - In the implementation block
@property (assign,nonatomic) long long value;                                    //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) char useSimplifiedEffect;                           //@synthesize useSimplifiedEffect=_useSimplifiedEffect - In the implementation block
@property (assign,nonatomic) char foregroundColorShouldTintEffects;              //@synthesize foregroundColorShouldTintEffects=_foregroundColorShouldTintEffects - In the implementation block
-(long long)presentationState;
-(char)useSimplifiedEffect;
-(char)shouldIgnoreForegroundColor;
-(char)shouldRespectOutputBlending;
-(char)foregroundColorShouldTintEffects;
-(void)setForegroundColorShouldTintEffects:(char)arg1 ;
-(id)init;
-(id)description;
-(void)setState:(long long)arg1 ;
-(long long)state;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setUseSimplifiedEffect:(char)arg1 ;
-(void)setPresentationState:(long long)arg1 ;
-(void)setValue:(long long)arg1 ;
-(long long)value;
@end

