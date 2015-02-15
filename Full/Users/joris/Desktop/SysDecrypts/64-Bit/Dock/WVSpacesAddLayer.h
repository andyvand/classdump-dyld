/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 7:58:07 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Users/joris/Desktop/SysDecrypts/64-Bit/Dock
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Dock/Dock-Structs.h>
#import <QuartzCore/CALayer.h>

@class CALayer;

@interface WVSpacesAddLayer : CALayer {

	CGRect _displayBounds;
	unsigned _displayID;
	CALayer* _spaceLayer;
	CALayer* _desktopLayer;
	CALayer* _plusLayer;
	CALayer* _highlightLayer;
	CALayer* _shadowLayer;
	double _scale;
	char _highlighted;

}

@property (assign,nonatomic) char highlighted;                    //@synthesize highlighted=_highlighted - In the implementation block
@property (assign,nonatomic) double scale;                        //@synthesize scale=_scale - In the implementation block
@property (nonatomic,readonly) CALayer * spaceLayer;              //@synthesize spaceLayer=_spaceLayer - In the implementation block
@property (nonatomic,readonly) CALayer * plusLayer;               //@synthesize plusLayer=_plusLayer - In the implementation block
-(void)updateBackgroundImageCrossfade:(char)arg1 ;
-(CALayer *)spaceLayer;
-(id)initWithDisplay:(id)arg1 andAccessorySuperlayer:(id)arg2 ;
-(void)layoutPlus;
-(CALayer *)plusLayer;
-(double)scale;
-(char)highlighted;
-(void)dealloc;
-(void)layout;
-(void)setHighlighted:(char)arg1 ;
-(void)setScale:(double)arg1 ;
@end
