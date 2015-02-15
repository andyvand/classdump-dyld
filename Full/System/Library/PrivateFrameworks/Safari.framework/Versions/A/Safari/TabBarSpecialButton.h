/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:32 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <Safari/ButtonPlus.h>

@interface TabBarSpecialButton : ButtonPlus {

	char _drawsPartialLeftSeparator;
	char _drawsPartialRightSeparator;

}

@property (assign,nonatomic) char drawsPartialLeftSeparator;               //@synthesize drawsPartialLeftSeparator=_drawsPartialLeftSeparator - In the implementation block
@property (assign,nonatomic) char drawsPartialRightSeparator;              //@synthesize drawsPartialRightSeparator=_drawsPartialRightSeparator - In the implementation block
-(void)setDrawsPartialLeftSeparator:(char)arg1 ;
-(void)setDrawsPartialRightSeparator:(char)arg1 ;
-(char)drawsPartialLeftSeparator;
-(char)drawsPartialRightSeparator;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(char)isFlipped;
@end

