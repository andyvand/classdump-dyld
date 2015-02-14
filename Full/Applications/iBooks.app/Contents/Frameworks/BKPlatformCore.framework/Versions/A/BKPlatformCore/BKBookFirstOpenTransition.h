/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:21 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/Frameworks/BKPlatformCore.framework/Versions/A/BKPlatformCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BKPlatformCore/BKPlatformCore-Structs.h>
#import <IMPlatformCore/IMWindowLayeredTransition.h>

@class IMWindow, CABasicAnimation, CALayer, NSString;

@interface BKBookFirstOpenTransition : IMWindowLayeredTransition {

	char _windowClosing;
	char _animationIsReadyForSlideOpen;
	char _pluginIsReadyForSlideOpen;
	char _isWindowAnimationMode;
	double _animationDelay;
	IMWindow* _bookWindow;
	CABasicAnimation* _moveInAnimation;
	CALayer* _coverLayer;
	CALayer* _shadowLayer;
	CALayer* _outerCoverLayer;
	CABasicAnimation* _expandAnimation;
	CALayer* _bookLayer;
	CALayer* _outerBookLayer;
	CGImageRef _frontWindowImageRef;
	/*^block*/id _completionBlock;
	NSString* _assetID;
	CGSize _actualCoverSize;
	CGRect _bookCoverOnScreenRect;

}

@property (assign) double animationDelay;                                    //@synthesize animationDelay=_animationDelay - In the implementation block
@property (assign) CGSize actualCoverSize;                                   //@synthesize actualCoverSize=_actualCoverSize - In the implementation block
@property (__weak) IMWindow * bookWindow;                                    //@synthesize bookWindow=_bookWindow - In the implementation block
@property (assign) CGRect bookCoverOnScreenRect;                             //@synthesize bookCoverOnScreenRect=_bookCoverOnScreenRect - In the implementation block
@property (retain) CABasicAnimation * moveInAnimation;                       //@synthesize moveInAnimation=_moveInAnimation - In the implementation block
@property (retain) CALayer * coverLayer;                                     //@synthesize coverLayer=_coverLayer - In the implementation block
@property (retain) CALayer * shadowLayer;                                    //@synthesize shadowLayer=_shadowLayer - In the implementation block
@property (retain) CALayer * outerCoverLayer;                                //@synthesize outerCoverLayer=_outerCoverLayer - In the implementation block
@property (retain) CABasicAnimation * expandAnimation;                       //@synthesize expandAnimation=_expandAnimation - In the implementation block
@property (retain) CALayer * bookLayer;                                      //@synthesize bookLayer=_bookLayer - In the implementation block
@property (retain) CALayer * outerBookLayer;                                 //@synthesize outerBookLayer=_outerBookLayer - In the implementation block
@property (assign) CGImageRef frontWindowImageRef;                           //@synthesize frontWindowImageRef=_frontWindowImageRef - In the implementation block
@property (assign,nonatomic) char windowClosing;                             //@synthesize windowClosing=_windowClosing - In the implementation block
@property (assign,nonatomic) char animationIsReadyForSlideOpen;              //@synthesize animationIsReadyForSlideOpen=_animationIsReadyForSlideOpen - In the implementation block
@property (assign,nonatomic) char pluginIsReadyForSlideOpen;                 //@synthesize pluginIsReadyForSlideOpen=_pluginIsReadyForSlideOpen - In the implementation block
@property (nonatomic,copy) id completionBlock;                               //@synthesize completionBlock=_completionBlock - In the implementation block
@property (nonatomic,retain) NSString * assetID;                             //@synthesize assetID=_assetID - In the implementation block
@property (assign) char isWindowAnimationMode;                               //@synthesize isWindowAnimationMode=_isWindowAnimationMode - In the implementation block
-(void)setAssetID:(NSString *)arg1 ;
-(NSString *)assetID;
-(void)notifyAssetViewerOfMilestone:(int)arg1 ;
-(void)setFrontWindowImageRef:(CGImageRef)arg1 ;
-(void)setBookWindow:(IMWindow *)arg1 ;
-(void)setBookCoverOnScreenRect:(CGRect)arg1 ;
-(void)setIsWindowAnimationMode:(char)arg1 ;
-(void)setActualCoverSize:(CGSize)arg1 ;
-(void)_bookOpenStatusChanged:(id)arg1 ;
-(CGImageRef)frontWindowImageRef;
-(char)pluginIsReadyForSlideOpen;
-(void)setPluginIsReadyForSlideOpen:(char)arg1 ;
-(char)animationIsReadyForSlideOpen;
-(void)commitSlideOpen;
-(void)setCoverLayer:(CALayer *)arg1 ;
-(CALayer *)coverLayer;
-(CGRect)bookCoverOnScreenRect;
-(void)commitWithCompletion:(/*^block*/id)arg1 ;
-(char)isWindowAnimationMode;
-(void)setMoveInAnimation:(CABasicAnimation *)arg1 ;
-(CABasicAnimation *)moveInAnimation;
-(void)setAnimationIsReadyForSlideOpen:(char)arg1 ;
-(void)setOuterCoverLayer:(CALayer *)arg1 ;
-(CALayer *)outerCoverLayer;
-(void)setShadowLayer:(CALayer *)arg1 ;
-(CALayer *)shadowLayer;
-(void)setOuterBookLayer:(CALayer *)arg1 ;
-(CALayer *)outerBookLayer;
-(IMWindow *)bookWindow;
-(CALayer *)bookLayer;
-(void)setBookLayer:(CALayer *)arg1 ;
-(char)windowClosing;
-(void)prepSlideOpen;
-(void)setWindowClosing:(char)arg1 ;
-(CGSize)actualCoverSize;
-(CABasicAnimation *)expandAnimation;
-(void)setExpandAnimation:(CABasicAnimation *)arg1 ;
-(id)initWithBookWindow:(id)arg1 containerWindow:(id)arg2 coverImage:(id)arg3 coverOnScreenRect:(CGRect)arg4 assetID:(id)arg5 ;
-(void)dealloc;
-(void)windowWillClose:(id)arg1 ;
-(void)setCompletionBlock:(id)arg1 ;
-(double)animationDelay;
-(void)setAnimationDelay:(double)arg1 ;
-(id)completionBlock;
@end

