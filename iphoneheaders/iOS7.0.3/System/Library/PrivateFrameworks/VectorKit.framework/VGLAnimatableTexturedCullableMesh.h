/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:33:41 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VGLSingleTexturedCullableMesh.h>

@class VKPolygonDrawStyle, VGLTexture;

@interface VGLAnimatableTexturedCullableMesh : VGLSingleTexturedCullableMesh {

	VKPolygonDrawStyle* _style;
	VGLTexture* _textureVariant;

}

@property (nonatomic,retain) VKPolygonDrawStyle * style;               //@synthesize style=_style - In the implementation block
@property (nonatomic,retain) VGLTexture * textureVariant;              //@synthesize textureVariant=_textureVariant - In the implementation block
-(void)dealloc;
-(void)setStyle:(id)arg1 ;
-(id)style;
-(void)drawTrianglesWithContext:(id)arg1 ;
-(id)textureVariant;
-(void)drawInRects:(const VGLColor*)arg1 numRects:(unsigned)arg2 context:(id)arg3 ;
-(void)updateTexturesForTileKey:(VKTileKey)arg1 contentScale:(float)arg2 ;
-(id)_textureForTileKey:(VKTileKey)arg1 contentScale:(float)arg2 useVariant:(BOOL)arg3 ;
-(void)setTextureVariant:(id)arg1 ;
-(void)_setupTexturesInContext:(id)arg1 ;
@end
