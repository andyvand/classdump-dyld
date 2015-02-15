/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 7:58:07 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Users/joris/Desktop/SysDecrypts/64-Bit/Dock
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzCore/CALayer.h>

@class CALayer;

@interface ECPagerIndicatorLayer : CALayer {

	unsigned long long _index;
	int _state;
	CALayer* _layer;
	id _onColor;
	id _offColor;
	id _onImage;
	id _offImage;

}

@property (assign,nonatomic) unsigned long long index;              //@synthesize index=_index - In the implementation block
@property (assign,nonatomic) int state;                             //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) id onImage;                            //@synthesize onImage=_onImage - In the implementation block
@property (nonatomic,retain) id offImage;                           //@synthesize offImage=_offImage - In the implementation block
-(void)setOnImage:(id)arg1 ;
-(void)setOffImage:(id)arg1 ;
-(id)onImage;
-(id)offImage;
-(void)setIndex:(unsigned long long)arg1 ;
-(id)init;
-(void)setState:(int)arg1 ;
-(unsigned long long)index;
-(int)state;
-(void)layout;
@end
