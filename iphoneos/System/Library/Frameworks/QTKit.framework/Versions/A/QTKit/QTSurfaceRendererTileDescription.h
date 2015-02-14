/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:38 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QTKit.framework/Versions/A/QTKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QTKit/QTKit-Structs.h>
#import <QTKit/NSCopying.h>

@class QTGraphicsDevice;

@interface QTSurfaceRendererTileDescription : NSObject <NSCopying> {

	CGRect _surfaceRect;
	CGColorSpaceRef _colorSpace;
	QTGraphicsDevice* _graphicsDevice;

}
-(id)graphicsDevice;
-(id)initWithSurfaceRect:(CGRect)arg1 colorSpace:(CGColorSpaceRef)arg2 graphicsDevice:(id)arg3 ;
-(CGRect)surfaceRect;
-(void)finalize;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGColorSpaceRef)colorSpace;
@end

