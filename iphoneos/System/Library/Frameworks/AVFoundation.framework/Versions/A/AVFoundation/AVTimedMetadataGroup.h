/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:46 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/NSCopying.h>

@class AVTimedMetadataGroupInternal, NSArray;

@interface AVTimedMetadataGroup : NSObject <NSCopying> {

	AVTimedMetadataGroupInternal* _priv;

}

@property (readonly) SCD_Struct_CM6 timeRange; 
@property (copy,readonly) NSArray * items; 
+(void)initialize;
-(id)initWithItems:(id)arg1 timeRange:(SCD_Struct_CM6)arg2 ;
-(opaqueCMSampleBufferRef)_createSerializedRepresentationWithFormatDescription:(opaqueCMFormatDescriptionRef)arg1 error:(id*)arg2 ;
-(id)initWithSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(opaqueCMFormatDescriptionRef)copyFormatDescription;
-(id)init;
-(void)finalize;
-(void)dealloc;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)items;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(SCD_Struct_CM6)timeRange;
@end

