/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:00 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ImageKit/ImageKit-Structs.h>
#import <AppKit/NSOpenGLView.h>

@class NSPopUpButton, NSTextField, IKTexturePacker, NSTimer;

@interface IKTexturePackerView : NSOpenGLView {

	NSPopUpButton* _packerIndex;
	NSTextField* _koUsed;
	NSTextField* _koFree;
	IKTexturePacker* _packer;
	NSTimer* _autoupdate;

}
-(void)autoUpdate;
-(void)beginOrtho;
-(id)packer;
-(void)setPacker:(id)arg1 ;
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
@end

