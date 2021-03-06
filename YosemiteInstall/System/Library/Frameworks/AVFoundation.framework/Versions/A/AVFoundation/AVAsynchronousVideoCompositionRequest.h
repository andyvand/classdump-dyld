/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:55:51 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/NSCopying.h>

@class AVAsynchronousVideoCompositionRequestInternal, AVVideoCompositionRenderContext, NSArray;

@interface AVAsynchronousVideoCompositionRequest : NSObject <NSCopying> {

	AVAsynchronousVideoCompositionRequestInternal* _internal;

}

@property (nonatomic,readonly) AVVideoCompositionRenderContext * renderContext; 
@property (nonatomic,readonly) SCD_Struct_CM5 compositionTime; 
@property (nonatomic,readonly) NSArray * sourceTrackIDs; 
@property (nonatomic,readonly) id<AVVideoCompositionInstruction> videoCompositionInstruction; 
-(id<AVVideoCompositionInstruction>)videoCompositionInstruction;
-(void)_willDeallocOrFinalize;
-(OpaqueFigVideoCompositorFrameRef)compositionFrame;
-(id)initUsingSession:(id)arg1 withRenderContext:(id)arg2 compositionFrame:(OpaqueFigVideoCompositorFrameRef)arg3 atTime:(SCD_Struct_CM5)arg4 usingSources:(id)arg5 instruction:(id)arg6 ;
-(SCD_Struct_CM5)compositionTime;
-(NSArray *)sourceTrackIDs;
-(CVBufferRef)sourceFrameByTrackID:(int)arg1 ;
-(void)finishWithComposedVideoFrame:(CVBufferRef)arg1 ;
-(void)finishCancelledRequest;
-(void)finalize;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(AVVideoCompositionRenderContext *)renderContext;
-(void)finishWithError:(id)arg1 ;
@end

