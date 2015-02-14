/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:51 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QTKit.framework/Versions/A/QTKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzCore/CALayer.h>
#import <QTKit/QTImageConsumerVendor.h>

@class QTCALayerRenderer;

@interface QTCALayerRendererViewBackingLayer : CALayer <QTImageConsumerVendor> {

	QTCALayerRenderer* _consumer;

}
-(id)imageConsumer;
-(void)_display;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)actionForKey:(id)arg1 ;
-(void)layerDidBecomeVisible:(char)arg1 ;
-(void)layerDidChangeDisplay:(unsigned)arg1 ;
-(id)delegate;
-(void)_appkitViewBackingLayerUniqueMethod;
@end

