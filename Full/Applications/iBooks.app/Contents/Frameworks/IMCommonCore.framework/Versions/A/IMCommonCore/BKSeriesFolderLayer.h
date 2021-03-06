/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:11:07 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/Frameworks/IMCommonCore.framework/Versions/A/IMCommonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IMCommonCore/IMCommonCore-Structs.h>
#import <QuartzCore/CALayer.h>

@class CALayer;

@interface BKSeriesFolderLayer : CALayer {

	BKSeriesFolderLayoutInfo _layoutInfo;
	char _shouldFadeInMasks;
	CALayer* _backgroundLayer;
	long long _type;
	unsigned long long _numCoverImages;
	CGPathRef _selectionMaskPath;
	CALayer* _container;
	CGRect _selectionRect;
	CGRect _frontCoverRect;

}

@property (assign,nonatomic,__weak) CALayer * backgroundLayer;                 //@synthesize backgroundLayer=_backgroundLayer - In the implementation block
@property (nonatomic,readonly) long long type;                                 //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) unsigned long long numCoverImages;              //@synthesize numCoverImages=_numCoverImages - In the implementation block
@property (nonatomic,readonly) CGRect selectionRect;                           //@synthesize selectionRect=_selectionRect - In the implementation block
@property (nonatomic,readonly) CGPathRef selectionMaskPath;                    //@synthesize selectionMaskPath=_selectionMaskPath - In the implementation block
@property (nonatomic,readonly) CGRect frontCoverRect;                          //@synthesize frontCoverRect=_frontCoverRect - In the implementation block
@property (assign,nonatomic) char shouldFadeInMasks;                           //@synthesize shouldFadeInMasks=_shouldFadeInMasks - In the implementation block
@property (assign,nonatomic,__weak) CALayer * container;                       //@synthesize container=_container - In the implementation block
-(void)_setupMaskLayersAndOpacity;
-(void)_populateLayoutInfo:(BKSeriesFolderLayoutInfo*)arg1 ;
-(CGRect)folderRect;
-(id)layoutRects;
-(id)_addRects:(id)arg1 toMaskLayer:(id)arg2 maskIn:(char)arg3 ;
-(char)shouldFadeInMasks;
-(void)setShouldFadeInMasks:(char)arg1 ;
-(CGRect)_rectForImageAtPosition:(unsigned long long)arg1 frontRect:(CGRect)arg2 ;
-(id)layoutRectsWithCount:(unsigned long long)arg1 ;
-(unsigned long long)numCoverImages;
-(CGPathRef)selectionMaskPath;
-(CGRect)frontCoverRect;
-(void)setImages:(CFArrayRef)arg1 ;
-(CGRect)selectionRect;
-(CALayer *)backgroundLayer;
-(void)setBackgroundLayer:(CALayer *)arg1 ;
-(id)init;
-(void)layoutSublayers;
-(void)setFrame:(CGRect)arg1 ;
-(long long)type;
-(id)initWithType:(long long)arg1 ;
-(CALayer *)container;
-(void)setContainer:(CALayer *)arg1 ;
@end

