/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:31:57 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <CoreFoundation/NSSecureCoding.h>

@protocol OS_dispatch_queue;
@class NSObject, NSData;

@interface PKImage : NSObject <NSSecureCoding> {

	NSObject<OS_dispatch_queue>* _queue;
	BOOL _shouldTile;
	BOOL _shouldStretch;
	PKEdgeInsets _capInsets;
	NSData* _imageData;
	CGImageRef _imageRef;
	float _scale;
	int _orientation;

}

@property (nonatomic,readonly) NSData * imageData;                  //@synthesize imageData=_imageData - In the implementation block
@property (nonatomic,readonly) CGImageRef imageRef;                 //@synthesize imageRef=_imageRef - In the implementation block
@property (nonatomic,readonly) CGSize size; 
@property (nonatomic,readonly) int orientation;                     //@synthesize orientation=_orientation - In the implementation block
@property (nonatomic,readonly) float scale;                         //@synthesize scale=_scale - In the implementation block
@property (nonatomic,readonly) BOOL tiles; 
@property (nonatomic,readonly) BOOL stretches; 
@property (nonatomic,readonly) PKEdgeInsets capInsets; 
+(BOOL)supportsSecureCoding;
+(id)imageNamed:(id)arg1 inBundle:(id)arg2 ;
+(id)URLForImageNamed:(id)arg1 inBundle:(id)arg2 scale:(float*)arg3 ;
+(id)hashOfImageNamed:(id)arg1 inBundle:(id)arg2 ;
+(id)passesImageNamed:(id)arg1 ;
-(void)dealloc;
-(CGSize)size;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(int)orientation;
-(float)scale;
-(PKEdgeInsets)capInsets;
-(id)initWithCGImage:(CGImageRef)arg1 scale:(float)arg2 orientation:(int)arg3 ;
-(BOOL)_isTiledWhenStretchedToSize:(CGSize)arg1 ;
-(id)initWithData:(id)arg1 scale:(float)arg2 ;
-(CGImageRef)imageRef;
-(id)imageData;
-(void)_queue_createImageRefIfNecessary;
-(id)resizableImageByTilingWithCapInsets:(PKEdgeInsets)arg1 ;
-(void)drawInRect:(CGRect)arg1 inContext:(CGContextRef)arg2 withBlendMode:(int)arg3 alpha:(float)arg4 ;
-(void)preheatBitmapData;
-(BOOL)tiles;
-(BOOL)stretches;
-(id)blurredImageWithRadius:(unsigned)arg1 constraints:(id)arg2 ;
-(id)resizedImageWithConstraints:(id)arg1 ;
-(id)resizableImageByStretchingWithCapInsets:(PKEdgeInsets)arg1 ;
-(id)resizableImageByTilingCenterPixel;
-(void)drawInRect:(CGRect)arg1 inContext:(CGContextRef)arg2 ;
-(id)notificationIconData;
@end
