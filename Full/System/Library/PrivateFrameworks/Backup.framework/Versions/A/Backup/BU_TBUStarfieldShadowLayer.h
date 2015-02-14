/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:32 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Backup.framework/Versions/A/Backup
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Backup/Backup-Structs.h>
#import <QuartzCore/CALayer.h>

@interface BU_TBUStarfieldShadowLayer : CALayer {

	TRef<CGImage *, TRetainReleasePolicy<CGImageRef> >* _shadowImage;
	CGRect _shadowImageBounds;
	CGRect _windowContentBounds;
	vector<TNSRef<CALayer *>, std::__1::allocator<TNSRef<CALayer *> > >* _layers;

}

@property (assign,nonatomic) CGImageRef shadowImage; 
@property (assign,nonatomic) CGRect windowContentBounds;              //@synthesize windowContentBounds=_windowContentBounds - In the implementation block
@property (assign,nonatomic) CGRect shadowImageBounds;                //@synthesize shadowImageBounds=_shadowImageBounds - In the implementation block
-(void)setBounds:(CGRect)arg1 ;
-(void)setShadowImageBounds:(CGRect)arg1 ;
-(void)setWindowContentBounds:(CGRect)arg1 ;
-(void)setShadowImage:(CGImageRef)arg1 ;
-(int)verticalPosition:(int)arg1 ;
-(int)horizontalPosition:(int)arg1 ;
-(CGRect)frameForPart:(int)arg1 ;
-(void)updateLayers;
-(CGImageRef)shadowImage;
-(void)setShadowimageBounds:(CGRect)arg1 ;
-(CGRect)windowContentBounds;
-(CGRect)shadowImageBounds;
@end

