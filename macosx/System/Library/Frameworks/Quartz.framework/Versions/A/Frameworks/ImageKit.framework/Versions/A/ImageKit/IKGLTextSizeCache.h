/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:49 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <ImageKit/ImageKit-Structs.h>
@class IKGLTextCacheFragHandler;

@interface IKGLTextSizeCache : NSObject {

	IKGLTextCacheFragHandler* _cacheFragHandler;
	CGSize _size;
	unsigned _textureID;
	int _rectCount;
	double _scaleFactor;

}
-(id)cacheFragHandler;
-(void)createTexture;
-(id)initWithTextureSize:(CGSize)arg1 textHeight:(int)arg2 scaleFactor:(double)arg3 ;
-(char)canStoreTextWithSize:(CGSize)arg1 ;
-(void)storeText:(id)arg1 ;
-(void)removeText:(id)arg1 ;
-(void)finalize;
-(void)dealloc;
-(char)isEmpty;
-(void)cleanup;
@end

