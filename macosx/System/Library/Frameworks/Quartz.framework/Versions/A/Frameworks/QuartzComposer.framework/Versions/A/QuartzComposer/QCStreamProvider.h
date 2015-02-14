/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:26 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzComposer/QuartzComposer-Structs.h>
#import <QuartzComposer/QCStreamProvider.h>
@class QCPixelFormat;


@protocol QCStreamProvider
@property (readonly) unsigned long long count; 
@property (readonly) unsigned long long elementSize; 
@property (readonly) unsigned long long pixelsWide; 
@property (readonly) unsigned long long pixelsHigh; 
@property (readonly) unsigned long long pixelsDeep; 
@property (readonly) QCPixelFormat * pixelFormat; 
@property (readonly) int type; 
@property (readonly) char supportsConversion; 
@required
+(char)isCompatibleWithSource:(id)arg1 sourceMD5:(SCD_Struct_QC4*)arg2;
+(id)createProviderWithSource:(id)arg1 options:(id)arg2;
-(unsigned long long)count;
-(int)type;
-(unsigned long long)pixelsHigh;
-(unsigned long long)pixelsWide;
-(QCPixelFormat *)pixelFormat;
-(id)sourceRepresentationType;
-(id)sourceRepresentation;
-(SCD_Struct_QC4*)providerMD5;
-(unsigned long long)elementSize;
-(unsigned long long)pixelsDeep;
-(id)createImage2DMemObjectForManager:(id)arg1 withFormat:(id)arg2 options:(id)arg3;
-(id)createArrayMemObjectForManager:(id)arg1 withCount:(unsigned long long)arg2 elementSize:(unsigned long long)arg3 type:(int)arg4 options:(id)arg5;
-(char)supportsConversion;

@end


@class QCPixelFormat;

@interface QCStreamProvider : NSObject <QCStreamProvider> {

	unsigned long long _identifier;
	unsigned long long _defaultWidth;
	unsigned long long _defaultHeight;
	unsigned long long _defaultDepth;
	void** _unused[4];

}

@property (readonly) unsigned long long count; 
@property (readonly) unsigned long long elementSize; 
@property (readonly) unsigned long long pixelsWide; 
@property (readonly) unsigned long long pixelsHigh; 
@property (readonly) unsigned long long pixelsDeep; 
@property (readonly) QCPixelFormat * pixelFormat; 
@property (readonly) int type; 
@property (readonly) char supportsConversion; 
+(char)isCompatibleWithSource:(id)arg1 sourceMD5:(SCD_Struct_QC4*)arg2 ;
+(id)createProviderWithSource:(id)arg1 options:(id)arg2 ;
-(id)init;
-(unsigned long long)count;
-(id)description;
-(int)type;
-(unsigned long long)pixelsHigh;
-(unsigned long long)pixelsWide;
-(QCPixelFormat *)pixelFormat;
-(id)sourceRepresentationType;
-(id)sourceRepresentation;
-(SCD_Struct_QC4)providerMD5;
-(unsigned long long)elementSize;
-(unsigned long long)pixelsDeep;
-(id)createImage2DMemObjectForManager:(id)arg1 withFormat:(id)arg2 options:(id)arg3 ;
-(id)createArrayMemObjectForManager:(id)arg1 withCount:(unsigned long long)arg2 elementSize:(unsigned long long)arg3 type:(int)arg4 options:(id)arg5 ;
-(char)supportsConversion;
-(void)_setDefaultWidth:(unsigned long long)arg1 ;
-(void)_setDefaultHeight:(unsigned long long)arg1 ;
-(void)_setDefaultDepth:(unsigned long long)arg1 ;
@end

