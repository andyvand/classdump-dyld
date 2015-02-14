/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:51 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/IconServices.framework/Versions/A/IconServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IconServices/IconServices-Structs.h>
#import <IconServices/ISOperationBase.h>

@class NSData, NSUUID, ISIconCacheService, NSDictionary;

@interface ISGenerateImageOp : ISOperationBase {

	NSData* _imageData;
	NSUUID* _imageDataUUID;
	unsigned _generatedSize;
	unsigned _generatedScale;
	SCD_Struct_IS5 _optimumSizeRange;
	ISIconCacheService* _iconCache;
	LSBindingRef _binding;
	unsigned _size;
	unsigned _scale;
	NSDictionary* _options;

}

@property (readonly) NSData * imageData;                           //@synthesize imageData=_imageData - In the implementation block
@property (readonly) NSUUID * imageDataUUID;                       //@synthesize imageDataUUID=_imageDataUUID - In the implementation block
@property (readonly) unsigned generatedSize;                       //@synthesize generatedSize=_generatedSize - In the implementation block
@property (readonly) unsigned generatedScale;                      //@synthesize generatedScale=_generatedScale - In the implementation block
@property (readonly) SCD_Struct_IS5 optimumSizeRange;              //@synthesize optimumSizeRange=_optimumSizeRange - In the implementation block
@property (readonly) ISIconCacheService * iconCache;               //@synthesize iconCache=_iconCache - In the implementation block
@property (readonly) LSBindingRef binding;                         //@synthesize binding=_binding - In the implementation block
@property (readonly) unsigned size;                                //@synthesize size=_size - In the implementation block
@property (readonly) unsigned scale;                               //@synthesize scale=_scale - In the implementation block
@property (readonly) NSDictionary * options;                       //@synthesize options=_options - In the implementation block
-(unsigned)scale;
-(SCD_Struct_IS5)optimumSizeRange;
-(char)findInStore;
-(void)generateImageWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithIconCache:(id)arg1 binding:(LSBindingRef)arg2 size:(unsigned)arg3 scale:(unsigned)arg4 options:(id)arg5 ;
-(NSUUID *)imageDataUUID;
-(unsigned)generatedSize;
-(unsigned)generatedScale;
-(ISIconCacheService *)iconCache;
-(void)finalize;
-(void)dealloc;
-(void)start;
-(char)isEqual:(id)arg1 ;
-(LSBindingRef)binding;
-(unsigned)size;
-(NSDictionary *)options;
-(NSData *)imageData;
@end

