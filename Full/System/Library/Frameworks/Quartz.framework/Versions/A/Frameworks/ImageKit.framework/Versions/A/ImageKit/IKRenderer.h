/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:58 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol IKRenderer <NSObject>
@required
-(char)renderBezelGroupWithPoints:(CGPoint*)arg1 count:(int)arg2 radius:(float)arg3 strokeColor:(float*)arg4 fillColor:(float*)arg5 lineWidth:(int)arg6;
-(void)setupViewportWithView:(id)arg1;
-(void)setColorRed:(float)arg1 Green:(float)arg2 Blue:(float)arg3 Alpha:(float)arg4;
-(void)drawText:(id)arg1 inRect:(CGRect)arg2 withAttributes:(id)arg3 withAlpha:(float)arg4;
-(void)drawRect:(CGRect)arg1 withLineWidth:(float)arg2;
-(void)drawRoundedRect:(CGRect)arg1 radius:(float)arg2 lineWidth:(float)arg3 cacheIt:(char)arg4;
-(void)flushTextRenderer;
-(void)installClipRect:(CGRect)arg1;
-(void)uninstallClipRect;
-(void)drawImage:(id)arg1 inRect:(CGRect)arg2 fromRect:(CGRect)arg3 alpha:(float)arg4;
-(void)clearViewport:(CGRect)arg1;
-(char)beginDrawingInView:(id)arg1;
-(void)drawRectShadow:(CGRect)arg1 withAlpha:(float)arg2;
-(void)fillRoundedRect:(CGRect)arg1 radius:(float)arg2 cacheIt:(char)arg3;
-(int)rendererType;
-(void)drawLineFromPoint:(CGPoint)arg1 toPoint:(CGPoint)arg2;
-(char)drawRoundedRect:(CGRect)arg1 radius:(float)arg2 strokeColor:(float*)arg3 fillColor:(float*)arg4 lineWidth:(int)arg5;
-(void)fillGradientInRect:(CGRect)arg1 bottomColor:(id)arg2 topColor:(id)arg3;
-(void)drawPlaceHolderWithRect:(CGRect)arg1 withAlpha:(float)arg2;
-(void)flushRenderer;
-(void)emptyCaches;
-(void)fillRect:(CGRect)arg1;
-(void)endDrawing;

@end

