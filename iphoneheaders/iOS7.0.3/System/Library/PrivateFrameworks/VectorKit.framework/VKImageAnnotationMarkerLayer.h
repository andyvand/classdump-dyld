/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:33:36 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKAnnotationMarkerLayer.h>

@class VKImage, VGLRenderState;

@interface VKImageAnnotationMarkerLayer : VKAnnotationMarkerLayer {

	VKImage* _image;
	BOOL _drawsOnGround;
	double _rotationRadians;
	BOOL _shouldDraw;
	BOOL _hasCustomShaderMatrix;
	SCD_Union_VG35 _shaderMatrix;
	BOOL _hasCustomModelMatrix;
	SCD_Struct_VK42 _modelMatrix;
	float _scale;
	float _brightness;
	BOOL _isMask;
	VGLColor _color;
	VGLRenderState* _imageRenderState;
	float _opacity;

}

@property (assign,nonatomic) BOOL drawsOnGround;                  //@synthesize drawsOnGround=_drawsOnGround - In the implementation block
@property (assign,nonatomic) double rotationRadians;              //@synthesize rotationRadians=_rotationRadians - In the implementation block
@property (assign,nonatomic) float scale;                         //@synthesize scale=_scale - In the implementation block
@property (assign,nonatomic) float opacity;                       //@synthesize opacity=_opacity - In the implementation block
@property (assign,nonatomic) float brightness;                    //@synthesize brightness=_brightness - In the implementation block
@property (assign,nonatomic) BOOL isMask;                         //@synthesize isMask=_isMask - In the implementation block
@property (assign,nonatomic) VGLColor color;                      //@synthesize color=_color - In the implementation block
-(void)dealloc;
-(void)setImage:(id)arg1 ;
-(id)init;
-(float)scale;
-(float)opacity;
-(void)setOpacity:(float)arg1 ;
-(void)setScale:(float)arg1 ;
-(VGLColor)color;
-(void)setColor:(VGLColor)arg1 ;
-(id).cxx_construct;
-(void)setBrightness:(float)arg1 ;
-(float)brightness;
-(void)layoutWithContext:(id)arg1 ;
-(void)drawWithContext:(id)arg1 ;
-(void)setDrawsOnGround:(BOOL)arg1 ;
-(BOOL)drawsOnGround;
-(void)updateWithStyle:(id)arg1 ;
-(BOOL)shouldSnapToPixelsWithContext:(id)arg1 ;
-(id)_configuredProgramWithContext:(id)arg1 ;
-(double)rotationRadians;
-(void)setRotationRadians:(double)arg1 ;
-(BOOL)isMask;
-(void)setIsMask:(BOOL)arg1 ;
@end
