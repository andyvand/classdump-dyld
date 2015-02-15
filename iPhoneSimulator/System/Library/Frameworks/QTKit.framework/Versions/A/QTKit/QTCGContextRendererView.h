/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:49 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QTKit.framework/Versions/A/QTKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QTKit/QTKit-Structs.h>
#import <AppKit/NSView.h>
#import <QTKit/QTImageConsumerVendor.h>

@protocol QTImageConsumer;
@interface QTCGContextRendererView : NSView <QTImageConsumerVendor> {

	id<QTImageConsumer> _imageConsumer;

}
-(id)imageConsumer;
-(void)rendererNewImageDidBecomeAvailable:(id)arg1 ;
-(void)scheduleRendererOnCurrentRunLoop:(id)arg1 ;
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
@end

