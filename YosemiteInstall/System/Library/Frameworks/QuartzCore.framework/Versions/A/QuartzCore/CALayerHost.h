/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:57:36 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/Versions/A/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CALayer.h>

@interface CALayerHost : CALayer

@property (assign) unsigned contextId; 
+(char)CA_automaticallyNotifiesObservers:(Class)arg1 ;
+(char)_hasRenderLayerSubclass;
+(char)_shouldFinalizeOnMainThread;
-(BOOL)_renderLayerDefinesProperty:(unsigned)arg1 ;
-(Layer*)_copyRenderLayer:(Transaction*)arg1 layerFlags:(unsigned)arg2 commitFlags:(unsigned*)arg3 ;
-(void)setContextId:(unsigned)arg1 ;
-(void)layerDidBecomeVisible:(char)arg1 ;
-(unsigned)contextId;
-(void)didChangeValueForKey:(id)arg1 ;
@end

