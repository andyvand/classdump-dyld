/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:42 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/Versions/A/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CAContext.h>

@interface CAContextImpl : CAContext {

	Context* _impl;

}
-(id)initWithOptions:(id)arg1 localContext:(BOOL)arg2 ;
-(id)initRemoteWithOptions:(id)arg1 ;
-(id)initWithCGSConnection:(unsigned)arg1 options:(id)arg2 ;
-(void)setFencePort:(unsigned)arg1 ;
-(void)setFence:(unsigned)arg1 count:(unsigned)arg2 ;
-(void)setDisplayMask:(unsigned)arg1 ;
-(void)setRestrictedHostProcessId:(int)arg1 ;
-(void)finalize;
-(void)dealloc;
-(void)deleteSlot:(unsigned)arg1 ;
-(id)layer;
-(unsigned)createSlot;
-(void)setObject:(id)arg1 forSlot:(unsigned)arg2 ;
-(char)valid;
-(void)invalidate;
-(void)setLayer:(id)arg1 ;
-(void)setColorSpace:(CGColorSpaceRef)arg1 ;
-(unsigned)displayNumber;
-(unsigned)contextId;
-(id)options;
-(CGColorSpaceRef)colorSpace;
-(int)restrictedHostProcessId;
-(unsigned)eventMask;
-(void)setEventMask:(unsigned)arg1 ;
-(unsigned)displayMask;
-(void)setDisplayNumber:(unsigned)arg1 ;
-(ContextRef)renderContext;
-(unsigned)createFencePort;
-(void)setFencePort:(unsigned)arg1 commitHandler:(/*^block*/id)arg2 ;
@end

