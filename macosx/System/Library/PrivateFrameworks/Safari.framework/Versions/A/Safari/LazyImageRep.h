/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:22 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <AppKit/NSImageRep.h>

@interface LazyImageRep : NSImageRep {

	/*^block*/id _imageCreationBlock;
	CGImageRef _image;

}
-(id)initWithCGImageCreationBlock:(/*^block*/id)arg1 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGImageRef)CGImage;
-(char)draw;
-(CGImageRef)CGImageForProposedRect:(CGRect*)arg1 context:(id)arg2 hints:(id)arg3 ;
@end

