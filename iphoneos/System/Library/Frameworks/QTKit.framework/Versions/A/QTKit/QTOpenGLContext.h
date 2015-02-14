/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:38 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QTKit.framework/Versions/A/QTKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <QTKit/QTKit-Structs.h>
@class QTGraphicsDevice;

@interface QTOpenGLContext : NSObject {

	QTGraphicsDevice* _device;
	CGLContextObject* _context;
	CGLPixelFormatObjectRef _pixelFormat;

}
+(id)openGLContextWithGraphicsDevice:(id)arg1 options:(id)arg2 ;
-(id)initWithGraphicsDevice:(id)arg1 options:(id)arg2 ;
-(id)graphicsDevice;
-(SCD_Struct_QT50)openGLCapabilities;
-(char)syncsToVBL;
-(void)setSyncsToVBL:(char)arg1 ;
-(id)openGLTextureWithImageBuffer:(CVBufferRef)arg1 ;
-(id)init;
-(void)finalize;
-(void)dealloc;
-(CGLPixelFormatObjectRef)CGLPixelFormatObj;
-(CGLContextObject*)CGLContextObj;
@end

