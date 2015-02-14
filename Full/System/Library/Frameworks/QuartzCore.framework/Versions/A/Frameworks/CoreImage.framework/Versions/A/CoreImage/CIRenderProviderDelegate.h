/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:55 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/Versions/A/Frameworks/CoreImage.framework/Versions/A/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CoreImage/CoreImage-Structs.h>
@interface CIRenderProviderDelegate : NSObject {

	id _renderDelegate;
	id _userData;
	CGSize _renderSize;
	CVBufferRef _renderPbuffer;
	CGLContextObjectRef _renderContext;

}
-(CVBufferRef)_getRenderedBufferWithContext:(CGLContextObjectRef)arg1 ;
-(id)initWithRenderer:(id)arg1 renderSize:(CGSize)arg2 renderContext:(CGLContextObjectRef)arg3 userData:(id)arg4 ;
-(void)finalize;
-(void)dealloc;
-(void)provideImageData:(void*)arg1 bytesPerRow:(unsigned long long)arg2 origin:(unsigned long long)arg3 :(unsigned long long)arg4 size:(unsigned long long)arg5 :(unsigned long long)arg6 userInfo:(id)arg7 ;
-(unsigned long long)provideImageTexture:(const CIImageProviderTextureInfoStruct*)arg1 bounds:(CGRect*)arg2 userInfo:(id)arg3 ;
-(void)deleteImageTexture:(const CIImageProviderTextureInfoStruct*)arg1 name:(unsigned long long)arg2 userInfo:(id)arg3 ;
@end

