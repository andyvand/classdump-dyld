/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:32:41 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/MediaUI.framework/Versions/A/MediaUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaUI/MediaUI-Structs.h>
#import <AppKit/NSImageRep.h>

@interface MediaUIImageRep : NSImageRep {

	CGImageRef _image;
	long long _onceToken;
	/*^block*/id _imageFaultBlock;

}

@property (readonly) CGImageRef image; 
+(id)imageRepWithImageFaultBlock:(/*^block*/id)arg1 ;
-(id)initWithImageFaultBlock:(/*^block*/id)arg1 ;
-(char)drawInPoint:(CGPoint)arg1 ;
-(void)dealloc;
-(CGImageRef)image;
-(char)draw;
-(CGImageRef)CGImageForProposedRect:(CGRect*)arg1 context:(id)arg2 hints:(id)arg3 ;
-(char)drawInRect:(CGRect)arg1 ;
@end
