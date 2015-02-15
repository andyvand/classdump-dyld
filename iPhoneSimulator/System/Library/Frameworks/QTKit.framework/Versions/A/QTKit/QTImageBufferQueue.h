/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:48 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QTKit.framework/Versions/A/QTKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QTKit/QTKit-Structs.h>
#import <QTKit/NSCopying.h>

@interface QTImageBufferQueue : NSObject <NSCopying> {

	QTImageBufferQueueInternal* _internal;

}
-(CVBufferRef)imageBufferForHostTime:(unsigned long long)arg1 ;
-(void)enqueueImageBuffer:(CVBufferRef)arg1 forHostTime:(unsigned long long)arg2 ;
-(char)copyAndDequeueEarliestImageBuffer:(_CVBuffer*)arg1 hostTime:(unsigned long long*)arg2 ;
-(unsigned long long)copyAndDequeueImageBuffers:(_CVBuffer*)arg1 hostTimes:(unsigned long long*)arg2 beforeHostTime:(unsigned long long)arg3 maxCount:(unsigned long long)arg4 ;
-(unsigned long long)copyAndDequeueImageBuffers:(_CVBuffer*)arg1 hostTimes:(unsigned long long*)arg2 minHostTime:(unsigned long long)arg3 maxHostTime:(unsigned long long)arg4 maxCount:(unsigned long long)arg5 ;
-(unsigned long long)getImageBuffers:(_CVBuffer*)arg1 hostTimes:(unsigned long long*)arg2 minHostTime:(unsigned long long)arg3 maxHostTime:(unsigned long long)arg4 maxCount:(unsigned long long)arg5 ;
-(void)getImageBuffer:(_CVBuffer*)arg1 hostTime:(unsigned long long*)arg2 atIndex:(unsigned long long)arg3 ;
-(void)removeAllImageBuffers;
-(void)removeImageBuffersBeforeHostTime:(unsigned long long)arg1 ;
-(void)removeImageBuffersAfterHostTime:(unsigned long long)arg1 ;
-(void)sendImageBuffersToConsumer:(id)arg1 ;
-(id)init;
-(void)finalize;
-(void)dealloc;
-(unsigned long long)count;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

