/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:33:33 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKImage.h>

@interface VKShieldImage : VKImage {

	CGPoint _center;

}

@property (readonly) CGPoint center;              //@synthesize center=_center - In the implementation block
-(CGPoint)center;
-(id).cxx_construct;
-(id)initWithCGImage:(CGImageRef)arg1 scale:(float)arg2 usedAsTextureAndImage:(BOOL)arg3 centerPoint:(CGPoint)arg4 ;
@end
