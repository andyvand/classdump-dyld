/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:38 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QTKit.framework/Versions/A/QTKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QTKit/QTKit-Structs.h>
#import <QTKit/QTOpenGLTextureTile.h>

@class QTOpenGLTextureCache, CIImage, NSDictionary;

@interface QTOpenGLTextureCacheTextureTile : QTOpenGLTextureTile {

	QTOpenGLTextureCache* _textureCache;
	CVBufferRef _imageBuffer;
	CVBufferRef _texture;
	CIImage* _filterImage;
	NSDictionary* _filterImageOptions;
	int _lockCount;
	int _mutex;

}
-(CGPoint)textureCoordinateForContentPoint:(CGPoint)arg1 ;
-(CGPoint)contentPointForTextureCoordinate:(CGPoint)arg1 ;
-(id)initWithOpenGLTextureCache:(id)arg1 imageBuffer:(CVBufferRef)arg2 ;
-(CGColorSpaceRef)_colorSpace;
-(id)_filterImageWithOptions:(id)arg1 ;
-(void)finalize;
-(void)dealloc;
-(unsigned)name;
-(void)lock;
-(void)unlock;
-(unsigned)target;
-(CGRect)rect;
@end

