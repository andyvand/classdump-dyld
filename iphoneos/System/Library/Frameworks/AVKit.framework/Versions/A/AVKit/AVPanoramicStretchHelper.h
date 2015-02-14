/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:41 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AVKit.framework/Versions/A/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class CALayer;

@interface AVPanoramicStretchHelper : NSObject {

	CALayer* _layer;

}
+(id)meshTransformForLayer:(id)arg1 ;
+(id)meshTransformForSourceAspectRatio:(double)arg1 destinationAspectRatio:(double)arg2 ;
+(id)meshTransformForLayerIfEffective:(id)arg1 ;
+(void)updatePanoramicStretchForLayer:(id)arg1 ;
+(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)dealloc;
-(id)initWithLayer:(id)arg1 ;
@end

