/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:08 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QTKit.framework/Versions/A/QTKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <QTKit/QTKit-Structs.h>
@class NSDictionary, QTPixelBufferConverter;

@interface QTImageBufferConformer : NSObject {

	NSDictionary* _imageBufferAttributes;
	QTPixelBufferConverter* _converter;

}
-(void)setImageBufferAttributes:(id)arg1 ;
-(id)initWithImageBufferAttributes:(id)arg1 ;
-(id)imageBufferAttributes;
-(char)isConformantImageBuffer:(CVBufferRef)arg1 ;
-(CVBufferRef)copyConformedImageBufferForImageBuffer:(CVBufferRef)arg1 error:(id*)arg2 ;
-(void)dealloc;
@end

