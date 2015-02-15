/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 7:58:05 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Users/joris/Desktop/SysDecrypts/64-Bit/Dock
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Dock/Dock-Structs.h>
#import <QuartzCore/CALayer.h>

@class CALayer, WVWindowLabelLayer, WAWindow, WALayerKitWindow;

@interface WVExposeCellLayer : CALayer {

	CALayer* _mockWindowLayer;
	WVWindowLabelLayer* _labelLayer;
	WAWindow* _window;
	WALayerKitWindow* _rootWindow;
	float _scaleFactor;
	unsigned _labelHidden : 1;
	unsigned _labelMaximized : 1;

}

@property (nonatomic,retain) WAWindow * window;                              //@synthesize window=_window - In the implementation block
@property (nonatomic,readonly) WALayerKitWindow * rootWindow;                //@synthesize rootWindow=_rootWindow - In the implementation block
@property (nonatomic,readonly) CALayer * mockWindowLayer;                    //@synthesize mockWindowLayer=_mockWindowLayer - In the implementation block
@property (nonatomic,readonly) WVWindowLabelLayer * labelLayer;              //@synthesize labelLayer=_labelLayer - In the implementation block
@property (assign,nonatomic) char labelHidden;                               //@synthesize labelHidden=_labelHidden - In the implementation block
@property (assign,nonatomic) char labelMaximized;                            //@synthesize labelMaximized=_labelMaximized - In the implementation block
+(CGSize)bestCellSize:(CGSize)arg1 withCellSize:(CGSize)arg2 ;
-(void)setLabelHidden:(char)arg1 ;
-(id)initWithRootWindow:(id)arg1 andScaleFactor:(float)arg2 ;
-(void)setLabelMaximized:(char)arg1 ;
-(void)setWindow:(id)arg1 withMockWindowFrame:(CGRect)arg2 andSpacing:(unsigned)arg3 ;
-(void)setHilited:(char)arg1 ;
-(CGRect)frameForHilite;
-(CALayer *)mockWindowLayer;
-(WALayerKitWindow *)rootWindow;
-(char)labelHidden;
-(char)labelMaximized;
-(WVWindowLabelLayer *)labelLayer;
-(void)setBounds:(CGRect)arg1 ;
-(WAWindow *)window;
-(void)layout;
-(void)setWindow:(WAWindow *)arg1 ;
@end
