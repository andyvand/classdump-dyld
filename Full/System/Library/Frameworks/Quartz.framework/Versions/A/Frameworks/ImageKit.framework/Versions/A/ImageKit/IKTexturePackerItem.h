/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:38 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <ImageKit/ImageKit-Structs.h>
@class NSData, IKRectanglePacker, NSOpenGLContext;

@interface IKTexturePackerItem : NSObject {

	unsigned _textureID;
	NSData* _textureBytes;
	IKRectanglePacker* _rectanglePacker;
	NSOpenGLContext* _context;

}
-(float)fragmentation;
-(unsigned)textureID;
-(void)setTextureID:(unsigned)arg1 ;
-(id)textureBytes;
-(void)setTextureBytes:(id)arg1 ;
-(id)rectanglePacker;
-(id)init;
-(void)dealloc;
-(id)initWithSize:(CGSize)arg1 ;
@end

