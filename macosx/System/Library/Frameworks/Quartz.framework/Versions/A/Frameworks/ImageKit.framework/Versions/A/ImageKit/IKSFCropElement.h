/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:48 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ImageKit/ImageKit-Structs.h>
#import <ImageKit/IKSFElement.h>

@class CIImage;

@interface IKSFCropElement : IKSFElement {

	id _delegate;
	unsigned _glTexture;
	char _live;
	CIImage* _image;

}
+(id)cropElement;
-(id)initFromDictionary:(id)arg1 ;
-(void)setScaling:(float)arg1 ;
-(void)startLiveSession;
-(void)stopLiveSession;
-(void)IKDVGrabberUpdated:(id)arg1 ;
-(char)useGPU;
-(void)setOrigin:(CGPoint)arg1 rotation:(float)arg2 scale:(float)arg3 ;
-(id)init;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)delegate;
-(id)dictionaryRepresentation;
-(CGPoint)origin;
-(void)setOrigin:(CGPoint)arg1 ;
-(float)rotation;
-(void)setRotation:(float)arg1 ;
-(float)scaling;
@end

