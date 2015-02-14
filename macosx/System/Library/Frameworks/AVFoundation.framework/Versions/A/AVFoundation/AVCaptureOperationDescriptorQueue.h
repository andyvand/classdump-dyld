/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:15 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class NSMutableArray;

@interface AVCaptureOperationDescriptorQueue : NSObject {

	NSMutableArray* _operationDescriptorQueueItems;

}
-(id)dequeueAllOperationDescriptors;
-(void)enqueueOperationDescriptor:(id)arg1 forTime:(SCD_Struct_CM5)arg2 dequeuedOperationDescriptors:(id*)arg3 ;
-(id)newestOperationDescriptorOfClass:(Class)arg1 operationTime:(SCD_Struct_CM5*)arg2 ;
-(id)operationDescriptorForTime:(SCD_Struct_CM5)arg1 dequeue:(char)arg2 ;
-(id)init;
-(void)dealloc;
@end

