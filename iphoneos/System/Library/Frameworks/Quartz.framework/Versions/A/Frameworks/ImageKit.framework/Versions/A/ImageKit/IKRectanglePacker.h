/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:23 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <ImageKit/ImageKit-Structs.h>
@interface IKRectanglePacker : NSObject {

	void* _packerTree;
	CGPoint _padding;

}
-(void)setPadding:(CGSize)arg1 ;
-(float)fragmentation;
-(char)allocateRectWithSize:(CGSize)arg1 rectOut:(CGRect*)arg2 ;
-(char)rectIsUsed:(CGRect)arg1 ;
-(char)releaseRect:(CGRect)arg1 ;
-(unsigned)usedArea;
-(void)drawRegionsInCurrentGLContext;
-(void)finalize;
-(void)dealloc;
-(CGSize)size;
-(id)initWithSize:(CGSize)arg1 ;
-(char)isEmpty;
@end

