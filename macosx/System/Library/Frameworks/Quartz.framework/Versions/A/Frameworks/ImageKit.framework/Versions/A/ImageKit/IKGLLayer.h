/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:49 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ImageKit/ImageKit-Structs.h>
#import <AppKit/NSOpenGLLayer.h>

@class NSView;

@interface IKGLLayer : NSOpenGLLayer {

	NSView* _ikview;

}
-(id)ikView;
-(void)setIKView:(id)arg1 ;
-(CGLPixelFormatObjectRef)copyCGLPixelFormatForDisplayMask:(unsigned)arg1 ;
@end
